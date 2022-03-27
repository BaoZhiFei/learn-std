#ifndef __IS_MEMBER_POINTER_H
#define __IS_MEMBER_POINTER_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__remove_cv.h>

namespace std {

template <typename T>
struct __is_member_pointer_impl : false_type {};

template <typename T, typename U>
struct __is_member_pointer_impl<T U::*> : true_type {};

template <typename T>
struct is_member_pointer : public __is_member_pointer_impl<remove_cv_t<T>> {};

template <typename T>
inline constexpr bool is_member_pointer_v = is_member_pointer<T>::value;

} // namespace std
#endif // __IS_MEMBER_POINTER_H
