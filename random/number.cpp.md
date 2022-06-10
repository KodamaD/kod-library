---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: random/xorshiro.cpp
    title: "Xorshiro \u4E71\u6570\u751F\u6210\u5668"
  - icon: ':warning:'
    path: util/bit.cpp
    title: util/bit.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u6570\u5024\u751F\u6210"
    links: []
  bundledCode: "#line 2 \"random/number.cpp\"\n\n#line 2 \"random/xorshiro.cpp\"\n\
    \n#line 2 \"util/bit.cpp\"\n\n#include <cstdint>\n\nnamespace kod {\nnamespace\
    \ util {\n\nconstexpr int popcount(const std::uint64_t x) {\n    return __builtin_popcountll(x);\n\
    }\n\nconstexpr int countl_zero(const std::uint64_t x) {\n    return x == 0 ? 64\
    \ : __builtin_clzll(x);\n}\n\nconstexpr int countr_zero(const std::uint64_t x)\
    \ {\n    return x == 0 ? 64 : __builtin_ctzll(x);\n}\n\nconstexpr int bit_width(const\
    \ std::uint64_t x) {\n    return 64 - countl_zero(x);\n}\n\nconstexpr int ceil_log2(const\
    \ std::uint64_t x) {\n    return x == 0 ? 0 : bit_width(x - 1);\n}\n\nconstexpr\
    \ std::uint64_t bit_rotl(const std::uint64_t x, const int s) {\n    const unsigned\
    \ us = s;\n    return (x << (us % 64)) | (x >> ((-us) % 64));\n}\n\nconstexpr\
    \ std::uint64_t bit_rotr(const std::uint64_t x, const int s) {\n    const unsigned\
    \ us = s;\n    return (x >> (us % 64)) | (x << ((-us) % 64));\n}\n\n}  // namespace\
    \ util\n}  // namespace kod\n#line 4 \"random/xorshiro.cpp\"\n\n#include <chrono>\n\
    #line 7 \"random/xorshiro.cpp\"\n#include <limits>\n#include <random>\n\nnamespace\
    \ kod {\nnamespace random {\n\nclass xorshiro {\n  public:\n    using result_type\
    \ = std::uint64_t;\n\n    static constexpr std::uint64_t min() { return std::numeric_limits<std::uint64_t>::min();\
    \ }\n    static constexpr std::uint64_t max() { return std::numeric_limits<std::uint64_t>::max();\
    \ }\n\n  private:\n    std::uint64_t s0, s1;\n\n  public:\n    explicit constexpr\
    \ xorshiro(const std::uint64_t s0, const std::uint64_t s1)\n        : s0(s0),\
    \ s1(s1) {}\n\n    constexpr std::uint64_t operator()() {\n        std::uint64_t\
    \ t0 = s0, t1 = s1;\n        const std::uint64_t ret = util::bit_rotl(t0 + t1,\
    \ 17) + t0;\n        t1 ^= t0;\n        s0 = util::bit_rotl(t0, 49) ^ t1 ^ (t1\
    \ << 21);\n        s1 = util::bit_rotl(t1, 28);\n        return ret;\n    }\n\
    };\n\nxorshiro xorshiro_engine(std::chrono::system_clock::now().time_since_epoch().count(),\n\
    \                         std::random_device()());\n\n}  // namespace random\n\
    }  // namespace kod\n\n/**\n * @brief Xorshiro \u4E71\u6570\u751F\u6210\u5668\n\
    \ * @see https://prng.di.unimi.it/\n */\n#line 4 \"random/number.cpp\"\n\n#line\
    \ 6 \"random/number.cpp\"\n\nnamespace kod {\nnamespace random {\n\ntemplate <class\
    \ T>\nT rand_int(const T& min, const T& max) {\n    return std::uniform_int_distribution<T>(min,\
    \ max)(xorshiro_engine);\n}\n\ntemplate <class T>\nT rand_real(const T& min, const\
    \ T& max) {\n    return std::uniform_real_distribution<T>(min, max)(xorshiro_engine);\n\
    }\n\ntemplate <class T>\nbool rand_bool(const T& prob) {\n    return rand_real<T>(0,\
    \ 1) < prob;\n}\n\n}  // namespace random\n}  // namespace kod\n\n/**\n * @brief\
    \ \u6570\u5024\u751F\u6210\n */\n"
  code: "#pragma once\n\n#include \"xorshiro.cpp\"\n\n#include <random>\n\nnamespace\
    \ kod {\nnamespace random {\n\ntemplate <class T>\nT rand_int(const T& min, const\
    \ T& max) {\n    return std::uniform_int_distribution<T>(min, max)(xorshiro_engine);\n\
    }\n\ntemplate <class T>\nT rand_real(const T& min, const T& max) {\n    return\
    \ std::uniform_real_distribution<T>(min, max)(xorshiro_engine);\n}\n\ntemplate\
    \ <class T>\nbool rand_bool(const T& prob) {\n    return rand_real<T>(0, 1) <\
    \ prob;\n}\n\n}  // namespace random\n}  // namespace kod\n\n/**\n * @brief \u6570\
    \u5024\u751F\u6210\n */"
  dependsOn:
  - random/xorshiro.cpp
  - util/bit.cpp
  isVerificationFile: false
  path: random/number.cpp
  requiredBy: []
  timestamp: '2022-06-10 10:20:32+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: random/number.cpp
layout: document
redirect_from:
- /library/random/number.cpp
- /library/random/number.cpp.html
title: "\u6570\u5024\u751F\u6210"
---
