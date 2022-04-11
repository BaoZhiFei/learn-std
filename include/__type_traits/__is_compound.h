#ifndef __IS_COMPOUND_H
#define __IS_COMPOUND_H

#include <__type_traits/__bool_constant.h>
#include <__type_traits/__is_fundamental.h>

namespace std {

template <typename T>
struct is_compound : public bool_constant<!is_fundamental_v<T>> {};

template <typename T>
inline constexpr bool is_compound_v = is_compound<T>::value;

} // namespace std
#endif // __IS_COMPOUND_H
