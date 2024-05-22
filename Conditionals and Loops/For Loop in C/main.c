#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, n;
  char *nums[] = {"one", "two",   "three", "four", "five",
                  "six", "seven", "eight", "nine"};

  scanf("%d\n%d", &a, &b);

  for (n = a; n <= b; n++) {
    if (n < 10) {
      printf("%s\n", nums[n - 1]);
    } else {
      if (n % 2 == 0) {
        printf("%s\n", "even");
      } else {
        printf("%s\n", "odd");
      }
    }
  }

  return EXIT_SUCCESS;
}
