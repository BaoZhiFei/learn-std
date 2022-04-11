#ifndef __IS_OBJECT_H
#define __IS_OBJECT_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__is_scalar.h>
#include <__type_traits/__is_array.h>
#include <__type_traits/__is_union.h>
#include <__type_traits/__is_class.h>

namespace std {

template <typename T>
struct is_object : public bool_constant<is_scalar_v<T> || is_array_v<T> ||
                                        is_union_v<T> || is_class_v<T>> {};

template <typename T>
inline constexpr bool is_object_v = is_object<T>::value;

} // namespace std

#endif // __IS_OBJECT_H
