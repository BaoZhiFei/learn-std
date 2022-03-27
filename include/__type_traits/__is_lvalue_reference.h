#ifndef __IS_LVALUE_REFERENCE_H
#define __IS_LVALUE_REFERENCE_H

#include <__type_traits/__bool_constant.h>

namespace std {

template <typename T>
struct is_lvalue_reference : public false_type {};

template <typename T>
struct is_lvalue_reference<T&> : public true_type {};

template <typename T>
inline constexpr bool is_lvalue_reference_v = is_lvalue_reference<T>::value;

} // namespace std
#endif // __IS_LVALUE_REFERENCE_H
