#include<stdio.h>
#include<fcntl.h>
void main()
{int fd,fp;
char c[5];
	fd=open("andy.txt",O_APPEND,S_IWUSR,S_IRUSR,S_IXUSR);
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
	printf("%s",c);

	fp=dup(fd);
	 lseek (fp,-12,SEEK_CUR);
	read(fp,c,sizeof(c));	
	printf(" \nsize %s",c);

        link("andy.txt","15co118/and1.txt");
 int err=access("15co118/and1.txt",F_OK);
  printf("file existance:%d",err);
  err=access("15co118/and1.txt",R_OK);
  printf("file read:%d",err);
  err=access("15co118/and1.txt",W_OK);
  printf("file write:%d",err);
 err=access("15co118/and1.txt",X_OK);
  printf("file exe:%d",err);


chmod("15co118/and1.txt", S_IXUSR);
chmod("15co118/and1.txt", S_IRUSR);
chmod("15co118/and1.txt", S_IWUSR);
err=access("15co118/and1.txt",X_OK);
  printf("\n now file exe:%d",err);



       
}
