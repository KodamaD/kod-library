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
  bundledCode: "#line 2 \"util/select.cpp\"\n\nnamespace kod {\nnamespace util {\n\
    \ntemplate <class T>\nconstexpr bool setmin(T& x, const T& y) {\n    if (x > y)\
    \ {\n        x = y;\n        return true;\n    }\n    return false;\n}\n\ntemplate\
    \ <class T>\nconstexpr bool setmax(T& x, const T& y) {\n    if (x < y) {\n   \
    \     x = y;\n        return true;\n    }\n    return false;\n}\n\n}  // namespace\
    \ util\n}  // namespace kod\n"
  code: "#pragma once\n\nnamespace kod {\nnamespace util {\n\ntemplate <class T>\n\
    constexpr bool setmin(T& x, const T& y) {\n    if (x > y) {\n        x = y;\n\
    \        return true;\n    }\n    return false;\n}\n\ntemplate <class T>\nconstexpr\
    \ bool setmax(T& x, const T& y) {\n    if (x < y) {\n        x = y;\n        return\
    \ true;\n    }\n    return false;\n}\n\n}  // namespace util\n}  // namespace\
    \ kod"
  dependsOn: []
  isVerificationFile: false
  path: util/select.cpp
  requiredBy: []
  timestamp: '2022-06-07 21:43:34+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/select.cpp
layout: document
redirect_from:
- /library/util/select.cpp
- /library/util/select.cpp.html
title: util/select.cpp
---
