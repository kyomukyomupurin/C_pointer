#include <stdio.h>
#include <string.h>

int main() {
  FILE* fp;
  char filename[256];
  int c;

  printf("Filename(without extension)---");
  fgets(filename, sizeof(filename) - sizeof(".txt"), stdin);
  filename[strlen(filename) - 1] = '\0';
  fp = fopen(strcat(filename, ".txt"), "r");

  if (!fp) {
    perror("Cannot open file\n");
    return -1;
  }

  while ((c = fgetc(fp)) != EOF) {
    putc(c, stdout);
  }

  return 0;
}