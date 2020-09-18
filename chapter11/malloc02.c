#include <stdio.h>
#include <malloc.h>

int main() {
  int* pi;
  int no, i;

  printf("How many integer will you input?--");
  scanf("%d", &no);
  pi = (int*)malloc(sizeof(int) * no);

  if (!pi) {
    perror("Memory allocation failed\n");
    return -1;
  }

  for (i = 0; i < no; ++i) {
    printf("The %d's data---", i + i);
    scanf("%d", pi + i);
  }
  printf("Input data are followings.\n");

  for (i = 0; i < no; ++i) {
    printf("NO.%d = %d\n", i + 1, *(pi + i));
  }

  free(pi);

  return 0;
}