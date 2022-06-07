#pragma once

#include <variant>

namespace kod {
namespace util {

class rep {
    int src, dst;

  public:
    explicit constexpr rep(const int l, const int r) : src(l), dst(r) {}
    explicit constexpr rep(const int n) : src(0), dst(n) {}
    constexpr rep begin() const { return *this; }
    constexpr std::monostate end() const { return {}; }
    constexpr bool operator!=(std::monostate) const { return src < dst; }
    constexpr void operator++() const {}
    constexpr int operator*() { return src++; }
};

class revrep {
    int src, dst;

  public:
    explicit constexpr revrep(const int l, const int r) : src(r), dst(l) {}
    explicit constexpr revrep(const int n) : src(n), dst(0) {}
    constexpr revrep begin() const { return *this; }
    constexpr std::monostate end() const { return {}; }
    constexpr bool operator!=(std::monostate) const { return src > dst; }
    constexpr void operator++() const {}
    constexpr int operator*() { return --src; }
};

}  // namespace util
}  // namespace kod