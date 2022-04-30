#pragma once

namespace kod {
namespace util {

template <class T>
constexpr bool setmin(T& x, const T& y) {
    if (x > y) {
        x = y;
        return true;
    }
    return false;
}

template <class T>
constexpr bool setmax(T& x, const T& y) {
    if (x < y) {
        x = y;
        return true;
    }
    return false;
}

}  // namespace util
}  // namespace kod