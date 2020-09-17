#include <stdio.h>

int main() {
  char i;

  for (i = '!'; i <= '~'; ++i) {
    printf("%3d(0x%2X) -- %c ", i, i, i);
    if ((i - '!' + 1) % 4 == 0) {
      putchar('\n');
    }
  }

  putchar('\n');

  return 0;
}