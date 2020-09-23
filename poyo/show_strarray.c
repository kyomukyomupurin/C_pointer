#include <stdio.h>

void show_str_array(char* strs[5]) { // (char** strs) also worls.
  for (int i = 0; i < 5; ++i) {
    printf("%s\n", strs[i]);
  }

  return;
}

int main() {
  char* strs[5] = {
    "Hello",
    "kyomukyomupurin",
    "you",
    "are",
    "genius"
  };

  show_str_array(strs);

  return 0;
}