#include  <stdio.h>
#include  <sys/types.h>
#include <unistd.h>
void main() 
{ int return_value;
 
		 printf("Forking process\n");
		 fork();
		 printf("The process id is %d and return value is %d\n",getpid(), return_value);
		 execl("/bin/ls","ls","-l",(char *)0);
		 printf("This line is not printed\n");
}


