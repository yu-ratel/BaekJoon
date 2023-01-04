#include <stdio.h>

int main() {
  int totalprice; 
  scanf("%d", &totalprice);
  
  int totalCount;
  scanf("%d", &totalCount);

  int price, count, i;
  int sum = 0;

  for(i = 0; i < totalCount; i+=1) {
    scanf("%d %d", &price, &count);
    sum += price * count;
  }

  if(totalprice == sum) {
    printf("Yes");
  } else printf("No");
}