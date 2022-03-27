#ifndef __IS_ARRAY_H
#define __IS_ARRAY_H

#include <__type_traits/__bool_constant.h>
#include <cstddef>

namespace std {

template <typename T>
struct is_array : public false_type {};

template <typename T>
struct is_array<T[]> : public true_type {};

template <typename T, size_t len>
struct is_array<T[len]> : public true_type {};

template <typename T>
inline constexpr bool is_array_v = is_array<T>::value;

}  // namespace std
#endif  // __IS_ARRAY_H
