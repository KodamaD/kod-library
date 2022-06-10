---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u4E8C\u5206\u63A2\u7D22"
    links: []
  bundledCode: "#line 2 \"algo/binary_search.cpp\"\n\n#include <cassert>\n#include\
    \ <type_traits>\n\nnamespace kod {\nnamespace algo {\n\ntemplate <class T, class\
    \ F, std::enable_if_t<std::is_integral_v<T>>* = nullptr>\nT binary_search(T ok,\
    \ T ng, const F& f) {\n    using U = std::make_unsigned_t<T>;\n    assert(ok !=\
    \ ng);\n    if (ok < ng) {\n        while (ok + 1 != ng) {\n            const\
    \ T md = ok + T((U(ng) - U(ok)) >> 1);\n            (f(md) ? ok : ng) = md;\n\
    \        }\n    } else {\n        while (ng + 1 != ok) {\n            const T\
    \ md = ng + T((U(ok) - U(ng)) >> 1);\n            (f(md) ? ok : ng) = md;\n  \
    \      }\n    }\n    return ok;\n}\n\n}  // namespace algo\n}  // namespace kod\n\
    \n/**\n * @brief \u4E8C\u5206\u63A2\u7D22\n */\n"
  code: "#pragma once\n\n#include <cassert>\n#include <type_traits>\n\nnamespace kod\
    \ {\nnamespace algo {\n\ntemplate <class T, class F, std::enable_if_t<std::is_integral_v<T>>*\
    \ = nullptr>\nT binary_search(T ok, T ng, const F& f) {\n    using U = std::make_unsigned_t<T>;\n\
    \    assert(ok != ng);\n    if (ok < ng) {\n        while (ok + 1 != ng) {\n \
    \           const T md = ok + T((U(ng) - U(ok)) >> 1);\n            (f(md) ? ok\
    \ : ng) = md;\n        }\n    } else {\n        while (ng + 1 != ok) {\n     \
    \       const T md = ng + T((U(ok) - U(ng)) >> 1);\n            (f(md) ? ok :\
    \ ng) = md;\n        }\n    }\n    return ok;\n}\n\n}  // namespace algo\n}  //\
    \ namespace kod\n\n/**\n * @brief \u4E8C\u5206\u63A2\u7D22\n */"
  dependsOn: []
  isVerificationFile: false
  path: algo/binary_search.cpp
  requiredBy: []
  timestamp: '2022-06-07 21:43:34+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: algo/binary_search.cpp
layout: document
redirect_from:
- /library/algo/binary_search.cpp
- /library/algo/binary_search.cpp.html
title: "\u4E8C\u5206\u63A2\u7D22"
---