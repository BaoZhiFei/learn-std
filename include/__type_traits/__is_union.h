#ifndef __IS_UNION_H
#define __IS_UNION_H

#include <__type_traits/__bool_constant.h>

namespace std {

template <typename T>
struct is_union : public bool_constant<__is_union(T)> {};

template <typename T>
inline constexpr bool is_union_v = is_union<T>::value;

} // namespace std
#endif // __IS_UNION_H
