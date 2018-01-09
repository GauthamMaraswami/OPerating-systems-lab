#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
int main()
{
char jdir;
printf("Enter job directory:");  /* user input for different directories */
scanf("jdir");
chdir("/home/gautham/test1");
system("ls -ltr");
return(0);
}
