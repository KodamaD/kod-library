#pragma once
#include <cassert>

namespace kod {
namespace util {

class index_offset {
    int len, offset;

  public:
    constexpr index_offset() : len(0), offset(0) {}
    explicit constexpr index_offset(const int n, const int k) : len(n), offset(k) {}

    constexpr int size() const { return len; }
    constexpr int operator[](const int i) const { return adjust(i); }

    constexpr int adjust(const int i) const {
        assert(0 <= i and i < len);
        return offset + i;
    }
    constexpr int recover(const int i) const {
        assert(offset <= i and i < offset + len);
        return i - offset;
    }
};

}  // namespace util
}  // namespace kod