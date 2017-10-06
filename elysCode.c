#include <stdio.h>
#include <math.h>

int main() {
  int width = 255;
  int height = 255;

  FILE *image = fopen("picture.ppm", "wb");
  fprintf(image, "P3\n"); // file print
  fprintf(image, "%d %d\n", width, height);
  fprintf(image, "255\n");


  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      // int r = i % rand() % (255 + 1 - 0) + 0;
      // int g = j % rand() % (255 + 1 - 0) + 0;;
      // int b = j * i % rand() % (255 + 1 - 0) + 0;
      int r = 255;
      int b = 220;
      int g = 200;
      fprintf(image, "%d %d %d\n", r, g, b); // file print
    }
  }
  // system("convert picture.ppm picture.png"); // uses imagemagick
  // remove("picture.ppm");
  return 0;
}
