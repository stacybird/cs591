#include <stdio.h>
#include<stdlib.h>
int main()
{
  char name[20];
  char username[20];
  char number[20];
  int magicNumber = 12345;
  int integer;
  FILE *answers;
  
  answers = fopen("answers.txt", "r");
  if (answers == NULL) {
    fprintf(stderr, "Can't open answers.txt!\n");
    exit(1);
  }
  
  printf("What is your name?\n");
  scanf("%s", name);

  while (fscanf(answers, "%s %d", username, &magicNumber) == 2) {
    printf("%s %d\n", username, magicNumber);
    if (username == name) {
      break;
    }
  }
  
  printf("What is the magic number, %s?\n", name);
  scanf("%s", number);
  integer = atoi(number);
  if (integer < magicNumber) {
    printf("TOO LOW\n");
  }
  else {  
    if (integer == magicNumber) {
        printf("CORRECT\n");
      }
    else {
      printf("TOO HIGH\n");
    }
  }

  fclose(answers);
  
  return 0;
}
