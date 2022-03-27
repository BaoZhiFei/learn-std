#include <stdio.h>

#include <type_traits>

int main() {
  int i = std::integral_constant<int, 5>::value;
  printf("%d\n", i);
  return 0;
}
