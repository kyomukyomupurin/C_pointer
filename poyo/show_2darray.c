#include <stdio.h>

void show_2d_array(int (*arr)[3], int sz) { // (arr[][3]) also works.
  for (int i = 0; i < sz; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("%2d ", arr[i][j]);
    }
    putchar('\n');
  }

  return;
}

int main() {
  int arr[][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
  };

  show_2d_array(arr, 4);

  return 0;
}