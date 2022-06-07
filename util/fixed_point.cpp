#pragma once

#include <utility>

namespace kod {
namespace util {

template <class F>
struct fixed_point : private F {
    explicit constexpr fixed_point(F&& f) : F(std::forward<F>(f)) {}
    template <class... Args>
    constexpr decltype(auto) operator()(Args&&... args) const {
        return F::operator()(*this, std::forward<Args>(args)...);
    }
};

}  // namespace util
}  // namespace kod