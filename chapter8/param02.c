#include <stdio.h>

int showname(char** p) {
  int i;

  for (i = 0; i < 4; ++i) {
    printf("%s\n", p[i]);
  }

  return 0;
}

int main() {
  char* name[] = {
    "Ryo Murakami",
    "kyomukyomupurin",
    "tourist",
    "Petr",
  };

  showname(name);

  return 0;
}