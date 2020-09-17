#include <stdio.h>

int func(int x) {
  printf("x = %d\n", x);

  return 0;
}

int main() {
  int (*ptr1)(), (*ptr2)();

  ptr1 = main;
  ptr2 = func;

  printf("The address of main = %p, ptr1 = %p\n", main, ptr1);
  printf("The address of func = %p, ptr2 = %p\n", func, ptr2);

  return 0;
}