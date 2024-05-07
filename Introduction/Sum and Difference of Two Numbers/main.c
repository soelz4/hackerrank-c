#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;
  float c, d;

  scanf("%d %d", &a, &b);
  scanf("%f %f", &c, &d);

  printf("%d %d\n", a + b, a - b);
  printf("%.1f %.1f\n", c + d, c - d);

  return EXIT_SUCCESS;
}
