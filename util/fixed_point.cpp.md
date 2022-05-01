---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u4E0D\u52D5\u70B9\u30B3\u30F3\u30D3\u30CD\u30FC\u30BF"
    links: []
  bundledCode: "#line 2 \"util/fixed_point.cpp\"\n\n#include <utility>\n\nnamespace\
    \ kod {\nnamespace util {\n\ntemplate <class F>\nstruct FixedPoint : private F\
    \ {\n    explicit constexpr FixedPoint(F&& f) : F(std::forward<F>(f)) {}\n   \
    \ template <class... Args>\n    constexpr decltype(auto) operator()(Args&&...\
    \ args) const {\n        return F::operator()(*this, std::forward<Args>(args)...);\n\
    \    }\n};\n\ntemplate <class F>\nconstexpr FixedPoint<F> fixed(F&& f) {\n   \
    \ return FixedPoint<F>(std::forward<F>(f));\n}\n\n}  // namespace util\n}  //\
    \ namespace kod\n\n/**\n * @brief \u4E0D\u52D5\u70B9\u30B3\u30F3\u30D3\u30CD\u30FC\
    \u30BF\n */\n"
  code: "#pragma once\n\n#include <utility>\n\nnamespace kod {\nnamespace util {\n\
    \ntemplate <class F>\nstruct FixedPoint : private F {\n    explicit constexpr\
    \ FixedPoint(F&& f) : F(std::forward<F>(f)) {}\n    template <class... Args>\n\
    \    constexpr decltype(auto) operator()(Args&&... args) const {\n        return\
    \ F::operator()(*this, std::forward<Args>(args)...);\n    }\n};\n\ntemplate <class\
    \ F>\nconstexpr FixedPoint<F> fixed(F&& f) {\n    return FixedPoint<F>(std::forward<F>(f));\n\
    }\n\n}  // namespace util\n}  // namespace kod\n\n/**\n * @brief \u4E0D\u52D5\u70B9\
    \u30B3\u30F3\u30D3\u30CD\u30FC\u30BF\n */"
  dependsOn: []
  isVerificationFile: false
  path: util/fixed_point.cpp
  requiredBy: []
  timestamp: '2022-05-01 16:24:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/fixed_point.cpp
layout: document
redirect_from:
- /library/util/fixed_point.cpp
- /library/util/fixed_point.cpp.html
title: "\u4E0D\u52D5\u70B9\u30B3\u30F3\u30D3\u30CD\u30FC\u30BF"
---
