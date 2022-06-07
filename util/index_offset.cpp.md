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
  bundledCode: "#line 2 \"util/index_offset.cpp\"\n#include <cassert>\n\nnamespace\
    \ kod {\nnamespace util {\n\nclass index_offset {\n    int len, offset;\n\n  public:\n\
    \    constexpr index_offset() : len(0), offset(0) {}\n    explicit constexpr index_offset(const\
    \ int n, const int k) : len(n), offset(k) {}\n\n    constexpr int size() const\
    \ { return len; }\n    constexpr int operator[](const int i) const { return adjust(i);\
    \ }\n\n    constexpr int adjust(const int i) const {\n        assert(0 <= i and\
    \ i < len);\n        return offset + i;\n    }\n    constexpr int recover(const\
    \ int i) const {\n        assert(offset <= i and i < offset + len);\n        return\
    \ i - offset;\n    }\n};\n\n}  // namespace util\n}  // namespace kod\n"
  code: "#pragma once\n#include <cassert>\n\nnamespace kod {\nnamespace util {\n\n\
    class index_offset {\n    int len, offset;\n\n  public:\n    constexpr index_offset()\
    \ : len(0), offset(0) {}\n    explicit constexpr index_offset(const int n, const\
    \ int k) : len(n), offset(k) {}\n\n    constexpr int size() const { return len;\
    \ }\n    constexpr int operator[](const int i) const { return adjust(i); }\n\n\
    \    constexpr int adjust(const int i) const {\n        assert(0 <= i and i <\
    \ len);\n        return offset + i;\n    }\n    constexpr int recover(const int\
    \ i) const {\n        assert(offset <= i and i < offset + len);\n        return\
    \ i - offset;\n    }\n};\n\n}  // namespace util\n}  // namespace kod"
  dependsOn: []
  isVerificationFile: false
  path: util/index_offset.cpp
  requiredBy: []
  timestamp: '2022-06-07 21:43:34+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/index_offset.cpp
layout: document
redirect_from:
- /library/util/index_offset.cpp
- /library/util/index_offset.cpp.html
title: util/index_offset.cpp
---
