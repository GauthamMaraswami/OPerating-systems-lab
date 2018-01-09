#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void wakeup(int);    /* executed when alarm received. */
   /* Executed upon an abort. */

int counter = 0;     /* Global so wakeup() and main() can both see it. */

void wakeup(int signum) 
{
   /* print the current value of counter */
   system("date");
   printf("counter is currently %d.\n ",counter);
   printf("\n");
   /* Set signal to this function. */
   signal(SIGALRM, wakeup);
   /* Set alarm clock for 5 seconds. */
   alarm(5);
   printf("%d",alarm(7));
}



void main()
{
	 system("date");
   printf("counter is currently %d.\n ",counter);
   printf("\n");
   /* Set signal to this function. */
   //signal(SIGALRM, wakeup);
   /* Set alarm clock for 5 seconds. */
   alarm(5);
   printf("%d",alarm(7));
   wakeup(0);
   while(1)
     counter++;
}
