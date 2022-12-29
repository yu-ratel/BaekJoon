#include <stdio.h>

int main() {
  int dice[3];
  scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);
  
  int overlap_count = 1;
  int overlap_value, max, i;

  for(i = 0; i < 3; i++) {
    if(dice[i] == dice[i + 1] || dice[i] == dice[i + 2]) {
      overlap_count += 1;
      overlap_value = dice[i];
    }

    if(max < dice[i]) {
      max = dice[i];
    }
  }

  if(overlap_count == 3) {
    printf("%d", (10000) + overlap_value * 1000);
  }
  if(overlap_count == 2) {
    printf("%d", (1000) + overlap_value * 100);
  }
  if(overlap_count == 1) {
    printf("%d", max * 100);
  }
  
  return 0;
}