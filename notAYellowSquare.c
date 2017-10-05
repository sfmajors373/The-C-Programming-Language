#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int i;
  int j;
  int m = 400;
  int n = 400;
  int diameter = 200;
  printf("P6\n 400 400 255\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < 400; j++) {
      if (((i - m/2) * (i - m/2) + (j - n/2) * (j - n/2)) <= (diameter/2) * (diameter/2)) {
      // if (sqrt(abs(i - m/2) * abs(j - n/2)) < diameter && sqrt(abs(i - m/2) *abs(j - n/2) > diameter - 1)) {
        printf("%c%c%c", 255, 255, 0);
      }
      printf("%c%c%c", 255, 0, 0);
    }
  }
  return 0;
}

// int main (void)
// {
//   int i;
//   int j;
//   int m = 400;
//   int n = 400;
//   
// }
