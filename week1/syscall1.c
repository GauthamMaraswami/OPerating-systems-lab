#include<stdio.h>
#include<fcntl.h>
void main()
{
int cr=creat("fuct.txt", O_CREAT);
printf("file created successfully\n");

}
