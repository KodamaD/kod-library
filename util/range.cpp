#pragma once

#include <variant>

namespace kod {
namespace util {

class ForwardRange {
    int src, dst;

  public:
    explicit constexpr ForwardRange(const int l, const int r) : src(l), dst(r) {}
    explicit constexpr ForwardRange(const int n) : src(0), dst(n) {}
    constexpr ForwardRange begin() const { return *this; }
    constexpr std::monostate end() const { return {}; }
    constexpr bool operator!=(std::monostate) const { return src < dst; }
    constexpr void operator++() const {}
    constexpr int operator*() { return src++; }
};

class BackwardRange {
    int src, dst;

  public:
    explicit constexpr BackwardRange(const int l, const int r) : src(r), dst(l) {}
    explicit constexpr BackwardRange(const int n) : src(n), dst(0) {}
    constexpr BackwardRange begin() const { return *this; }
    constexpr std::monostate end() const { return {}; }
    constexpr bool operator!=(std::monostate) const { return src > dst; }
    constexpr void operator++() const {}
    constexpr int operator*() { return --src; }
};

using rep = ForwardRange;
using revrep = BackwardRange;

}  // namespace util
}  // namespace kod

/**
 * @brief 昇順・降順走査
 */