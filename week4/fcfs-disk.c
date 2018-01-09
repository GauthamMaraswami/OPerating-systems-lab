#include<stdio.h>
void main()
{
  int n,head,cy,prev,a[100];

  printf("enter the header pos\n");
  scanf("%d",&head);
  printf("enter the no of cylinders\n");
  scanf("%d",&cy);
  printf("enter the number of requests\n");
  scanf("%d",&n);
  printf("enter the previous request\n");
  scanf("%d",&prev);
  int i=0;
  printf("enter the requests\n");
  for(i=0;i<n;++i)
        scanf("%d",&a[i]);
  int cur=a[0];
  i=0;
  int te=0,tot=0;
  printf("%d ",a[0]);
    cur=head;
    for(i=1;i<n;++i)
  printf("<-%d",a[i]);
   for(i=0;i<n;++i)
       {
       
       te=a[i]-cur;
       cur=a[i];
       if(te<0)
         te=0-te;
       tot=tot+te;
       }
    printf("\ntotal head movement %d",tot);
}
