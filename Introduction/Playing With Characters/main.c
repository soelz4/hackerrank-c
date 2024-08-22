#include <stdio.h>
#include <stdlib.h>

int main() {
  char ch;
  char s[100];
  char sen[200];

  // Read User Input
  // Character
  scanf("%c", &ch);
  // String
  scanf("%s\n", &s);
  // Sentence
  fgets(sen, sizeof(sen), stdin);
  // scanf("%[^\n]%*c", &s);
  // scanf("%[^\n]s", &s);

  // Print
  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s", sen);

  // Return
  return EXIT_SUCCESS;
}
