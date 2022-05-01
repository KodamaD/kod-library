---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "std::vector \u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3"
    links: []
  bundledCode: "#line 2 \"util/ordered_vec.cpp\"\n\n#include <algorithm>\n#include\
    \ <iterator>\n#include <numeric>\n#include <vector>\n\nnamespace kod {\nnamespace\
    \ util {\n\ntemplate <class T>\nint dedup(std::vector<T>& v) {\n    std::sort(std::begin(v),\
    \ std::end(v));\n    v.erase(std::unique(std::begin(v), std::end(v)), std::end(v));\n\
    \    return std::size(v);\n}\n\ntemplate <class T>\nint lowb(const std::vector<T>&\
    \ v, const T& x) {\n    return std::distance(std::cbegin(v), std::lower_bound(std::cbegin(v),\
    \ std::cend(v), x));\n}\n\ntemplate <class T>\nint upb(const std::vector<T>& v,\
    \ const T& x) {\n    return std::distance(std::cbegin(v), std::upper_bound(std::cbegin(v),\
    \ std::cend(v), x));\n}\n\ntemplate <class F>\nstd::vector<int> order_by(const\
    \ int n, const F& f) {\n    std::vector v(n);\n    std::iota(std::begin(v), std::end(v),\
    \ 0);\n    std::sort(std::begin(v), std::end(v), f);\n    return v;\n}\n\ntemplate\
    \ <class T, class Comp = std::less<T>>\nstd::vector<int> order_by_key(const std::vector<T>&\
    \ v, const Comp& comp = Comp()) {\n    return sorted_by(std::size(v), [&](const\
    \ int i, const int j) { return comp(v[i], v[j]); });\n}\n\n}  // namespace util\n\
    }  // namespace kod\n\n/**\n * @brief std::vector \u30E6\u30FC\u30C6\u30A3\u30EA\
    \u30C6\u30A3\n */\n"
  code: "#pragma once\n\n#include <algorithm>\n#include <iterator>\n#include <numeric>\n\
    #include <vector>\n\nnamespace kod {\nnamespace util {\n\ntemplate <class T>\n\
    int dedup(std::vector<T>& v) {\n    std::sort(std::begin(v), std::end(v));\n \
    \   v.erase(std::unique(std::begin(v), std::end(v)), std::end(v));\n    return\
    \ std::size(v);\n}\n\ntemplate <class T>\nint lowb(const std::vector<T>& v, const\
    \ T& x) {\n    return std::distance(std::cbegin(v), std::lower_bound(std::cbegin(v),\
    \ std::cend(v), x));\n}\n\ntemplate <class T>\nint upb(const std::vector<T>& v,\
    \ const T& x) {\n    return std::distance(std::cbegin(v), std::upper_bound(std::cbegin(v),\
    \ std::cend(v), x));\n}\n\ntemplate <class F>\nstd::vector<int> order_by(const\
    \ int n, const F& f) {\n    std::vector v(n);\n    std::iota(std::begin(v), std::end(v),\
    \ 0);\n    std::sort(std::begin(v), std::end(v), f);\n    return v;\n}\n\ntemplate\
    \ <class T, class Comp = std::less<T>>\nstd::vector<int> order_by_key(const std::vector<T>&\
    \ v, const Comp& comp = Comp()) {\n    return sorted_by(std::size(v), [&](const\
    \ int i, const int j) { return comp(v[i], v[j]); });\n}\n\n}  // namespace util\n\
    }  // namespace kod\n\n/**\n * @brief std::vector \u30E6\u30FC\u30C6\u30A3\u30EA\
    \u30C6\u30A3\n */"
  dependsOn: []
  isVerificationFile: false
  path: util/ordered_vec.cpp
  requiredBy: []
  timestamp: '2022-05-01 16:24:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/ordered_vec.cpp
layout: document
redirect_from:
- /library/util/ordered_vec.cpp
- /library/util/ordered_vec.cpp.html
title: "std::vector \u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3"
---
