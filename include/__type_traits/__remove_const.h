#ifndef __REMOVE_CONST_H
#define __REMOVE_CONST_H

namespace std {

template <typename T>
struct remove_const {
  using type = T;
};

template <typename T>
struct remove_const<const T> {
  using type = T;
};

template <typename T>
using remove_const_t = typename remove_const<T>::type;

}  // namespace std
#endif  // __REMOVE_CONST_H
