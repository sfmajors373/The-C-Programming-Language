#include <stdio.h>

int main(int argc, char *argv[])
// argc = argument count
// argv is array of character pointers listing all arguments
// argv[0] is name of program
// can use argv element like string or 2d array
// argv[argc] is a null pointer
{
  for (int i = 0; i < argc; ++i)
  {
    printf("%c\n", argv[i]);
  }
  // FILE *file = fopen( argv[1], "r");  // assuming argv[1] is a file to open
  // if (file == 0) // if fopen return 0 (null pointer) --> failure
  // {
  //   printf("Could not open file\n");
  // }
  // else
  // {
  //   int x;
  //   while ((x = fgetc(file)) != EOF) // reads file one char at a time until EOF
  //   {
  //     printf("%c", x);
  //   }
  //   fclose(file);
  // }
}
