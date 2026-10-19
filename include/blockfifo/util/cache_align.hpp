#pragma once

#include <new>

namespace blockfifo::detail {

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winterference-size"
#endif

template <typename T>
struct alignas(std::hardware_destructive_interference_size) cache_aligned_t {
    T value;
    T* operator->() { return &value; }
    const T* operator->() const { return &value; }
    operator T&() { return value; }
    operator const T&() const { return value; }
};

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif

}  // namespace blockfifo::detail
