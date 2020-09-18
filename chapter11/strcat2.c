#include <stdio.h>
#include <stdarg.h>
#include <string.h>

char* strcat2(char* p, ...) {
  va_list ptr;
  char* st;

  if (!p[0]) return p;

  va_start(ptr, p);

  while (1) {
    st = va_arg(ptr, char*);
    if (!st[0]) break;
    strcat(p, st);
  }
  va_end(ptr);

  return p;
}

int main() {
  char str1[256] = "Today is ";
  char* str2 = "good day, but ";
  char* str3 = "tomorrow never knows.\n";
  strcat2(str1, str2, str3, "");
  printf(str1);

  return 0;
}