#ifndef __IS_INTEGRAL_H
#define __IS_INTEGRAL_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__remove_cv.h>

namespace std {

template <typename T>
struct __is_integral_impl : public false_type {};

template <>
struct __is_integral_impl<bool> : public true_type {};

template <>
struct __is_integral_impl<char> : public true_type {};

template <>
struct __is_integral_impl<unsigned char> : public true_type {};

template <>
struct __is_integral_impl<signed char> : public true_type {};

template <>
struct __is_integral_impl<char8_t> : public true_type {};

template <>
struct __is_integral_impl<char16_t> : public true_type {};

template <>
struct __is_integral_impl<char32_t> : public true_type {};

template <>
struct __is_integral_impl<wchar_t> : public true_type {};

template <>
struct __is_integral_impl<short> : public true_type {};

template <>
struct __is_integral_impl<unsigned short> : public true_type {};

template <>
struct __is_integral_impl<int> : public true_type {};

template <>
struct __is_integral_impl<unsigned int> : public true_type {};

template <>
struct __is_integral_impl<long> : public true_type {};

template <>
struct __is_integral_impl<unsigned long> : public true_type {};

template <>
struct __is_integral_impl<long long> : public true_type {};

template <>
struct __is_integral_impl<unsigned long long> : public true_type {};

template <typename T>
struct is_integral : public __is_integral_impl<remove_cv_t<T>> {};

template <typename T>
inline constexpr bool is_integral_v = is_integral<T>::value;

} // namespace std
#endif // __IS_INTEGRAL_H
