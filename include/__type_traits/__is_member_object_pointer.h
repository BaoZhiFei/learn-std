#ifndef __IS_MEMBER_OBJECT_POINTER_H
#define __IS_MEMBER_OBJECT_POINTER_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__is_member_pointer.h>
#include <__type_traits/__is_member_function_pointer.h>

namespace std {

template <typename T>
struct is_member_object_pointer
    : bool_constant<is_member_pointer_v<T> &&
                    !is_member_function_pointer_v<T>> {};

template <typename T>
inline constexpr bool is_member_object_pointer_v =
    is_member_object_pointer<T>::value;

} // namespace std
#endif // __IS_MEMBER_OBJECT_POINTER_H
