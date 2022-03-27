#ifndef __IS_CONST_H
#define __IS_CONST_H

#include <__type_traits/__bool_constant.h>

namespace std {

template <typename T>
struct is_const : public false_type {};

template <typename T>
struct is_const<T const> : public true_type {};

template <typename T>
inline constexpr bool is_const_v = is_const<T>::value;

} // namespace std
#endif // __IS_CONST_H
