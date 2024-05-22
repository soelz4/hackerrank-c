#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int sum = 0;

  scanf("%d", &n);

  while (n != 0) {
    sum += n % 10;
    // sum = sum + n % 10;
    n = n / 10;
  }

  printf("%d\n", sum);

  return EXIT_SUCCESS;
}
