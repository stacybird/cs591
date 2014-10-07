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
  int result;
 
  fgets (prompt1, MAX, stdin);
  result = strncmp(EXPECT1, prompt1, 18);
  if (0 == result) {
    printf("%s\n", name);
  }
  else {
    printf("???\n");
  }

  fgets (prompt2, MAX, stdin);
  result = strncmp(EXPECT2, prompt2, 33);
  if (0 == result) {
    printf("%d\n", num);
  }
  else {
    printf("???\n");
  }

  return 0;
}
