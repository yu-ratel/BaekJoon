#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  int a, b, i;

  for(i = 0; i < T; i+=1) {
    scanf("%d %d", &a, &b);
    printf("Case #%d: %d",i + 1,  a + b);
  //printf("Case #%d: %d + %d = %d",i + 1, a, b, a + b);
  }
}
