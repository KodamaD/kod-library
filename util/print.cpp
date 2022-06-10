#pragma once

#include <iostream>
#include <utility>

namespace kod {
namespace util {

void print(std::ostream&) {}

template <class T, class... Args>
void print(std::ostream& os, T&& x, Args&&... args) {
    os << x;
    if (sizeof...(args) != 0)
        os << ' ';
    print(os, std::forward<Args>(args)...);
}

template <class... Args>
void print(Args&&... args) {
    print(std::cout, std::forward<Args>(args)...);
}

template <class... Args>
void println(std::ostream& os, Args&&... args) {
    print(os, std::forward<Args>(args)...);
    os << '\n';
}

template <class... Args>
void println(Args&&... args) {
    println(std::cout, std::forward<Args>(args)...);
}

template <class C>
void print_seq(std::ostream& os, C&& c, const char* sep = " ", const char* end = "\n") {
    bool f = false;
    for (auto&& x : c) {
        if (f) {
            os << sep;
        } else {
            f = true;
        }
        os << x;
    }
    os << end;
}

template <class C>
void print_seq(C&& c, const char* sep = " ", const char* end = "\n") {
    print_seq(std::cout, c, sep, end);
}

}  // namespace util
}  // namespace kod