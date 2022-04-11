#ifndef __IS_ARITHMETIC_H
#define __IS_ARITHMETIC_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__is_integral.h>
#include <__type_traits/__is_floating_point.h>

namespace std {

template <typename T>
struct is_arithmetic
    : bool_constant<is_integral_v<T> || is_floating_point_v<T>> {};

template <typename T>
inline constexpr bool is_arithmetic_v = is_arithmetic<T>::value;

} // namespace std
#endif // __IS_ARITHMETIC_H
