#include <stdio.h>

int main() {
  int A , B;
  scanf("%d %d", &A, &B);

  if(B < 45) {
    B = (60 + B) - 45;
    A -= 1;
  }
  else if(B == 45) {
    B = 0;
  }
  else if(B > 45) {
    B = B - 45;
  }
  if(A < 0) {
    A = 23;
  }

  printf("%d %d", A, B);

  return 0;
}

