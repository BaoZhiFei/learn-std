#ifndef __IS_FUNDAMENTAL_H
#define __IS_FUNDAMENTAL_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__is_arithmetic.h>
#include <__type_traits/__is_void.h>
#include <__type_traits/__is_null_pointer.h>

namespace std {

template <typename T>
struct is_fundamental
    : public bool_constant<is_arithmetic_v<T> || is_void_v<T> ||
                           is_null_pointer_v<T>> {};

template <typename T>
inline constexpr bool is_fundamental_v = is_fundamental<T>::value;

} // namespace std
#endif // __IS_FUNDAMENTAL_H
