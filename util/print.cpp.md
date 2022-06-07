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
  bundledCode: "#line 2 \"util/print.cpp\"\n\n#include <iostream>\n#include <utility>\n\
    \nnamespace kod {\nnamespace util {\n\ntemplate <class T>\nvoid print(std::ostream&)\
    \ {}\n\ntemplate <class T, class... Args>\nvoid print(std::ostream& os, T&& x,\
    \ Args&&... args) {\n    os << x << ' ';\n    print(os, std::forward<Args>(args)...);\n\
    }\n\ntemplate <class... Args>\nvoid print(Args&&... args) {\n    print(std::cout,\
    \ std::forward<Args>(args)...);\n}\n\ntemplate <class... Args>\nvoid println(std::ostream&\
    \ os, Args&&... args) {\n    print(os, std::forward<Args>(args)...);\n    os <<\
    \ '\\n';\n}\n\ntemplate <class... Args>\nvoid println(Args&&... args) {\n    println(std::cout,\
    \ std::forward<Args>(args)...);\n}\n\ntemplate <class C>\nvoid print_seq(std::ostream&\
    \ os, C&& c, const char* sep = \" \", const char* end = \"\\n\") {\n    bool f\
    \ = false;\n    for (auto&& x : c) {\n        if (f) {\n            os << sep;\n\
    \        } else {\n            f = true;\n        }\n        os << x;\n    }\n\
    \    os << end;\n}\n\ntemplate <class C>\nvoid print_seq(C&& c, const char* sep\
    \ = \" \", const char* end = \"\\n\") {\n    print_seq(std::cout, c, sep, end);\n\
    }\n\n}  // namespace util\n}  // namespace kod\n"
  code: "#pragma once\n\n#include <iostream>\n#include <utility>\n\nnamespace kod\
    \ {\nnamespace util {\n\ntemplate <class T>\nvoid print(std::ostream&) {}\n\n\
    template <class T, class... Args>\nvoid print(std::ostream& os, T&& x, Args&&...\
    \ args) {\n    os << x << ' ';\n    print(os, std::forward<Args>(args)...);\n\
    }\n\ntemplate <class... Args>\nvoid print(Args&&... args) {\n    print(std::cout,\
    \ std::forward<Args>(args)...);\n}\n\ntemplate <class... Args>\nvoid println(std::ostream&\
    \ os, Args&&... args) {\n    print(os, std::forward<Args>(args)...);\n    os <<\
    \ '\\n';\n}\n\ntemplate <class... Args>\nvoid println(Args&&... args) {\n    println(std::cout,\
    \ std::forward<Args>(args)...);\n}\n\ntemplate <class C>\nvoid print_seq(std::ostream&\
    \ os, C&& c, const char* sep = \" \", const char* end = \"\\n\") {\n    bool f\
    \ = false;\n    for (auto&& x : c) {\n        if (f) {\n            os << sep;\n\
    \        } else {\n            f = true;\n        }\n        os << x;\n    }\n\
    \    os << end;\n}\n\ntemplate <class C>\nvoid print_seq(C&& c, const char* sep\
    \ = \" \", const char* end = \"\\n\") {\n    print_seq(std::cout, c, sep, end);\n\
    }\n\n}  // namespace util\n}  // namespace kod"
  dependsOn: []
  isVerificationFile: false
  path: util/print.cpp
  requiredBy: []
  timestamp: '2022-06-07 21:43:34+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/print.cpp
layout: document
redirect_from:
- /library/util/print.cpp
- /library/util/print.cpp.html
title: util/print.cpp
---
