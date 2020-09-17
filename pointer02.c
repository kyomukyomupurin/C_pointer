#include <stdio.h>

int main() {
  int *pa;
  int a;

  // printf("%lld\n", (long long)pa);

  pa = &a;
  *pa = 5;

  printf("*pa = %d.\n", *pa);
  printf("a = %d.\n", a);

  return 0;
}