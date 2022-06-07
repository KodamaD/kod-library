#pragma once

#include <cstddef>
#include <map>
#include <tuple>
#include <type_traits>
#include <utility>

namespace kod {
namespace algo {

template <class F>
class auto_memoize {
    template <class>
    struct get_sig {};

    template <class T, class R, class S, class... Args>
    struct get_sig<R (T::*)(S, Args...) const> {
        using return_type = R;
        using args = std::tuple<std::decay_t<Args>...>;
    };

    using signature = get_sig<decltype(&F::template operator()<auto_memoize<F>&>)>;
    using R = typename signature::return_type;
    using ArgsTuple = typename signature::args;

    F func;
    std::map<ArgsTuple, R> memo;

    template <std::size_t... I>
    R apply(const ArgsTuple& args_tuple, std::index_sequence<I...>) {
        return func(*this, std::get<I>(args_tuple)...);
    }

  public:
    explicit auto_memoize(const F& func) : func(func), memo() {}

    template <class... Args>
    R operator()(Args&&... args) {
        ArgsTuple args_tuple(std::forward<Args>(args)...);
        const auto itr = memo.find(args_tuple);
        if (itr != memo.end())
            return itr->second;
        const R res =
            apply(args_tuple, std::make_index_sequence<std::tuple_size<ArgsTuple>::value>());
        memo.emplace(std::piecewise_construct, std::move(args_tuple), res);
        return res;
    }
};

}  // namespace algo
}  // namespace kod

/**
 * @brief 自動メモ化
 */