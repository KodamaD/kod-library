#pragma once

#include "xorshiro.cpp"

#include <random>

namespace kod {
namespace random {

template <class T>
T rand_int(const T& min, const T& max) {
    return std::uniform_int_distribution<T>(min, max)(xorshiro_engine);
}

template <class T>
T rand_real(const T& min, const T& max) {
    return std::uniform_real_distribution<T>(min, max)(xorshiro_engine);
}

template <class T>
bool rand_bool(const T& prob) {
    return rand_real<T>(0, 1) < prob;
}

}  // namespace random
}  // namespace kod

/**
 * @brief 数値生成
 */