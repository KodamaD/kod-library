---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u30D3\u30C3\u30C8\u64CD\u4F5C\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\
      \u30A3"
    links: []
  bundledCode: "#line 2 \"util/bit.cpp\"\n#ifdef ONLINE_JUDGE\n#pragma GCC target(\"\
    popcnt\")\n#endif\n\n#include <limits>\n#include <type_traits>\n\nnamespace kod\
    \ {\nnamespace util {\n\ntemplate <class T>\nconstexpr std::enable_if_t<std::is_integral_v<T>,\
    \ int> popcount(const T& x) {\n    constexpr int Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n\
    \    constexpr int Null = std::numeric_limits<unsigned long long>::digits;\n \
    \   if constexpr (Nd <= Null) {\n        return __builtin_popcountll(x);\n   \
    \ } else {\n        static_assert(Nd <= 2 * Null);\n        return __bultin_popcountll(x\
    \ >> Null) + __builtin_popcountll(x);\n    }\n}\n\ntemplate <class T>\nconstexpr\
    \ std::enable_if_t<std::is_integral_v<T>, int> countl_zero(const T& x) {\n   \
    \ constexpr int Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n \
    \   constexpr int Null = std::numeric_limits<unsigned long long>::digits;\n  \
    \  if (x == 0)\n        return Nd;\n    if constexpr (Nd <= Null) {\n        return\
    \ __builtin_clzll(x) - (Null - Nd);\n    } else {\n        static_assert(Nd <=\
    \ 2 * Null);\n        const unsigned long long high = x >> Null;\n        const\
    \ unsigned long long low = x;\n        return high == 0 ? __builtin_clzll(low)\
    \ + (Nd - Null)\n                         : __builtin_clzll(high) - (2 * Null\
    \ - Nd);\n    }\n}\n\ntemplate <class T>\nconstexpr std::enable_if_t<std::is_integral_v<T>,\
    \ int> countr_zero(const T& x) {\n    constexpr int Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n\
    \    constexpr int Null = std::numeric_limits<unsigned long long>::digits;\n \
    \   if (x == 0)\n        return Nd;\n    if constexpr (Nd <= Null) {\n       \
    \ return __builtin_ctzll(x);\n    } else {\n        static_assert(Nd <= 2 * Null);\n\
    \        const unsigned long long high = x >> Null;\n        const unsigned long\
    \ long low = x;\n        return low == 0 ? __builtin_ctzll(high) + Null : __builtin_ctzll(low);\n\
    \    }\n}\n\ntemplate <class T>\nconstexpr std::enable_if_t<std::is_integral_v<T>,\
    \ T> bit_rotl(const T& x, int s) {\n    constexpr unsigned Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n\
    \    static_assert((Nd & (Nd - 1)) == 0);\n    const unsigned us = s;\n    return\
    \ (x << (us % Nd)) | (x >> ((-us) % Nd));\n}\n\ntemplate <class T>\nconstexpr\
    \ std::enable_if_t<std::is_integral_v<T>, T> bit_rotr(const T& x, int s) {\n \
    \   constexpr unsigned Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n\
    \    static_assert((Nd & (Nd - 1)) == 0);\n    const unsigned us = s;\n    return\
    \ (x >> (us % Nd)) | (x << ((-us) % Nd));\n}\n\ntemplate <class T>\nconstexpr\
    \ std::enable_if_t<std::is_integral_v<T>, int> bit_width(const T& x) {\n    return\
    \ std::numeric_limits<std::make_unsigned_t<T>>::digits - countl_zero(x);\n}\n\n\
    template <class T>\nconstexpr std::enable_if_t<std::is_integral_v<T>, int> ceil_log2(const\
    \ T& x) {\n    return x == 0 ? 0 : bit_width(x - 1);\n}\n\n}  // namespace util\n\
    }  // namespace kod\n\n/**\n * @brief \u30D3\u30C3\u30C8\u64CD\u4F5C\u30E6\u30FC\
    \u30C6\u30A3\u30EA\u30C6\u30A3\n */\n"
  code: "#pragma once\n#ifdef ONLINE_JUDGE\n#pragma GCC target(\"popcnt\")\n#endif\n\
    \n#include <limits>\n#include <type_traits>\n\nnamespace kod {\nnamespace util\
    \ {\n\ntemplate <class T>\nconstexpr std::enable_if_t<std::is_integral_v<T>, int>\
    \ popcount(const T& x) {\n    constexpr int Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n\
    \    constexpr int Null = std::numeric_limits<unsigned long long>::digits;\n \
    \   if constexpr (Nd <= Null) {\n        return __builtin_popcountll(x);\n   \
    \ } else {\n        static_assert(Nd <= 2 * Null);\n        return __bultin_popcountll(x\
    \ >> Null) + __builtin_popcountll(x);\n    }\n}\n\ntemplate <class T>\nconstexpr\
    \ std::enable_if_t<std::is_integral_v<T>, int> countl_zero(const T& x) {\n   \
    \ constexpr int Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n \
    \   constexpr int Null = std::numeric_limits<unsigned long long>::digits;\n  \
    \  if (x == 0)\n        return Nd;\n    if constexpr (Nd <= Null) {\n        return\
    \ __builtin_clzll(x) - (Null - Nd);\n    } else {\n        static_assert(Nd <=\
    \ 2 * Null);\n        const unsigned long long high = x >> Null;\n        const\
    \ unsigned long long low = x;\n        return high == 0 ? __builtin_clzll(low)\
    \ + (Nd - Null)\n                         : __builtin_clzll(high) - (2 * Null\
    \ - Nd);\n    }\n}\n\ntemplate <class T>\nconstexpr std::enable_if_t<std::is_integral_v<T>,\
    \ int> countr_zero(const T& x) {\n    constexpr int Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n\
    \    constexpr int Null = std::numeric_limits<unsigned long long>::digits;\n \
    \   if (x == 0)\n        return Nd;\n    if constexpr (Nd <= Null) {\n       \
    \ return __builtin_ctzll(x);\n    } else {\n        static_assert(Nd <= 2 * Null);\n\
    \        const unsigned long long high = x >> Null;\n        const unsigned long\
    \ long low = x;\n        return low == 0 ? __builtin_ctzll(high) + Null : __builtin_ctzll(low);\n\
    \    }\n}\n\ntemplate <class T>\nconstexpr std::enable_if_t<std::is_integral_v<T>,\
    \ T> bit_rotl(const T& x, int s) {\n    constexpr unsigned Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n\
    \    static_assert((Nd & (Nd - 1)) == 0);\n    const unsigned us = s;\n    return\
    \ (x << (us % Nd)) | (x >> ((-us) % Nd));\n}\n\ntemplate <class T>\nconstexpr\
    \ std::enable_if_t<std::is_integral_v<T>, T> bit_rotr(const T& x, int s) {\n \
    \   constexpr unsigned Nd = std::numeric_limits<std::make_unsigned_t<T>>::digits;\n\
    \    static_assert((Nd & (Nd - 1)) == 0);\n    const unsigned us = s;\n    return\
    \ (x >> (us % Nd)) | (x << ((-us) % Nd));\n}\n\ntemplate <class T>\nconstexpr\
    \ std::enable_if_t<std::is_integral_v<T>, int> bit_width(const T& x) {\n    return\
    \ std::numeric_limits<std::make_unsigned_t<T>>::digits - countl_zero(x);\n}\n\n\
    template <class T>\nconstexpr std::enable_if_t<std::is_integral_v<T>, int> ceil_log2(const\
    \ T& x) {\n    return x == 0 ? 0 : bit_width(x - 1);\n}\n\n}  // namespace util\n\
    }  // namespace kod\n\n/**\n * @brief \u30D3\u30C3\u30C8\u64CD\u4F5C\u30E6\u30FC\
    \u30C6\u30A3\u30EA\u30C6\u30A3\n */"
  dependsOn: []
  isVerificationFile: false
  path: util/bit.cpp
  requiredBy: []
  timestamp: '2022-05-01 16:24:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/bit.cpp
layout: document
redirect_from:
- /library/util/bit.cpp
- /library/util/bit.cpp.html
title: "\u30D3\u30C3\u30C8\u64CD\u4F5C\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3"
---
