#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char prompt[39];
  char name[7] = "Jimbob";
  int num = 12345;

  printf("%s\n", name);
  fprintf(stderr,"%s\n", name);
  printf("%d\n", num);
  fprintf(stderr,"%d\n", num);

  return 0;
}
