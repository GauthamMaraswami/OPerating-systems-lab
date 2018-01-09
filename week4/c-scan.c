#include<stdio.h>
void main()
{
  int n,head,cy,prev,a[100],cur;

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
 int te;  
 int j=0;     
  for(i=0;i<n;++i)
     {
       for(j=0;j<n-i-1;++j)
       {
         te=0;
         if(a[j]>a[j+1])
         {
                te=a[j];
                a[j]=a[j+1];
                a[j+1]=te;
         
         }
                 
       }
     }
     
          int tot=0;
 
         cur=head;
         
         printf("%d (%d)",head,tot);
         for(i=0;i<n;++i)
         {
           if(a[i]>head)
             {
               te=a[i]-cur;
               cur=a[i];
               tot+=te;
               printf("<-%d (%d)",a[i],tot);
             }
         
         
         }
         
          printf("->%d (%d)",cy-1,tot);
         te=cy-1-cur;
         tot+=te;
         cur=cy-1;
         te=cy-1;
         tot+=te;
         cur=0;
         printf("->%d (%d)",0,tot);
         cur=0;
         
        /* cur=cy-1;
         te=cy-1-a[0];
         tot+=a[0];
         cur=a[0]; 
        */ 
         for(i=0;i<n;++i)
         {
         if(a[i]<=head)
             {
               te=a[i]-cur;
               cur=a[i];
               tot+=te;
               printf("->%d(%d)",a[i],tot);
             }
         
         }
        /* if(a[0]<head)
              tot-=2*a[0];
         */
         
         printf("\ntotal head movement %d",tot);
   
        }
