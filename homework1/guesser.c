#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main()
{
  char prompt[39];
  char name[7] = "Jimbob";
  int num = 12345;
  pid_t childPid;
  
  childPid = fork();
  if (childPid == -1) {
    fprintf(stderr, "call to fork failed, exiting");
    exit(1);
  }
  if (childPid == 0) { // this is the child
    system("./a.out");
    //execl("/bin/sh", "-c", "~/a.out", NULL);
  }
  else {
    sleep(1);
    printf("%s\n", name);
    sleep(1);
    //fprintf(stderr,"%s\n", name);
    printf("%d\n", num);
    fprintf(stderr,"%d\n", num);
    //system("strace -p %d", childPid);
    //printf("%d", childPid);
    //execl("./", "a.out", NULL);

  }

// strace  -p $child 2>&1| sed -re 's%^write\(1,[[:blank:]](.*),[[:blank:]]*[0-9]+\)[[:blank:]]*=[[:blank:]]*[0-9]+%\1%g'


  return 0;
}
