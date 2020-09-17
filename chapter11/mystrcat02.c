#include <stdio.h>

char* mystrcat(char* a, char* b) {
  char* aorg;
  aorg = a;

  while (*a) ++a;
  while (*a++ = *b++);

  return aorg;
}

int main() {
  char str1[32] = "Hello, ";
  char str2[16] = "World!\n";

  printf(mystrcat(str1, str2));

  return 0;
}