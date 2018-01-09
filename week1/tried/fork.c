#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

              /* parent process prototype */

void  main(void)
{
char *argv[3] = {"Command-line", "15co118/and.txt", NULL};
     int pid= 999,pid1,pid2 ;
 printf("hai %d\n",pid);
      pid=fork();
      if ( pid == 0 ) {
		execvp( "find", argv );
	}
      fork();
printf( "Finished executing the parent process\n"
	        " - the child won't get here--you will only see this once\n" );
     printf("hello%d\n",pid);
     fork();
     
     exit(0);
     printf("how are you %d\n",pid);     
}


