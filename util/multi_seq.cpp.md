---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u591A\u6B21\u5143\u914D\u5217"
    links: []
  bundledCode: "#line 2 \"util/multi_seq.cpp\"\n\n#include <array>\n#include <type_traits>\n\
    #include <utility>\n#include <vector>\n\nnamespace kod {\nnamespace util {\nnamespace\
    \ multi_seq_impl {\n\ntemplate <class T, int N, std::enable_if_t<(N != 0)>* =\
    \ nullptr>\nstruct MultiVec {\n    using type = std::vector<typename MultiVec<T,\
    \ N - 1>::type>;\n};\n\ntemplate <class T>\nstruct MultiVec<T, 1> {\n    using\
    \ type = std::vector<T>;\n};\n\ntemplate <class T, int N, int... Seq>\nstruct\
    \ MultiArray {\n    using type = std::array<typename MultiArray<T, Seq...>::type,\
    \ N>;\n};\n\ntemplate <class T, int N>\nstruct MultiArray<T, N> {\n    using type\
    \ = std::array<T, N>;\n};\n\n}  // namespace multi_seq_impl\n\ntemplate <class\
    \ T, class U>\ndecltype(auto) make_multi_vec(T&& size, U&& value) {\n    using\
    \ V = std::decay_t<U>;\n    return std::vector(std::forward<T>(size), std::forward<V>(value));\n\
    }\n\ntemplate <class T, class... Args>\ndecltype(auto) make_multi_vec(T&& size,\
    \ Args&&... args) {\n    return std::vector(std::forward<T>(size), make_vec(std::forward<Args>(args)...));\n\
    }\n\ntemplate <class T, int N>\nusing MultiVec = typename multi_seq_impl::MultiVec<T,\
    \ N>::type;\n\ntemplate <class T, int N, int... Seq>\nusing MultiArray = typename\
    \ multi_seq_impl::MultiArray<T, N, Seq...>::type;\n\n}  // namespace util\n} \
    \ // namespace kod\n\n/**\n * @brief \u591A\u6B21\u5143\u914D\u5217\n */\n"
  code: "#pragma once\n\n#include <array>\n#include <type_traits>\n#include <utility>\n\
    #include <vector>\n\nnamespace kod {\nnamespace util {\nnamespace multi_seq_impl\
    \ {\n\ntemplate <class T, int N, std::enable_if_t<(N != 0)>* = nullptr>\nstruct\
    \ MultiVec {\n    using type = std::vector<typename MultiVec<T, N - 1>::type>;\n\
    };\n\ntemplate <class T>\nstruct MultiVec<T, 1> {\n    using type = std::vector<T>;\n\
    };\n\ntemplate <class T, int N, int... Seq>\nstruct MultiArray {\n    using type\
    \ = std::array<typename MultiArray<T, Seq...>::type, N>;\n};\n\ntemplate <class\
    \ T, int N>\nstruct MultiArray<T, N> {\n    using type = std::array<T, N>;\n};\n\
    \n}  // namespace multi_seq_impl\n\ntemplate <class T, class U>\ndecltype(auto)\
    \ make_multi_vec(T&& size, U&& value) {\n    using V = std::decay_t<U>;\n    return\
    \ std::vector(std::forward<T>(size), std::forward<V>(value));\n}\n\ntemplate <class\
    \ T, class... Args>\ndecltype(auto) make_multi_vec(T&& size, Args&&... args) {\n\
    \    return std::vector(std::forward<T>(size), make_vec(std::forward<Args>(args)...));\n\
    }\n\ntemplate <class T, int N>\nusing MultiVec = typename multi_seq_impl::MultiVec<T,\
    \ N>::type;\n\ntemplate <class T, int N, int... Seq>\nusing MultiArray = typename\
    \ multi_seq_impl::MultiArray<T, N, Seq...>::type;\n\n}  // namespace util\n} \
    \ // namespace kod\n\n/**\n * @brief \u591A\u6B21\u5143\u914D\u5217\n */"
  dependsOn: []
  isVerificationFile: false
  path: util/multi_seq.cpp
  requiredBy: []
  timestamp: '2022-05-01 16:24:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/multi_seq.cpp
layout: document
redirect_from:
- /library/util/multi_seq.cpp
- /library/util/multi_seq.cpp.html
title: "\u591A\u6B21\u5143\u914D\u5217"
---
