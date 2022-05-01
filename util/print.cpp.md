---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u6A19\u6E96\u51FA\u529B\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3"
    links: []
  bundledCode: "#line 2 \"util/print.cpp\"\n\n#include <iostream>\n#include <utility>\n\
    \nnamespace kod {\nnamespace util {\n\ntemplate <class T>\nvoid print(T&& x) {\n\
    \    std::cout << x;\n}\n\ntemplate <class T, class... Args>\nvoid print(T&& x,\
    \ Args&&... args) {\n    std::cout << x << ' ';\n    print(std::forward<Args>(args)...);\n\
    }\n\nvoid println() {\n    std::cout << '\\n';\n}\n\ntemplate <class... Args>\n\
    void println(Args&&... args) {\n    print(std::forward<Args>(args)...);\n    std::cout\
    \ << '\\n';\n}\n\ntemplate <class C>\nvoid print_seq(C&& c, const char* sep =\
    \ \" \", const char* end = \"\\n\") {\n    bool f = false;\n    for (auto&& x\
    \ : std::forward<C>(c)) {\n        if (f) {\n            std::cout << sep;\n \
    \       } else {\n            f = true;\n        }\n        std::cout << x;\n\
    \    }\n    std::cout << end;\n}\n\n}  // namespace util\n}  // namespace kod\n\
    \n/**\n * @brief \u6A19\u6E96\u51FA\u529B\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3\
    \n */\n"
  code: "#pragma once\n\n#include <iostream>\n#include <utility>\n\nnamespace kod\
    \ {\nnamespace util {\n\ntemplate <class T>\nvoid print(T&& x) {\n    std::cout\
    \ << x;\n}\n\ntemplate <class T, class... Args>\nvoid print(T&& x, Args&&... args)\
    \ {\n    std::cout << x << ' ';\n    print(std::forward<Args>(args)...);\n}\n\n\
    void println() {\n    std::cout << '\\n';\n}\n\ntemplate <class... Args>\nvoid\
    \ println(Args&&... args) {\n    print(std::forward<Args>(args)...);\n    std::cout\
    \ << '\\n';\n}\n\ntemplate <class C>\nvoid print_seq(C&& c, const char* sep =\
    \ \" \", const char* end = \"\\n\") {\n    bool f = false;\n    for (auto&& x\
    \ : std::forward<C>(c)) {\n        if (f) {\n            std::cout << sep;\n \
    \       } else {\n            f = true;\n        }\n        std::cout << x;\n\
    \    }\n    std::cout << end;\n}\n\n}  // namespace util\n}  // namespace kod\n\
    \n/**\n * @brief \u6A19\u6E96\u51FA\u529B\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3\
    \n */"
  dependsOn: []
  isVerificationFile: false
  path: util/print.cpp
  requiredBy: []
  timestamp: '2022-05-01 16:24:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/print.cpp
layout: document
redirect_from:
- /library/util/print.cpp
- /library/util/print.cpp.html
title: "\u6A19\u6E96\u51FA\u529B\u30E6\u30FC\u30C6\u30A3\u30EA\u30C6\u30A3"
---
