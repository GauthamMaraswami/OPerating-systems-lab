#include<stdio.h>
#include<fcntl.h>
void main()
{
int fp=creat("test1.txt",  O_CREAT);
printf("file createds successfully\n");



}
