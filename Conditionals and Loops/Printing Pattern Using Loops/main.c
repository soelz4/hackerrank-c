#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, max;
  scanf("%d", &n);

  for (int row = -n + 1; row < n; row++) {
    for (int col = -n + 1; col < n; col++) {
      if (abs(row) > abs(col)) {
        max = abs(row);
      } else {
        max = abs(col);
      }
      printf("%d ", max + 1);
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
