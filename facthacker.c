#include <stdio.h>
int factorial(int N)
 {
  if (N == 0)
    return 1;
  return N * factorial(N - 1);
}
int main() {

  int num;
  scanf("%d", &num);
  num = (factorial(num));
  printf("%d", num);
  return 0;
}

