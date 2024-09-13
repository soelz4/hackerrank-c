#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s;
  s = malloc(1024 * sizeof(char));
  scanf("%[^\n]", s);
  s = realloc(s, strlen(s) + 1);
  // Write your logic to print the tokens of the sentence here.
  // Split String into the Tokens with Space Delimiter
  char *token = strtok(s, " ");
  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, " ");
  }
  return EXIT_SUCCESS;
}
