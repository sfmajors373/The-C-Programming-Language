#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int i, j;
  int height = 1024;
  int width = 768;
  int diameter = 200;
  static unsigned char color[3];
  FILE *imageFile = fopen("template2.ppm", "wb");
  (void) fprintf(imageFile, "P6\n%d %d\n255\n", height, width);
  for (i = 0; i < height; ++i)
  {
    for (j = 0; j < width; ++j)
    {
      if (sqrt(abs(i - height/2) * abs(j - width/2)) < diameter && sqrt(abs(i - height/2) * abs(j - width/2) > diameter - 1))
      {
        color[0] = 20;
        color[1] = 7;
        color[3] = 58;
        (void) fwrite(color, 1, 3, imageFile);
      }
      color[0] = 87;
      color[1] = 42;
      color[2] = 114;
      (void) fwrite(color, 1, 3, imageFile);
    }
  }
  (void) fclose(imageFile);
  return EXIT_SUCCESS;
}
