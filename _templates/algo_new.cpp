#ifdef ONLINE_JUDGE
// #pragma GCC target("avx2")
// #define NDEBUG
#endif
#include <bits/stdc++.h>

#include "kodlib/util/fixed_point"
#include "kodlib/util/print"
#include "kodlib/util/range"
#include "kodlib/util/scan"
#include "kodlib/util/select"

#ifdef KOD_LOCAL
#define OJ_LOCAL(a, b) b
#else
#define OJ_LOCAL(a, b) a
#endif

namespace kod {
namespace solution {

using i32 = std::int32_t;
using i64 = std::int64_t;
using i128 = __int128_t;

using u32 = std::uint32_t;
using u64 = std::uint64_t;
using u128 = __uint128_t;

using f64 = double;
using f80 = long double;

using std::array;
using std::pair;
using std::tuple;
using std::vector;

using namespace util;

template <class T>
constexpr T infty = std::numeric_limits<T>::max() / 2;

void main() {}

}  // namespace solution
}  // namespace kod

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int cases = 1;
    // std::cin >> cases;
    while (cases--)
        kod::solution::main();
    return 0;
}