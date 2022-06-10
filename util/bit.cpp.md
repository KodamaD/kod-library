---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: random/number.cpp
    title: "\u6570\u5024\u751F\u6210"
  - icon: ':warning:'
    path: random/sequence.cpp
    title: "\u6570\u5217\u751F\u6210"
  - icon: ':warning:'
    path: random/xorshiro.cpp
    title: "Xorshiro \u4E71\u6570\u751F\u6210\u5668"
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"util/bit.cpp\"\n\n#include <cstdint>\n\nnamespace kod {\n\
    namespace util {\n\nconstexpr int popcount(const std::uint64_t x) {\n    return\
    \ __builtin_popcountll(x);\n}\n\nconstexpr int countl_zero(const std::uint64_t\
    \ x) {\n    return x == 0 ? 64 : __builtin_clzll(x);\n}\n\nconstexpr int countr_zero(const\
    \ std::uint64_t x) {\n    return x == 0 ? 64 : __builtin_ctzll(x);\n}\n\nconstexpr\
    \ int bit_width(const std::uint64_t x) {\n    return 64 - countl_zero(x);\n}\n\
    \nconstexpr int ceil_log2(const std::uint64_t x) {\n    return x == 0 ? 0 : bit_width(x\
    \ - 1);\n}\n\nconstexpr std::uint64_t bit_rotl(const std::uint64_t x, const int\
    \ s) {\n    const unsigned us = s;\n    return (x << (us % 64)) | (x >> ((-us)\
    \ % 64));\n}\n\nconstexpr std::uint64_t bit_rotr(const std::uint64_t x, const\
    \ int s) {\n    const unsigned us = s;\n    return (x >> (us % 64)) | (x << ((-us)\
    \ % 64));\n}\n\n}  // namespace util\n}  // namespace kod\n"
  code: "#pragma once\n\n#include <cstdint>\n\nnamespace kod {\nnamespace util {\n\
    \nconstexpr int popcount(const std::uint64_t x) {\n    return __builtin_popcountll(x);\n\
    }\n\nconstexpr int countl_zero(const std::uint64_t x) {\n    return x == 0 ? 64\
    \ : __builtin_clzll(x);\n}\n\nconstexpr int countr_zero(const std::uint64_t x)\
    \ {\n    return x == 0 ? 64 : __builtin_ctzll(x);\n}\n\nconstexpr int bit_width(const\
    \ std::uint64_t x) {\n    return 64 - countl_zero(x);\n}\n\nconstexpr int ceil_log2(const\
    \ std::uint64_t x) {\n    return x == 0 ? 0 : bit_width(x - 1);\n}\n\nconstexpr\
    \ std::uint64_t bit_rotl(const std::uint64_t x, const int s) {\n    const unsigned\
    \ us = s;\n    return (x << (us % 64)) | (x >> ((-us) % 64));\n}\n\nconstexpr\
    \ std::uint64_t bit_rotr(const std::uint64_t x, const int s) {\n    const unsigned\
    \ us = s;\n    return (x >> (us % 64)) | (x << ((-us) % 64));\n}\n\n}  // namespace\
    \ util\n}  // namespace kod"
  dependsOn: []
  isVerificationFile: false
  path: util/bit.cpp
  requiredBy:
  - random/number.cpp
  - random/sequence.cpp
  - random/xorshiro.cpp
  timestamp: '2022-06-07 21:43:34+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/bit.cpp
layout: document
redirect_from:
- /library/util/bit.cpp
- /library/util/bit.cpp.html
title: util/bit.cpp
---
