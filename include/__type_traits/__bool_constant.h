#ifndef __BOOL_CONSTANT_H
#define __BOOL_CONSTANT_H

#include <__type_traits/__integral_constant.h>

namespace std {

template <bool B>
using bool_constant = integral_constant<bool, B>;

using true_type = bool_constant<true>;

using false_type = bool_constant<false>;

}  // namespace std
#endif  // __BOOL_CONSTANT_H
