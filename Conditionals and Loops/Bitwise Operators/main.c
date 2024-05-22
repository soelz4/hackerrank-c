#include <stdio.h>
#include <stdlib.h>

// Complete the following function.
void calculate_the_maximum(int n, int k) {
  // Write your code here.
  int a, b;
  int max_and, max_or, max_xor;
  max_and = max_or = max_xor = 0;

  for (a = 1; a <= n; a++) {
    for (b = 1; b <= n; b++) {
      if (a != b) {
        // AND
        if ((a & b) > max_and && (a & b) < k) {
          max_and = (a & b);
        }
        // max_and = ((a & b) > max_and) && ((a & b) < k) ? (a & b) : max_and;

        // OR
        if ((a | b) > max_or && (a | b) < k) {
          max_or = (a | b);
        }
        // max_or = ((a | b) > max_or) && ((a | b) < k) ? (a & b) : max_or;

        // XOR
        if ((a ^ b) > max_xor && (a ^ b) < k) {
          max_xor = (a ^ b);
        }
        // max_xor = ((a ^ b) > max_xor) && ((a ^ b) < k) ? (a ^ b) : max_xor;
      } else {
        continue;
      }
    }
  }

  printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
  int n, k;

  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);

  return EXIT_SUCCESS;
}
