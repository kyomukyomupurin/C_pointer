#include <stdio.h>

int main() {
  int a;
  int* lpa;
  lpa = &a;

  printf("Input an integer.\n");
  scanf("%d", &a);
  printf("%d was substituted to variable a.\n", a);
  printf("The address of variable a is %p.\n", &a);
  printf("Pointer lpa points to variable a.\n");
  printf("The value of *lpa is %d.\n", *lpa);

  return 0;
}