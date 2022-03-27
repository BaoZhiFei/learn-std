#ifndef __IS_VOID_H
#define __IS_VOID_H

#include <__type_traits/__remove_cv.h>
#include <__type_traits/__is_same.h>

namespace std {

template <typename T>
struct is_void : public is_same<typename remove_cv<T>::type, void> {};

template <typename T>
inline constexpr bool is_void_v = is_void<T>::value;

}  // namespace std

#endif  // __IS_VOID_H
