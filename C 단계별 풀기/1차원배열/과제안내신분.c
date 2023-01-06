#include <stdio.h>

int main() {
  int i; 
  int answerList[30];
  for(i = 0; i < 30; i += 1) {
    answerList[i] = i + 1; 
  }

  printf("%d", answerList[20]);

  return 0;
}