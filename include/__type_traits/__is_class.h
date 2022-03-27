#ifndef __IS_CLASS_H
#define __IS_CLASS_H

#include <__type_traits/__is_union.h>
#include <__type_traits/__bool_constant.h>

namespace std{

namespace __is_class_impl {

template <typename T>
bool_constant<!is_union_v<T>> test(int T::*);

template <typename T>
false_type test(...);
}  // namespace __is_class_impl

template <typename T>
struct is_class : decltype(__is_class_impl::test<T>(nullptr)) {};

template <typename T>
inline constexpr bool is_class_v = is_class<T>::value;

} // namespace std
#endif // __IS_CLASS_H
