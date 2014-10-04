#include <stdio.h>
int main()
{
  char name[20];
  char number[20];
  int MAGICNUMBER = 12345;
  int integer;

  printf("What is your name?\n");
  //getchar();
  scanf("%s", name);
  
  printf("What is the magic number, %s?\n", name);
  scanf("%s", number);
  integer = atoi(number);
  if (integer < MAGICNUMBER)
  {
    printf("TOO LOW\n");
  }
  else 
  {  
    if (integer == MAGICNUMBER)
      {
        printf("CORRECT\n");
      }
    else
    {
      printf("TOO HIGH\n");
    }
  }
  
  return 0;
}
