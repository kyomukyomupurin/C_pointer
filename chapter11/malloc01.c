#include <stdio.h>
#include <malloc.h>

int main() {
  int* pi;

  pi = (int*)malloc(sizeof(int));

  if (!pi) {
    perror("Memory allocation failed.\n");
    return -1;
  }

  *pi = 100;

  printf("*pi = %d\n", *pi);

  free(pi);

  return 0;
}