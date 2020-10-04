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

int my_strlen(char* str) {
  int len = 0;
  char* ptr = str;
  while (*ptr != '\0') {
    ++ptr;
    ++len;
  }
  return len;
}

void my_strcat(char* str1, char* str2) {
  int len = my_strlen(str1);
  char* ptr1 = str1 + len;
  char* ptr2 = str2;
  while (*ptr2 != '\0') {
    *ptr1 = *ptr2;
    ++ptr1;
    ++ptr2;
  }
  return;
}

void my_strcpy(char* str1, char* str2) {
  int len = my_strlen(str1);
  char* ptr1 = str1;
  char* ptr2 = str2;
  while (*ptr2 != '\0') {
    *ptr1 = *ptr2;
    ++ptr1;
    ++ptr2;
  }
  return;
}

void show_array(int* arr, int sz) {
  for (int i = 0; i < sz; ++i) {
    printf("%d ", arr[i]);
  }
  putchar('\n');
}

int main() {
  char str1[16] = "abcde";
  printf("The length of %s is %d\n", str1, my_strlen(str1));

  char* str2 = "fgh";

  my_strcat(str1, str2);

  printf("strcat : %s\n", str1);

  char* str3 = "Hello, World!";

  printf("Before : str2 : %s, str3 : %s\n", str2, str3);

  my_str_swap(&str2, &str3);

  printf("After : str2 : %s, str3 : %s\n", str2, str3);

  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {5, 4, 3, 2, 1};

  show_array(arr1, 5);
  show_array(arr2, 5);

  int* ptr1 = arr1;
  int* ptr2 = arr2;

  my_array_swap(&ptr1, &ptr2);

  show_array(arr1, 5);
  show_array(arr2, 5);

  // char* str1 = "Hello, World!";
  // char* str2 = "kyomukyomupurin";

  // printf("str1 is %s, str2 is %s\n", str1, str2);
  // printf("str1 is at %p, str2 is at %p\n", str1, str2);
  // printf("Pointer to pointer of str1[0] is %p, pointer to pointer of str2[0] is %p\n", &str1, &str2);

  // my_str_swap(&str1, &str2);

  // printf("str1 is %s, str2 is %s\n", str1, str2);
  // printf("str1 is at %p, str2 is at %p\n", str1, str2);
  // printf("Pointer to pointer of str1[0] is %p, pointer to pointer of str2[0] is %p\n", &str1, &str2);

  return 0;
}