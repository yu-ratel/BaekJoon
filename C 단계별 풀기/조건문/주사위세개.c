#include <stdio.h>

int main() {
  int dice[3];
  scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

  int overlap_count = 0;
  int max = 0;
  int overlap_value, i, j;

  for(i = 0; i < 3; i++) {
    for(j = i + 1; j < 3; j++) {
      if(dice[i] == dice[j]) {
       overlap_count += 1;
       overlap_value = dice[i];
       break;
      }
    }
    if(max < dice[i]) {
      max = dice[i];
    }
  }

  if(overlap_count == 2) {
    printf("%d", 10000 + overlap_value * 1000);
  }
  if(overlap_count == 1) {
    printf("%d", 1000 + overlap_value * 100);
  }
  if(overlap_count == 0) {
    printf("%d", max * 100);
  }

  return 0;
}

//삽질했던 이유 
//변수에 값을 할당하여 초기화하지않는 경우는 ++나 비교로 값을 매길 수 없다.