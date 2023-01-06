#include <stdio.h>

int main() {
  int N, X, i;
  int A[N];

  scanf("%d %d", &N, &X);
  for(i = 0; i < N; i += 1) {
    scanf("%d", &A[i]);
  }

  for(i = 0; i < N; i += 1) {
    if(A[i] < X) printf("%d ", A[i]);
  }

  return 0;
}