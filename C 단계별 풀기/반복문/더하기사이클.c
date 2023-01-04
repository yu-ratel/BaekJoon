#include <stdio.h>

int main() {
  int N = 0;
  int result = N;
  int sum = 0;
  int frontNumber = -1;
  int backNumber =-1;
  int newNumber = -1;
  int sumFrontNumber = -1;

  while(newNumber != result) {
    frontNumber = N / 10;
    backNumber = N % 10;
    sumFrontNumber = (frontNumber + backNumber) % 10;
    newNumber = backNumber * 10 + sumFrontNumber; 
    N = newNumber; 
    sum += 1;
  }

  printf("%d", sum);

}

// / 앞 % 뒤 
