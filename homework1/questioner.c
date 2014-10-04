#include <stdio.h>
int main()
{
  char name[20];
  printf("What is your name?\n");
  //getchar();
  scanf("%s", name);
  
  printf("What is the magic number, %s?\n", name);
  
  return 0;
}
