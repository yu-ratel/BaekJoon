#include <stdio.h>

int main() {
  int N[9];
  int i;
  int max = -1;

  for(i = 0; i < 9; i += 1) {
    scanf("%d", &N[i]);
    if(N[i] > max) max = N[i];
  }

  for(i = 0; i < 9; i +=1) {
    if(N[i] == max) printf("%d\n%d", max, i + 1);
  }

  return 0;
}