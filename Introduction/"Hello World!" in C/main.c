#include <stdio.h>
#include <stdlib.h>

int main() {
  char s[100];

  // Read User Input
  fgets(s, sizeof(s), stdin);
  // scanf("%[^\n]%*c", &s);
  // scanf("%[^\n]s", &s);

  printf("Hello, World!\n");
  printf("%s\n", s);

  return EXIT_SUCCESS;
}
