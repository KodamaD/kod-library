#pragma once

#include <algorithm>
#include <cassert>
#include <iterator>
#include <numeric>
#include <vector>

namespace kod {
namespace util {

template <class T>
int dedup(std::vector<T>& v) {
    std::sort(std::begin(v), std::end(v));
    v.erase(std::unique(std::begin(v), std::end(v)), std::end(v));
    return std::size(v);
}

template <class T>
int lowb(const std::vector<T>& v, const T& x) {
    return std::distance(std::cbegin(v), std::lower_bound(std::cbegin(v), std::cend(v), x));
}

template <class T>
int upb(const std::vector<T>& v, const T& x) {
    return std::distance(std::cbegin(v), std::upper_bound(std::cbegin(v), std::cend(v), x));
}

template <class F>
std::vector<int> order_by(const int n, const F& f) {
    assert(n >= 0);
    std::vector v(n);
    std::iota(std::begin(v), std::end(v), 0);
    std::sort(std::begin(v), std::end(v), f);
    return v;
}

template <class T, class Comp = std::less<T>>
std::vector<int> order_by_key(const std::vector<T>& v, const Comp& comp = Comp()) {
    return sorted_by(std::size(v), [&](const int i, const int j) { return comp(v[i], v[j]); });
}

}  // namespace util
}  // namespace kod