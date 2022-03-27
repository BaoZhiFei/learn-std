#ifndef __IS_FLOATING_POINT_H
#define __IS_FLOATING_POINT_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__remove_cv.h>

namespace std {

template <typename T>
struct __is_floating_point_impl : public false_type {};

template <>
struct __is_floating_point_impl<float> : public true_type {};

template <>
struct __is_floating_point_impl<double> : public true_type {};

template <>
struct __is_floating_point_impl<long double> : public true_type {};

template <typename T>
struct is_floating_point : public __is_floating_point_impl<remove_cv_t<T>> {};

template <typename T>
inline constexpr bool is_floating_point_v = is_floating_point<T>::value;

} // namespace std
#endif // __IS_FLOATING_POINT_H
