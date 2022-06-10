#pragma once

#include "xorshiro.cpp"

#include <algorithm>
#include <iterator>
#include <random>
#include <vector>

namespace kod {
namespace random {

template <class C>
void shuffle_seq(C& v) {
    std::shuffle(std::begin(v), std::end(v), xorshiro_engine);
}

template <class T>
std::vector<T> rand_perm(const int n, const T& first = 0) {
    std::vector<T> p(n);
    std::iota(std::begin(p), std::end(p), first);
    shuffle_seq(p);
    return p;
}

}  // namespace random
}  // namespace kod

/**
 * @brief 数列生成
 */