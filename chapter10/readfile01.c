#include <stdio.h>
#include <string.h>

int main() {
/*
  FILE* fp;
  char filename[256], name[16], tel[16];
  char* format = "%-15s %-15s\n";

  printf("Filename(without extension)--");
  fgets(filename, sizeof(filename), stdin);
  filename[strlen(filename) - 1] = '\0';
  strcat(filename, ".txt");
  fp = fopen(filename, "r");

  if (!fp) {
    perror("Cannot open file\n");
    return -1;
  }

  while (fscanf(fp, "%s%s", name, tel) != EOF) {
    printf(format, name, tel);
  }

  fclose(fp);
*/

  FILE* fp;
  char filename[256];
  char c;

  printf("Filename(without extension)--");
  fgets(filename, sizeof(filename), stdin);
  filename[strlen(filename) - 1] = '\0';
  strcat(filename, ".txt");
  fp = fopen(filename, "r");

  if (!fp) {
    perror("Cannot open file\n");
    return -1;
  }

  while (fscanf(fp, "%c", &c) != EOF) {
    printf("%c", c);
  }

  fclose(fp);

  return 0;
}