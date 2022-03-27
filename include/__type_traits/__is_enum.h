#ifndef __IS_ENUM_H
#define __IS_ENUM_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__is_array.h>
#include <__type_traits/__is_class.h>
#include <__type_traits/__is_floating_point.h>
#include <__type_traits/__is_function.h>
#include <__type_traits/__is_integral.h>
#include <__type_traits/__is_member_pointer.h>
#include <__type_traits/__is_pointer.h>
#include <__type_traits/__is_reference.h>
#include <__type_traits/__is_union.h>
#include <__type_traits/__is_void.h>

namespace std {

template <typename T>
struct is_enum
    : public bool_constant<!is_void_v<T> && !is_integral_v<T> &&
                           !is_floating_point_v<T> && !is_array_v<T> &&
                           !is_pointer_v<T> && !is_reference_v<T> &&
                           !is_member_pointer_v<T> && !is_union_v<T> &&
                           !is_class_v<T> && !is_function_v<T>> {};

template <typename T>
inline constexpr bool is_enum_v = is_enum<T>::value;

}  // namespace std
#endif  // __IS_ENUM_H
