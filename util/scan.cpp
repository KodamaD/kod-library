#pragma once

#include <array>
#include <cassert>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

namespace kod {
namespace util {

template <class T>
T scan(std::istream& is) {
    T x;
    is >> x;
    return x;
}

template <class T>
T scan() {
    return scan<T>(std::cin);
}

template <class T>
std::vector<T> scan_vec(std::istream& is, const int n) {
    assert(n >= 0);
    std::vector<T> v(n);
    for (auto& x : v)
        is >> x;
    return v;
}

template <class T>
std::vector<T> scan_vec(const int n) {
    return scan_vec<T>(std::cin, n);
}

template <class T>
std::vector<T> scan_vec(std::istream& is) {
    return scan_vec(is, scan<int>(is));
}

template <class T>
std::vector<T> scan_vec() {
    return scan_vec<T>(std::cin);
}

template <class T, int N>
std::array<T, N> scan_array(std::istream& is) {
    std::array<T, N> a;
    for (auto& x : a)
        is >> x;
    return a;
}

template <class T, int N>
std::array<T, N> scan_array() {
    return scan_array<T, N>(std::cin);
}

std::vector<char> scan_chars(std::istream& is) {
    std::string s;
    is >> s;
    return std::vector<char>(std::cbegin(s), std::cend(s));
}

std::vector<char> scan_chars() {
    return scan_chars(std::cin);
}

}  // namespace util
}  // namespace kod