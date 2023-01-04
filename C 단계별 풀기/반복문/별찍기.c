#include <stdio.h>

int main() {
  int N = 5;
  // scanf("%d", &N);
  
  for(int i = 0; i < N; i += 1) {
    for(int j = 1; j < N - i; j += 1) {
      printf(" ");
    }
    for(int k = 0; k <= i; k += 1) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}