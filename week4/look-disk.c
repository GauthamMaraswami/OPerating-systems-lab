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
   if((head-prev)>0)
        {
         cur=a[n-1];
         te=a[n-1]-head;
         tot+=te;
         printf("%d",head);
         //printf("->%d",&a[n-1];
         for(i=n-1;i>=0;--i)
         {
                te=a[i]-a[i-1];
                tot+=te;
                 printf("->%d",a[i]);
        }
        
        }
    else {
    
          cur=a[0];
          te=head-a[0];
          tot+=te;
          printf("%d",head);
        // printf("->%d",&a[0];
          for(i=0;i<=n-1;++i)
             {
                te=a[i+1]-a[i];
                tot+=te;
                 printf("->%d",a[i]);
             }
    
    
    }   
    printf("\ntotal head movement %d",tot);
   
   
        
 }
