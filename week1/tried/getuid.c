#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main( int argc, char *argv[], char *env[] )
{
   pid_t my_pid, parent_pid, child_pid,my_uid,my_uuid,my_gid,my_ggid;
   int status;
    
/* get and print my pid and my parent's pid. */
   my_uid=getuid();
   my_uuid=geteuid();
   my_pid = getpid();    parent_pid = getppid();
	my_gid=getgid();
	my_ggid=getegid();
   printf("\n Parent: my pid is %d\n\n", my_pid);
   printf("Parent: my parent's pid is %d\n\n", parent_pid);
 printf("\n Parent: my uid is %d\n\n", my_uid);
printf("\n Parent: my gid is %d\n\n", my_gid);
printf("\n Parent: my ggid is %d\n\n", my_ggid);
	 printf("\n Parent: my uuid is %d\n\n", my_uuid);
/* print error message if fork() fails */
 seteuid (1001);
   if((child_pid = fork()) < 0 )
   {
      perror("fork failure");
      exit(1);
   }

/* fork() == 0 for child process */

   if(child_pid == 0)
   {
	setuid (1001);
     printf("\nChild: I am a new-born process!\n\n");
      my_pid = getpid();    parent_pid = getppid();
	my_uid=getuid(); my_uuid=geteuid();
my_gid=getgid();
	my_ggid=getegid();
      printf("Child: my pid is: %d\n\n", my_pid);
	printf("Child: my uid is: %d\n\n", my_uid);
	printf("Child: my uuid is: %d\n\n", my_uuid);
	printf("Child: my gid is: %d\n\n", my_gid);
printf("Child: my ggid is: %d\n\n", my_ggid);
      printf("Child: my parent's pid is: %d\n\n", parent_pid);
      printf("Child: I will sleep 3 seconds and then execute - date - command \n\n");
   
      sleep(3); 
      printf("Child: Now, I woke up and am executing date command \n\n");
      execl("/bin/date", "date",(char *)0,(char *)0);
      perror("execl() failure!\n\n");

      printf("This print is after execl() and should not have been executed if execl were successful! \n\n");

      _exit(1);
   }
/*
 * parent process
 */
   else
   {
      printf("\nParent: I created a child process.\n\n");
      printf("Parent: my child's pid is: %d\n\n", child_pid);
      //system("ps -acefl | grep ercal");  printf("\n \n");
      wait(&status); /* can use wait(NULL) since exit status
                        from child is not used. */
      printf("\n Parent: my child is dead. I am going to leave.\n \n ");
   }

   return 0;
}

