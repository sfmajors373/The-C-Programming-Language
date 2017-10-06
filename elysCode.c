#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// int main() {
//   int width = 255;
//   int height = 255;
// 
//   FILE *image = fopen("picture333.ppm", "wb");
//   fprintf(image, "P3\n");
//   fprintf(image, "%d %d\n", width, height);
//   fprintf(image, "255\n");
// 
// 
//   for (int i = 0; i < height; i++) {
//     for (int j = 0; j < width; j++) {
//       // int r = i % (255 + 1 - 0) + 0;
//       // int g = j % (255 + 1 - 0) + 0;;
//       // int b = j * i % (255 + 1 - 0) + 0;
//       int r = 200;
//       int g = 150;
//       int b = 100;
//       fprintf(image, "%d %d %d\n", r, g, b);
//     }
//   }
//   // system("convert picture.ppm picture.png");
//   // remove("picture.ppm");
//   return 0;
// }

int main(void) {
  const int x = 1024, y = 768;
  int i, j;
  FILE *imageFile = fopen("P3.ppm", "wb"); /* b - binary mode */
  /* I do not understand the use of (void) here */
  (void) fprintf(imageFile, "P6\n%d %d\n255\n", x, y);
  for (j = 0; j < y; ++j) {
    for (i = 0; i < x; ++i) {
      static unsigned char color[3];
      color[0] = i % 256;  /* red */
      color[1] = j % 256;  /* green */
      color[2] = (i * j) % 256;  /* blue */
      (void) fwrite(color, 1, 3, imageFile);
    }
  }
  /* I do not understand the use of (void) here */
  (void) fclose(imageFile);
  return EXIT_SUCCESS;
}
