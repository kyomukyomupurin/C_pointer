#include <stdio.h>
#include <stdarg.h>

int myfunc(int x, ...) {
  va_list ptr;
  int i, sum = 0;

  va_start(ptr, x);
  for (i = 0; i < x; ++i) {
    sum += va_arg(ptr, int);
  }
  va_end(ptr);

  return sum;
}

int main() {
  int sum;

  sum = myfunc(4, 1, 2, 3, 4);
  printf("sum = %d\n", sum);
  sum = myfunc(2, 100, -45);
  printf("sum = %d\n", sum);
  sum = myfunc(6, 10, 20, 30, 40, 20, 33);
  printf("sum = %d\n", sum);
  
  return 0;
}