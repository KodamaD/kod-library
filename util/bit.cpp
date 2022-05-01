#pragma once
#ifdef ONLINE_JUDGE
#pragma GCC target("popcnt")
#endif

#include <limits>
#include <type_traits>

namespace kod {
namespace util {

template <class T>
constexpr std::enable_if_t<std::is_integral_v<T>, int> popcount(const T& x) {
    constexpr int Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;
    constexpr int Null = std::numeric_limits<unsigned long long>::digits;
    if constexpr (Nd <= Null) {
        return __builtin_popcountll(x);
    } else {
        static_assert(Nd <= 2 * Null);
        return __bultin_popcountll(x >> Null) + __builtin_popcountll(x);
    }
}

template <class T>
constexpr std::enable_if_t<std::is_integral_v<T>, int> countl_zero(const T& x) {
    constexpr int Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;
    constexpr int Null = std::numeric_limits<unsigned long long>::digits;
    if (x == 0)
        return Nd;
    if constexpr (Nd <= Null) {
        return __builtin_clzll(x) - (Null - Nd);
    } else {
        static_assert(Nd <= 2 * Null);
        const unsigned long long high = x >> Null;
        const unsigned long long low = x;
        return high == 0 ? __builtin_clzll(low) + (Nd - Null)
                         : __builtin_clzll(high) - (2 * Null - Nd);
    }
}

template <class T>
constexpr std::enable_if_t<std::is_integral_v<T>, int> countr_zero(const T& x) {
    constexpr int Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;
    constexpr int Null = std::numeric_limits<unsigned long long>::digits;
    if (x == 0)
        return Nd;
    if constexpr (Nd <= Null) {
        return __builtin_ctzll(x);
    } else {
        static_assert(Nd <= 2 * Null);
        const unsigned long long high = x >> Null;
        const unsigned long long low = x;
        return low == 0 ? __builtin_ctzll(high) + Null : __builtin_ctzll(low);
    }
}

template <class T>
constexpr std::enable_if_t<std::is_integral_v<T>, T> bit_rotl(const T& x, int s) {
    constexpr unsigned Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;
    static_assert((Nd & (Nd - 1)) == 0);
    const unsigned us = s;
    return (x << (us % Nd)) | (x >> ((-us) % Nd));
}

template <class T>
constexpr std::enable_if_t<std::is_integral_v<T>, T> bit_rotr(const T& x, int s) {
    constexpr unsigned Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;
    static_assert((Nd & (Nd - 1)) == 0);
    const unsigned us = s;
    return (x >> (us % Nd)) | (x << ((-us) % Nd));
}

template <class T>
constexpr std::enable_if_t<std::is_integral_v<T>, int> bit_width(const T& x) {
    return std::numeric_limits<std::make_unsigned_t<T>>::digits - countl_zero(x);
}

template <class T>
constexpr std::enable_if_t<std::is_integral_v<T>, int> ceil_log2(const T& x) {
    return x == 0 ? 0 : bit_width(x - 1);
}

}  // namespace util
}  // namespace kod