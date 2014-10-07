#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char EXPECT1[39] = "What is your name?";
  char EXPECT2[39] = "What is the magic number, Jimbob?";
  char prompt1[39];
  char prompt2[39];
  int MAX = 39;
  char name[7] = "Jimbob";
  int num = 12345;
 
  fgets (prompt1, MAX, stdin);
  printf("%s\n", name);
  fgets (prompt2, MAX, stdin);
  printf("%d\n", num);


  return 0;
}
