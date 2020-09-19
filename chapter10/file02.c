#include <stdio.h>
#include <string.h>

int mywrite(FILE* f) {
  char name[16];
  char tel[16];
  char yesno[8];
  char* format = "%-15s %-15s\n";

  printf("Name--");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';
  printf("Telephone number--");
  fgets(tel, sizeof(tel), stdin);
  tel[strlen(tel) - 1] = '\0';

  printf(format, name, tel);
  printf("Write this data to file? (y/n):");
  fgets(yesno, sizeof(yesno), stdin);
  yesno[strlen(yesno) - 1] = '\0';

  if (strcmp(yesno, "Y") == 0 || strcmp(yesno, "y") == 0) {
    fprintf(f, format, name, tel);
  }

  printf("Input more data? (y/n):");
  fgets(yesno, sizeof(yesno), stdin);
  yesno[strlen(yesno) - 1] = '\0';

  if (strcmp(yesno, "N") == 0 || strcmp(yesno, "n") == 0) {
    return -1;
  }

  return 0;
}

int main() {
  FILE* fp;
  char filename[256];

  printf("File name(without extension)---");
  fgets(filename, sizeof(filename), stdin);
  filename[strlen(filename) - 1] = '\0';
  strcat(filename, ".txt");

  fp = fopen(filename, "a");

  if (!fp) {
    perror("Failed to opening file\n");
    return -1;
  } 

  while (!mywrite(fp));

  fclose(fp);

  return 0;
}