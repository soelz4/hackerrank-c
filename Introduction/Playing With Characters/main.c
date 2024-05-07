#include <stdio.h>
#include <stdlib.h>

int main() {
  char ch;
  char s[100];
  char sen[100];

  scanf("%c\n", &ch);
  scanf("%s\n", &s);
  fgets(sen, sizeof(sen), stdin);
  // scanf("%[^\n]%*c, &c")

  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s", sen);

  return EXIT_SUCCESS;
}
