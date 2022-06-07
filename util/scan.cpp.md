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
  bundledCode: "#line 2 \"util/scan.cpp\"\n\n#include <array>\n#include <cassert>\n\
    #include <iostream>\n#include <iterator>\n#include <string>\n#include <vector>\n\
    \nnamespace kod {\nnamespace util {\n\ntemplate <class T>\nT scan(std::istream&\
    \ is) {\n    T x;\n    is >> x;\n    return x;\n}\n\ntemplate <class T>\nT scan()\
    \ {\n    return scan<T>(std::cin);\n}\n\ntemplate <class T>\nstd::vector<T> scan_vec(std::istream&\
    \ is, const int n) {\n    assert(n >= 0);\n    std::vector<T> v(n);\n    for (auto&\
    \ x : v)\n        is >> x;\n    return v;\n}\n\ntemplate <class T>\nstd::vector<T>\
    \ scan_vec(const int n) {\n    return scan_vec<T>(std::cin, n);\n}\n\ntemplate\
    \ <class T>\nstd::vector<T> scan_vec(std::istream& is) {\n    return scan_vec(is,\
    \ scan<int>(is));\n}\n\ntemplate <class T>\nstd::vector<T> scan_vec() {\n    return\
    \ scan_vec<T>(std::cin);\n}\n\ntemplate <class T, int N>\nstd::array<T, N> scan_array(std::istream&\
    \ is) {\n    std::array<T, N> a;\n    for (auto& x : a)\n        is >> x;\n  \
    \  return a;\n}\n\ntemplate <class T, int N>\nstd::array<T, N> scan_array() {\n\
    \    return scan_array<T, N>(std::cin);\n}\n\nstd::vector<char> scan_chars(std::istream&\
    \ is) {\n    std::string s;\n    is >> s;\n    return std::vector<char>(std::cbegin(s),\
    \ std::cend(s));\n}\n\nstd::vector<char> scan_chars() {\n    return scan_chars(std::cin);\n\
    }\n\n}  // namespace util\n}  // namespace kod\n"
  code: "#pragma once\n\n#include <array>\n#include <cassert>\n#include <iostream>\n\
    #include <iterator>\n#include <string>\n#include <vector>\n\nnamespace kod {\n\
    namespace util {\n\ntemplate <class T>\nT scan(std::istream& is) {\n    T x;\n\
    \    is >> x;\n    return x;\n}\n\ntemplate <class T>\nT scan() {\n    return\
    \ scan<T>(std::cin);\n}\n\ntemplate <class T>\nstd::vector<T> scan_vec(std::istream&\
    \ is, const int n) {\n    assert(n >= 0);\n    std::vector<T> v(n);\n    for (auto&\
    \ x : v)\n        is >> x;\n    return v;\n}\n\ntemplate <class T>\nstd::vector<T>\
    \ scan_vec(const int n) {\n    return scan_vec<T>(std::cin, n);\n}\n\ntemplate\
    \ <class T>\nstd::vector<T> scan_vec(std::istream& is) {\n    return scan_vec(is,\
    \ scan<int>(is));\n}\n\ntemplate <class T>\nstd::vector<T> scan_vec() {\n    return\
    \ scan_vec<T>(std::cin);\n}\n\ntemplate <class T, int N>\nstd::array<T, N> scan_array(std::istream&\
    \ is) {\n    std::array<T, N> a;\n    for (auto& x : a)\n        is >> x;\n  \
    \  return a;\n}\n\ntemplate <class T, int N>\nstd::array<T, N> scan_array() {\n\
    \    return scan_array<T, N>(std::cin);\n}\n\nstd::vector<char> scan_chars(std::istream&\
    \ is) {\n    std::string s;\n    is >> s;\n    return std::vector<char>(std::cbegin(s),\
    \ std::cend(s));\n}\n\nstd::vector<char> scan_chars() {\n    return scan_chars(std::cin);\n\
    }\n\n}  // namespace util\n}  // namespace kod"
  dependsOn: []
  isVerificationFile: false
  path: util/scan.cpp
  requiredBy: []
  timestamp: '2022-06-07 21:43:34+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/scan.cpp
layout: document
redirect_from:
- /library/util/scan.cpp
- /library/util/scan.cpp.html
title: util/scan.cpp
---
