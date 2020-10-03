#include <stdio.h>

void show_str_array(char* strs[], int sz) { // (char** strs) also worls.
  for (int i = 0; i < sz; ++i) {
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

  show_str_array(strs, 5);

  return 0;
}