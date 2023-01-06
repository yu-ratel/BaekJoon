#include <stdio.h>

int main() {
  int n;
  int list[n];
  int v;
  int i;
  int answer = 0;
  
  scanf("%d", &n);
  for(i = 0; i < n; i += 1) {
    scanf("%d", &list[i]);
  }
  scanf("%d", &v);

  for(i = 0; i < n; i += 1) {
    if(list[i] == v) {
      answer += 1; 
    }
  }

  printf("%d", answer);

  return 0;
}