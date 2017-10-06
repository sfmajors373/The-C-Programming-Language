#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//   int height = 1024;
//   int width = 768;
//   int i, j;
//   FILE *imageFile = fopen("template1.ppm", "wb"); // b for binary
//   (void) fprintf(imageFile, "P6\n%d %d\n", height, width);
//   for (i = 0; i < height; ++i)
//   {
//     for (j = 0; j < width; ++j)
//     {
//       static unsigned char color[3];
//       color[0] = 255;
//       color[1] = 255;
//       color[2] = 255;
//       (void) fwrite(color, 1, 3, imageFile);
//     }
//   }
//   (void) fclose(imageFile);
//   return 0;
// }

int main(void) {
  int height = 1024;
  int width = 768;
  int i, j;
  FILE *imageFile = fopen("template1.ppm", "wb");
  (void) fprintf(imageFile, "P6\n%d %d\n255\n", height, width);
  for (i = 0; i < height; ++i)
  {
    for (j = 0; j < width; ++j)
    {
      static unsigned char color[3];
      color[0] = (i + j) % 256;  /* red */
      color[1] = j*j % 256;  /* green */
      color[2] = (i * j) % 256;  /* blue */
      (void) fwrite(color, 1, 3, imageFile);
    }
  }
  /* I do not understand the use of (void) here */
  (void) fclose(imageFile);
  return EXIT_SUCCESS;
}
