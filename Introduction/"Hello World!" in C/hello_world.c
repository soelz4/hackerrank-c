#include <stdio.h>

int main() {
  char s[222];
  fgets(s, sizeof(s), stdin);

  printf("Hello, World!\n");
  printf("%s\n", s);
}
