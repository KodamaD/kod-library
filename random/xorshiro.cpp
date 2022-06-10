#pragma once

#include "../util/bit.cpp"

#include <chrono>
#include <cstdint>
#include <limits>
#include <random>

namespace kod {
namespace random {

class xorshiro {
  public:
    using result_type = std::uint64_t;

    static constexpr std::uint64_t min() { return std::numeric_limits<std::uint64_t>::min(); }
    static constexpr std::uint64_t max() { return std::numeric_limits<std::uint64_t>::max(); }

  private:
    std::uint64_t s0, s1;

  public:
    explicit constexpr xorshiro(const std::uint64_t s0, const std::uint64_t s1)
        : s0(s0), s1(s1) {}

    constexpr std::uint64_t operator()() {
        std::uint64_t t0 = s0, t1 = s1;
        const std::uint64_t ret = util::bit_rotl(t0 + t1, 17) + t0;
        t1 ^= t0;
        s0 = util::bit_rotl(t0, 49) ^ t1 ^ (t1 << 21);
        s1 = util::bit_rotl(t1, 28);
        return ret;
    }
};

xorshiro xorshiro_engine(std::chrono::system_clock::now().time_since_epoch().count(),
                         std::random_device()());

}  // namespace random
}  // namespace kod

/**
 * @brief Xorshiro 乱数生成器
 * @see https://prng.di.unimi.it/
 */