---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u6607\u9806\u30FB\u964D\u9806\u8D70\u67FB"
    links: []
  bundledCode: "#line 2 \"util/range.cpp\"\n\n#include <variant>\n\nnamespace kod\
    \ {\nnamespace util {\n\nclass ForwardRange {\n    int src, dst;\n\n  public:\n\
    \    explicit constexpr ForwardRange(const int l, const int r) : src(l), dst(r)\
    \ {}\n    explicit constexpr ForwardRange(const int n) : src(0), dst(n) {}\n \
    \   constexpr ForwardRange begin() const { return *this; }\n    constexpr std::monostate\
    \ end() const { return {}; }\n    constexpr bool operator!=(std::monostate) const\
    \ { return src < dst; }\n    constexpr void operator++() const {}\n    constexpr\
    \ int operator*() { return src++; }\n};\n\nclass BackwardRange {\n    int src,\
    \ dst;\n\n  public:\n    explicit constexpr BackwardRange(const int l, const int\
    \ r) : src(r), dst(l) {}\n    explicit constexpr BackwardRange(const int n) :\
    \ src(n), dst(0) {}\n    constexpr BackwardRange begin() const { return *this;\
    \ }\n    constexpr std::monostate end() const { return {}; }\n    constexpr bool\
    \ operator!=(std::monostate) const { return src > dst; }\n    constexpr void operator++()\
    \ const {}\n    constexpr int operator*() { return --src; }\n};\n\nusing rep =\
    \ ForwardRange;\nusing revrep = BackwardRange;\n\n}  // namespace util\n}  //\
    \ namespace kod\n\n/**\n * @brief \u6607\u9806\u30FB\u964D\u9806\u8D70\u67FB\n\
    \ */\n"
  code: "#pragma once\n\n#include <variant>\n\nnamespace kod {\nnamespace util {\n\
    \nclass ForwardRange {\n    int src, dst;\n\n  public:\n    explicit constexpr\
    \ ForwardRange(const int l, const int r) : src(l), dst(r) {}\n    explicit constexpr\
    \ ForwardRange(const int n) : src(0), dst(n) {}\n    constexpr ForwardRange begin()\
    \ const { return *this; }\n    constexpr std::monostate end() const { return {};\
    \ }\n    constexpr bool operator!=(std::monostate) const { return src < dst; }\n\
    \    constexpr void operator++() const {}\n    constexpr int operator*() { return\
    \ src++; }\n};\n\nclass BackwardRange {\n    int src, dst;\n\n  public:\n    explicit\
    \ constexpr BackwardRange(const int l, const int r) : src(r), dst(l) {}\n    explicit\
    \ constexpr BackwardRange(const int n) : src(n), dst(0) {}\n    constexpr BackwardRange\
    \ begin() const { return *this; }\n    constexpr std::monostate end() const {\
    \ return {}; }\n    constexpr bool operator!=(std::monostate) const { return src\
    \ > dst; }\n    constexpr void operator++() const {}\n    constexpr int operator*()\
    \ { return --src; }\n};\n\nusing rep = ForwardRange;\nusing revrep = BackwardRange;\n\
    \n}  // namespace util\n}  // namespace kod\n\n/**\n * @brief \u6607\u9806\u30FB\
    \u964D\u9806\u8D70\u67FB\n */"
  dependsOn: []
  isVerificationFile: false
  path: util/range.cpp
  requiredBy: []
  timestamp: '2022-05-01 16:24:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/range.cpp
layout: document
redirect_from:
- /library/util/range.cpp
- /library/util/range.cpp.html
title: "\u6607\u9806\u30FB\u964D\u9806\u8D70\u67FB"
---
