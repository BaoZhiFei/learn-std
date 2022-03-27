#ifndef __REMOVE_CV_H
#define __REMOVE_CV_H

#include <__type_traits/__remove_const.h>
#include <__type_traits/__remove_volatile.h>

namespace std {

template <typename T>
struct remove_cv {
  using type = typename remove_volatile<typename remove_const<T>::type>::type;
};

template <typename T>
using remove_cv_t = typename remove_cv<T>::type;

}  // namespace std
#endif  // __REMOVE_CV_H
