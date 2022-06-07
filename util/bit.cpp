#pragma once

#include <cstdint>

namespace kod {
namespace util {

constexpr int popcount(const std::uint64_t x) {
    return __builtin_popcountll(x);
}

constexpr int countl_zero(const std::uint64_t x) {
    return x == 0 ? 64 : __builtin_clzll(x);
}

constexpr int countr_zero(const std::uint64_t x) {
    return x == 0 ? 64 : __builtin_ctzll(x);
}

constexpr int bit_width(const std::uint64_t x) {
    return 64 - countl_zero(x);
}

constexpr int ceil_log2(const std::uint64_t x) {
    return x == 0 ? 0 : bit_width(x - 1);
}

constexpr std::uint64_t bit_rotl(const std::uint64_t x, const int s) {
    const unsigned us = s;
    return (x << (us % 64)) | (x >> ((-us) % 64));
}

constexpr std::uint64_t bit_rotr(const std::uint64_t x, const int s) {
    const unsigned us = s;
    return (x >> (us % 64)) | (x << ((-us) % 64));
}

}  // namespace util
}  // namespace kod