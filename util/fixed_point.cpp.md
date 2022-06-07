---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"util/fixed_point.cpp\"\n\n#include <utility>\n\nnamespace\
    \ kod {\nnamespace util {\n\ntemplate <class F>\nstruct fixed_point : private\
    \ F {\n    explicit constexpr fixed_point(F&& f) : F(std::forward<F>(f)) {}\n\
    \    template <class... Args>\n    constexpr decltype(auto) operator()(Args&&...\
    \ args) const {\n        return F::operator()(*this, std::forward<Args>(args)...);\n\
    \    }\n};\n\n}  // namespace util\n}  // namespace kod\n"
  code: "#pragma once\n\n#include <utility>\n\nnamespace kod {\nnamespace util {\n\
    \ntemplate <class F>\nstruct fixed_point : private F {\n    explicit constexpr\
    \ fixed_point(F&& f) : F(std::forward<F>(f)) {}\n    template <class... Args>\n\
    \    constexpr decltype(auto) operator()(Args&&... args) const {\n        return\
    \ F::operator()(*this, std::forward<Args>(args)...);\n    }\n};\n\n}  // namespace\
    \ util\n}  // namespace kod"
  dependsOn: []
  isVerificationFile: false
  path: util/fixed_point.cpp
  requiredBy: []
  timestamp: '2022-06-07 21:43:34+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/fixed_point.cpp
layout: document
redirect_from:
- /library/util/fixed_point.cpp
- /library/util/fixed_point.cpp.html
title: util/fixed_point.cpp
---
