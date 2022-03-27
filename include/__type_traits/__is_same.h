#ifndef __IS_SAME_H
#define __IS_SAME_H

#include <__type_traits/__bool_constant.h>

namespace std {

template <typename T, typename U>
struct is_same : public false_type {};

template <typename T>
struct is_same<T, T> : public true_type {};

template <typename T, typename U>
inline constexpr bool is_same_v = is_same<T, U>::value;

}  // namespace std

#endif  // __IS_SAME_H
