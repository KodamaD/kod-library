---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u6A19\u6E96\u5165\u529B\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3"
    links: []
  bundledCode: "#line 2 \"util/scan.cpp\"\n\n#include <array>\n#include <cassert>\n\
    #include <iostream>\n#include <iterator>\n#include <string>\n#include <vector>\n\
    \nnamespace kod {\nnamespace util {\n\ntemplate <class T>\nT scan() {\n    T x;\n\
    \    std::cin >> x;\n    return x;\n}\n\ntemplate <class T>\nstd::vector<T> scan_vec(int\
    \ n = -1) {\n    if (n == -1)\n        std::cin >> n;\n    assert(n >= 0);\n \
    \   std::vector<T> v(n);\n    for (auto& x : v)\n        std::cin >> x;\n    return\
    \ v;\n}\n\ntemplate <class T, int N>\nstd::array<T, N> scan_array() {\n    std::array<T,\
    \ N> a;\n    for (auto& x : a)\n        std::cin >> x;\n    return a;\n}\n\nstd::vector<char>\
    \ scan_chars() {\n    std::string s;\n    std::cin >> s;\n    return std::vector<char>(std::cbegin(s),\
    \ std::cend(s));\n}\n\n}  // namespace util\n}  // namespace kod\n\n/**\n * @brief\
    \ \u6A19\u6E96\u5165\u529B\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3\n */\n"
  code: "#pragma once\n\n#include <array>\n#include <cassert>\n#include <iostream>\n\
    #include <iterator>\n#include <string>\n#include <vector>\n\nnamespace kod {\n\
    namespace util {\n\ntemplate <class T>\nT scan() {\n    T x;\n    std::cin >>\
    \ x;\n    return x;\n}\n\ntemplate <class T>\nstd::vector<T> scan_vec(int n =\
    \ -1) {\n    if (n == -1)\n        std::cin >> n;\n    assert(n >= 0);\n    std::vector<T>\
    \ v(n);\n    for (auto& x : v)\n        std::cin >> x;\n    return v;\n}\n\ntemplate\
    \ <class T, int N>\nstd::array<T, N> scan_array() {\n    std::array<T, N> a;\n\
    \    for (auto& x : a)\n        std::cin >> x;\n    return a;\n}\n\nstd::vector<char>\
    \ scan_chars() {\n    std::string s;\n    std::cin >> s;\n    return std::vector<char>(std::cbegin(s),\
    \ std::cend(s));\n}\n\n}  // namespace util\n}  // namespace kod\n\n/**\n * @brief\
    \ \u6A19\u6E96\u5165\u529B\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3\n */"
  dependsOn: []
  isVerificationFile: false
  path: util/scan.cpp
  requiredBy: []
  timestamp: '2022-05-01 16:24:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/scan.cpp
layout: document
redirect_from:
- /library/util/scan.cpp
- /library/util/scan.cpp.html
title: "\u6A19\u6E96\u5165\u529B\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3"
---
