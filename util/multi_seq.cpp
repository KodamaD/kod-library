#pragma once

#include <array>
#include <type_traits>
#include <utility>
#include <vector>

namespace kod {
namespace util {
namespace multi_seq_impl {

template <class T, int N, std::enable_if_t<(N != 0)>* = nullptr>
struct MultiVec {
    using type = std::vector<typename MultiVec<T, N - 1>::type>;
};

template <class T>
struct MultiVec<T, 1> {
    using type = std::vector<T>;
};

template <class T, int N, int... Seq>
struct MultiArray {
    using type = std::array<typename MultiArray<T, Seq...>::type, N>;
};

template <class T, int N>
struct MultiArray<T, N> {
    using type = std::array<T, N>;
};

}  // namespace multi_seq_impl

template <class T, class U>
decltype(auto) make_multi_vec(T&& size, U&& value) {
    using V = std::decay_t<U>;
    return std::vector(std::forward<T>(size), std::forward<V>(value));
}

template <class T, class... Args>
decltype(auto) make_multi_vec(T&& size, Args&&... args) {
    return std::vector(std::forward<T>(size), make_vec(std::forward<Args>(args)...));
}

template <class T, int N>
using MultiVec = typename multi_seq_impl::MultiVec<T, N>::type;

template <class T, int N, int... Seq>
using MultiArray = typename multi_seq_impl::MultiArray<T, N, Seq...>::type;

}  // namespace util
}  // namespace kod

/**
 * @brief 多次元配列
 */