#ifndef __IS_POINTER_H
#define __IS_POINTER_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__remove_cv.h>

namespace std {

template <typename T>
struct __is_pointer_impl : public false_type {};

template <typename T>
struct __is_pointer_impl<T*> : public true_type {};

template <typename T>
struct is_pointer : public __is_pointer_impl<remove_cv_t<T>> {};

template <typename T>
inline constexpr bool is_pointer_v = is_pointer<T>::value;

} // namespace std
#endif // __IS_POINTER_H
