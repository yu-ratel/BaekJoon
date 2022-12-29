#include <stdio.h>

int main() {
  int number = 6;
  int list[6] = {1, 1, 2, 2, 2, 8};
  int input[6];
  int i;

  for (i = 0; i <number; i++) {
    scanf("%d", &input[i]);

    list[i] = list[i] - input[i];

    printf("%d ", list[i]);
  };

  return 0;
}
