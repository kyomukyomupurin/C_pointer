#include <stdio.h>
#include <string.h>

int main() {
  char str[32];
  size_t len;

  printf("Input a string--");
  scanf("%s", str);

  len = strlen(str);

  printf("The length of %s is %ld.\n", str, len);

  return 0;
}