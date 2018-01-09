#include<stdio.h>
#include<fcntl.h>
void main()
{int fd;

 fd = open("name.txt", O_RDWR,0);
int fp=creat("test4.txt",  O_RDONLY);
printf("file opend successfully\n");
printf("%d\n",fd);
printf("%d\n",fp);


close(fp);
close(fd);
printf("%d\n",fd);
}

