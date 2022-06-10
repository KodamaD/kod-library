---
data:
  libraryCategories:
  - name: algo
    pages:
    - icon: ':warning:'
      path: algo/auto_memoize.cpp
      title: "\u81EA\u52D5\u30E1\u30E2\u5316"
    - icon: ':warning:'
      path: algo/binary_search.cpp
      title: "\u4E8C\u5206\u63A2\u7D22"
  - name: random
    pages:
    - icon: ':warning:'
      path: random/number.cpp
      title: "\u6570\u5024\u751F\u6210"
    - icon: ':warning:'
      path: random/sequence.cpp
      title: "\u6570\u5217\u751F\u6210"
    - icon: ':warning:'
      path: random/xorshiro.cpp
      title: "Xorshiro \u4E71\u6570\u751F\u6210\u5668"
  - name: util
    pages:
    - icon: ':warning:'
      path: util/bit.cpp
      title: util/bit.cpp
    - icon: ':warning:'
      path: util/fixed_point.cpp
      title: util/fixed_point.cpp
    - icon: ':warning:'
      path: util/index_offset.cpp
      title: util/index_offset.cpp
    - icon: ':warning:'
      path: util/ordered_vec.cpp
      title: util/ordered_vec.cpp
    - icon: ':warning:'
      path: util/print.cpp
      title: util/print.cpp
    - icon: ':warning:'
      path: util/range.cpp
      title: util/range.cpp
    - icon: ':warning:'
      path: util/scan.cpp
      title: util/scan.cpp
    - icon: ':warning:'
      path: util/select.cpp
      title: util/select.cpp
  verificationCategories: []
layout: toppage
---

[![KoD](https://img.shields.io/endpoint?url=https%3A%2F%2Fatcoder-badges.now.sh%2Fapi%2Fatcoder%2Fjson%2FKoD)](https://atcoder.jp/users/KoD)
![Code Size](https://img.shields.io/github/languages/code-size/KodamaD/kod-library)
![Total Lines](https://img.shields.io/tokei/lines/github/KodamaD/kod-library)
![License](https://img.shields.io/github/license/KodamaD/kod-library)

競技プログラミング用の C++ ライブラリです。以下の環境で動作確認を行っています。

- C++17
- GCC の組み込み関数が使用可能
- 128bit 整数型 (`__int128_t`, `__uint128_t`) が使用可能
- 2 の補数表現が規定されている

競技プログラミングにおける使いやすさを最優先しているため、過度に抽象的なコードは避ける場合があります。また、コード長を短くする努力は行いません。

本ページで公開しているソースコードは CC0 ライセンスで許諾されています。ライセンスの内容を知りたい方は <https://creativecommons.org/publicdomain/zero/1.0/deed.ja> でご確認ください。
