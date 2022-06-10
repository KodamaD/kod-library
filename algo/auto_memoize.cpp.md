---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u81EA\u52D5\u30E1\u30E2\u5316"
    links: []
  bundledCode: "#line 2 \"algo/auto_memoize.cpp\"\n\n#include <cstddef>\n#include\
    \ <map>\n#include <tuple>\n#include <type_traits>\n#include <utility>\n\nnamespace\
    \ kod {\nnamespace algo {\n\ntemplate <class F>\nclass auto_memoize {\n    template\
    \ <class>\n    struct get_sig {};\n\n    template <class T, class R, class S,\
    \ class... Args>\n    struct get_sig<R (T::*)(S, Args...) const> {\n        using\
    \ return_type = R;\n        using args = std::tuple<std::decay_t<Args>...>;\n\
    \    };\n\n    using signature = get_sig<decltype(&F::template operator()<auto_memoize<F>&>)>;\n\
    \    using R = typename signature::return_type;\n    using ArgsTuple = typename\
    \ signature::args;\n\n    F func;\n    std::map<ArgsTuple, R> memo;\n\n    template\
    \ <std::size_t... I>\n    R apply(const ArgsTuple& args_tuple, std::index_sequence<I...>)\
    \ {\n        return func(*this, std::get<I>(args_tuple)...);\n    }\n\n  public:\n\
    \    explicit auto_memoize(const F& func) : func(func), memo() {}\n\n    template\
    \ <class... Args>\n    R operator()(Args&&... args) {\n        ArgsTuple args_tuple(std::forward<Args>(args)...);\n\
    \        const auto itr = memo.find(args_tuple);\n        if (itr != std::end(memo))\n\
    \            return itr->second;\n        const R res =\n            apply(args_tuple,\
    \ std::make_index_sequence<std::tuple_size<ArgsTuple>::value>());\n        memo.emplace(std::piecewise_construct,\
    \ std::move(args_tuple), res);\n        return res;\n    }\n};\n\n}  // namespace\
    \ algo\n}  // namespace kod\n\n/**\n * @brief \u81EA\u52D5\u30E1\u30E2\u5316\n\
    \ */\n"
  code: "#pragma once\n\n#include <cstddef>\n#include <map>\n#include <tuple>\n#include\
    \ <type_traits>\n#include <utility>\n\nnamespace kod {\nnamespace algo {\n\ntemplate\
    \ <class F>\nclass auto_memoize {\n    template <class>\n    struct get_sig {};\n\
    \n    template <class T, class R, class S, class... Args>\n    struct get_sig<R\
    \ (T::*)(S, Args...) const> {\n        using return_type = R;\n        using args\
    \ = std::tuple<std::decay_t<Args>...>;\n    };\n\n    using signature = get_sig<decltype(&F::template\
    \ operator()<auto_memoize<F>&>)>;\n    using R = typename signature::return_type;\n\
    \    using ArgsTuple = typename signature::args;\n\n    F func;\n    std::map<ArgsTuple,\
    \ R> memo;\n\n    template <std::size_t... I>\n    R apply(const ArgsTuple& args_tuple,\
    \ std::index_sequence<I...>) {\n        return func(*this, std::get<I>(args_tuple)...);\n\
    \    }\n\n  public:\n    explicit auto_memoize(const F& func) : func(func), memo()\
    \ {}\n\n    template <class... Args>\n    R operator()(Args&&... args) {\n   \
    \     ArgsTuple args_tuple(std::forward<Args>(args)...);\n        const auto itr\
    \ = memo.find(args_tuple);\n        if (itr != std::end(memo))\n            return\
    \ itr->second;\n        const R res =\n            apply(args_tuple, std::make_index_sequence<std::tuple_size<ArgsTuple>::value>());\n\
    \        memo.emplace(std::piecewise_construct, std::move(args_tuple), res);\n\
    \        return res;\n    }\n};\n\n}  // namespace algo\n}  // namespace kod\n\
    \n/**\n * @brief \u81EA\u52D5\u30E1\u30E2\u5316\n */"
  dependsOn: []
  isVerificationFile: false
  path: algo/auto_memoize.cpp
  requiredBy: []
  timestamp: '2022-06-10 10:20:32+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: algo/auto_memoize.cpp
layout: document
redirect_from:
- /library/algo/auto_memoize.cpp
- /library/algo/auto_memoize.cpp.html
title: "\u81EA\u52D5\u30E1\u30E2\u5316"
---
