#ifndef __IS_FUNCTION_H
#define __IS_FUNCTION_H

#include <__type_traits/__is_const.h>
#include <__type_traits/__is_reference.h>

namespace std {

template <typename T>
struct is_function : bool_constant<!is_const_v<T> && !is_reference_v<T>> {};

template <typename T>
inline constexpr bool is_function_v = is_function<T>::value;

} // namespace std
#endif // __IS_FUNCTION_H
