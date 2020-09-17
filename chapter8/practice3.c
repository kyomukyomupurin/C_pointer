#include <stdio.h>
#include <string.h>

void reverse(char* str, int len) {
  int i;
  for (i = 0; i < len / 2; ++i) {
    char t = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = t;
  }
  return;
}

int main() {
  char str[100];
  scanf("%s", str);
  
  int len = strlen(str);
  printf("Before : %s\n", str); 
  reverse(str, len);
  printf("After : %s\n", str);

  return 0;
}