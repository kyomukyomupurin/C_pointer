#include <stdio.h>

int main() {
  char c;
  int i;
  double d, e;

  printf("The address of variable c is %p.\n", &c);
  printf("The address of variable i is %p.\n", &i);
  printf("The address of variable d is %p.\n", &d);
  printf("The address of variable e is %p.\n", &e);

  return 0;
}