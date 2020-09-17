#include <stdio.h>

void swap(int a, int b) {
  int c;
  c = b;
  b = a;
  a = c;

  return;
}

int main() {
  int a, b;
  a = 10;
  b = 20;

  swap(a, b);

  printf("a = %d, b = %d\n", a, b);

  return 0;
}