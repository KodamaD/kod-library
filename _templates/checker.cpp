
/**
 * Copyright (c) 2015 Mike Mirzayanov
 * Released under the MIT license (MIT)
 * https://github.com/MikeMirzayanov/testlib/blob/master/LICENSE
 */
#include <extlib/testlib.h>

#include <bits/stdc++.h>

#include "proconlib/int_alias"
#include "proconlib/rep"
#include "proconlib/revrep"
#include "proconlib/rec_lambda"
#include "proconlib/setmin"
#include "proconlib/setmax"

using std::vector;
using std::array;
using std::pair;
using std::tuple;

template <class T>
constexpr T infty = std::numeric_limits<T>::max() / 2;

#define check(cond) if (!(cond)) quitf(_wa, "WA")
#define check(cond, message) if (!(cond)) quitf(_wa, "WA, %s", message)

int main(int argc, char* argv[]) {
    setName("Checker");
    registerTestlibCmd(argc, argv);

    // inf: input
    // ouf: your output
    // ans: correct output

    

    check(ouf.seekEof(), "extra tokens");
    quitf(_ok, "AC");
    return 0;
}