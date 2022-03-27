#ifndef __INTEGRAL_CONSTANT_H
#define __INTEGRAL_CONSTANT_H

namespace std {

template <typename T, T v>
struct integral_constant {
  static constexpr T value = v;
  using value_type = T;
  using type = integral_constant;
  constexpr operator value_type() const noexcept { return value; }
  constexpr value_type operator()() const noexcept { return value; }
};

}  // namespace std
#endif  // __INTEGRAL_CONSTANT_H
