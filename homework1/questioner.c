#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char name[20];
  char username[20];
  char number[20];
  int magicNumber = 12345;
  int num;
  int integer;
  FILE *answers;
  
  answers = fopen("answers.txt", "r");
  if (answers == NULL) {
    fprintf(stderr, "Can't open answers.txt!\n");
    exit(1);
  }
  
  printf("What is your name?\n");
  scanf("%s", name);

  while (fscanf(answers, "%s %d", username, &num) == 2) {
    if (!(strncmp(username, name, 20))) {
      magicNumber = num;
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
        printf("SUCCESS\n");
    }
    else {
      printf("TOO HIGH\n");
    }
  }

  fclose(answers);
  
  return 0;
}
