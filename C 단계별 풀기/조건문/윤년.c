#include <stdio.h>

int main() {
  int yyyy;
  scanf("%d", &yyyy);

  if ((yyyy % 4) == 0 && (yyyy % 100) != 0 || (yyyy % 400) == 0) {
    printf("%d", 1);
  } else printf("%d", 0);

  return 0;
}