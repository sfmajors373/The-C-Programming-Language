#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int m = 30;
  int n = 30;
  int diameter = 5;
  // towDArray is a memory address of an array of memory addresses
  int** twoDArray;
  // allocate m memory addresses
  twoDArray = malloc(m * sizeof(void*));
  for (int i = 0; i < m; ++i) {
    twoDArray[i] = malloc(n * sizeof(int));
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (sqrt(abs(i - m/2) * abs(j - n/2)) < diameter && sqrt(abs(i - m/2) *abs(j - n/2) > diameter - 1)) {
        twoDArray[i][j] = 1;
      } else {
      twoDArray[i][j] = 0;
      }
    }
  }
  // printf("finished assignment\n");
  for(int i = 0; i < m; ++i) {
    for(int j = 0; j < n; j++) {
      printf("%d", twoDArray[i][j]);
    }
    // printf("should line break here\n");
    printf("\n");
  }
  for(int i = 0; i < m; ++i) {
    free(twoDArray[i]);
  }
  free(twoDArray);
}
