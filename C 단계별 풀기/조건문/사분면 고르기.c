#include <stdio.h> 

int main() {
  int A, B;
  scanf("%d%d", &A, &B);
  
  if (A > 0 && B > 0) printf("%d", 1);
  if (A < 0 && B > 0) printf("%d", 2);
  if (A < 0 && B < 0) printf("%d", 3);
  if (A > 0 && B < 0) printf("%d", 4);
  
  return 0;
}