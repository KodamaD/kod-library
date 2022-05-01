#pragma once

#include <utility>

namespace kod {
namespace util {

template <class F>
struct FixedPoint : private F {
    explicit constexpr FixedPoint(F&& f) : F(std::forward<F>(f)) {}
    template <class... Args>
    constexpr decltype(auto) operator()(Args&&... args) const {
        return F::operator()(*this, std::forward<Args>(args)...);
    }
};

template <class F>
constexpr FixedPoint<F> fixed(F&& f) {
    return FixedPoint<F>(std::forward<F>(f));
}

}  // namespace util
}  // namespace kod

/**
 * @brief 不動点コンビネータ
 */