#include <stdio.h>

int func(int x) {
  printf("x = %d\n", x);

  return 0;
}

int main() {
  printf("The address of main = %p\n", main);
  printf("The address of func = %p\n", func);

  return 0;
}