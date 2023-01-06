#include <stdio.h>

int main() {
  int N, i, num;
  scanf("%d", &N);
  int min = 1000001, max = -1000001;

  for(i = 0; i < N; i += 1) {
    scanf("%d", &num);
    if(num > max) max = num;
    if(num < min) min = num;
  }

  printf("%d %d", min, max);

  return 0;
}