#include <stdio.h>

int main() {
  FILE* fp;

  fp = fopen("test.txt", "w");

  if (!fp) {
    perror("Failed to opening file\n");
    return -1;
  } else {
    printf("Succesfully opened file\n");
  }

  fprintf(fp, "Initial IO to file\n");

  if (fclose(fp)) {
    perror("Failed to closing file\n");
    return -1;
  } else {
    printf("Succesfully closed file\n");
  }

  return 0;
}