#ifndef __IS_SCALAR_H
#define __IS_SCALAR_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__is_arithmetic.h>
#include <__type_traits/__is_enum.h>
#include <__type_traits/__is_pointer.h>
#include <__type_traits/__is_member_pointer.h>
#include <__type_traits/__is_null_pointer.h>

namespace std {

template <typename T>
struct is_scalar
    : public bool_constant<is_arithmetic_v<T> || is_enum_v<T> ||
                           is_pointer_v<T> || is_member_pointer_v<T> ||
                           is_null_pointer_v<T>> {};

template <typename T>
inline constexpr bool is_scalar_v = is_scalar<T>::value;

} // namespace std

#endif // __IS_SCALAR_H
