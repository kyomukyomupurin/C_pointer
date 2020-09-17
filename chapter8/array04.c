#include <stdio.h>

int main() {
  int a[] = {10, 20, 30, 40}, i, *p;
  p = a;

  for (i = 0; i < 4; ++i) {
    printf("&a[%d] = %p, a[%d] = %d, *(p + %d) = %d\n", i, &a[i], i, a[i], i, *(p + i));
  }

  return 0;
}