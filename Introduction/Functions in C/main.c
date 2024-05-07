#include <stdio.h>
#include <stdlib.h>

/*
#define max(a,b) (a>b?a:b)

int max_of_four(int a,int b,int c,int d){

    return max(a,max(b,max(c,d)));
}
*/

int max_of_four(int a, int b, int c, int d) {
  int max = a;
  // Compare max and b
  if (max < b) {
    max = b;
  }
  // Compare max and c
  if (max < c) {
    max = c;
  }
  // Compare max and d
  if (max < d) {
    max = d;
  }

  return max;
}

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int result = max_of_four(a, b, c, d);
  printf("%d\n", result);

  return EXIT_SUCCESS;
}
