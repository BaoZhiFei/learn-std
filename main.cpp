#include <stdio.h>

#include <type_traits>

int main() {
  class cls {};

  printf("%d", std::is_member_pointer<int>::value);
  return 0;
}
