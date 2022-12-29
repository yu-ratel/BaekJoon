#include <stdio.h>

int main() {
  int A , B, C;
  scanf("%d%d%d", &A, &B, &C);

  if((B + C) < 60) {
    printf("%d %d", A, B + C);
  }
  if((B + C) >= 60) {
    A = A + ((B + C) / 60);
    B = (B + C) % 60;
    if(A >= 24) {
      A = A - 24;
    }
    printf("%d %d", A, B);
  }

  return 0;
}