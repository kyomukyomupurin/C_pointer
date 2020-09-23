#include <stdio.h>

void my_swap(int* x, int* y) {
  int t = *x;
  *x = *y;
  *y = t;

  return;
}

void my_str_swap(char** str1, char** str2) {
  char* t = *str1;
  *str1 = *str2;
  *str2 = t;

  return;
}

void my_array_swap(int** ptr1, int** ptr2) {
  int* t = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = t;
}

int main() {
  int x = 334;
  int y = 1728;
  printf("x = %d, y = %d.\n", x, y);
  my_swap(&x, &y);
  printf("x = %d, y = %d.\n", x, y);

  char* str1 = "abcde";
  char* str2 = "ABCDE";
  printf("str1 = %s, str2 = %s.\n", str1, str2);
  my_str_swap(&str1, &str2);
  printf("str1 = %s, str2 = %s.\n", str1, str2);

  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {5, 4, 3, 2, 1};
  int* ptr1 = arr1;
  int* ptr2 = arr2;

  for (int i = 0; i < 5; ++i) {
    printf("%d ", ptr1[i]);
  }
  putchar('\n');
  for (int i = 0; i < 5; ++i) {
    printf("%d ", ptr2[i]);
  }
  putchar('\n');
  my_array_swap(&ptr1, &ptr2);
  for (int i = 0; i < 5; ++i) {
    printf("%d ", ptr1[i]);
  }
  putchar('\n');
  for (int i = 0; i < 5; ++i) {
    printf("%d ", ptr2[i]);
  }
  putchar('\n');
  
  return 0;
}