#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int i;
  int j;
  int m = 1024;
  int n = 768;
  int diameter = 200;
  printf("P6\n 1024  768 255\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      // if (((i - m/2) * (i - m/2) + (j - n/2) * (j - n/2)) <= (diameter/2) * (diameter/2)) {
      if (sqrt(abs(i - m/2) * abs(j - n/2)) < diameter && sqrt(abs(i - m/2) *abs(j - n/2) > diameter - 1)) {
      // if (i < 100 || i > 500) {
        printf("%c%c%c", 255, 255, 0); // yellow
      }
      printf("%c%c%c", 255, 0, 0); // red
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
