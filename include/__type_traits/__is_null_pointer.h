#ifndef __IS_NULL_POINTER_H
#define __IS_NULL_POINTER_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__remove_cv.h>
#include <cstddef>

namespace std {

template <typename T>
struct __is_null_pointer_impl : public false_type {};

template <>
struct __is_null_pointer_impl<nullptr_t> : public true_type {};

template <typename T>
struct is_null_pointer : public __is_null_pointer_impl<remove_cv_t<T>> {};

template <typename T>
inline constexpr bool is_null_pointer_v = is_null_pointer<T>::value;

}  // namespace std
#endif  // __IS_NULL_POINTER_H
