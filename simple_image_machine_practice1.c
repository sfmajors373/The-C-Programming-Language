#include <stdio.h>
#include <stdlib.h> // include for malloc
#include <math.h>

int main(void) {

  int twoDArray[10][10];
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      if (sqrt(abs(i - 5) * abs(j - 5)) < 3 && sqrt(abs(i - 5) * abs(j - 5) > 1.5)) {
        twoDArray[i][j] = 1;
      }
      else {
        twoDArray[i][j] = 0;
      }
    }
  }
  printf("Did that\n");
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      printf("%d", twoDArray[i][j]);
    }
    printf("\n");
  }
      
}
