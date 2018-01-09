#include<stdio.h>
#include<fcntl.h>
void main()
{
  unlink("15co118/and1.txt");
int err=access("15co118/and1.txt",F_OK);
  printf("file existance:%d",err);

err=access("15co118/and1.txt",R_OK);
  printf("file read:%d",err);
  err=access("15co118/and1.txt",W_OK);
  printf("file write:%d",err);
 err=access("15co118/and1.txt",X_OK);
  printf("file exe:%d",err);
}
