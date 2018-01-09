#include<stdio.h>
#include<fcntl.h>
void main()
{int fd;
char c[8];
	fd=open("andy.txt",O_RDWR,S_IWUSR,S_IRUSR,S_IXUSR);
	int s1=read(fd,c,sizeof(c));	
	printf(" size %s",c);
	c[0]='h';
	c[1]='w';
	c[2]='n';
	c[3]='o';
	c[4]='\0';
       
	printf("%d\n",fd);
        write(fd,c,sizeof(c));
	read(fd,c,sizeof(c));	
	printf(" %s\n",c);
	 lseek (fd,-3,SEEK_CUR);
	read(fd,c,sizeof(c));
	printf("\n %s",c);

}
