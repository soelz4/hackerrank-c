#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Enter your code here. Read input from STDIN. Print output to STDOUT
  char *s;
  int freq[10] = {0};

  s = malloc(1024 * sizeof(char));
  scanf("%[^\n]", s);

  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      freq[s[i] - '0']++;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", freq[i]);
  }

  // Return
  return EXIT_SUCCESS;
}
