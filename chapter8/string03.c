#include <stdio.h>
#include <string.h>

int main() {
  char str1[32], str2[32];
  int cmp;

  printf("Input str1--");
  scanf("%s", str1);
  printf("Input str2--");
  scanf("%s", str2);
  cmp = strcmp(str1, str2);
  if (cmp < 0) {
    printf("%s is lexicographically smaller than %s.\n", str1, str2);
  } else if (cmp > 0) {
    printf("%s is lexicographically bigger than %s.\n", str1, str2);
  } else {
    printf("%s and %s are same.\n", str1, str2);
  }
}