#include<stdio.h>
#include<stdlib.h>
int smallat(int at[],int n){
int i=0;
int t=100,t1=-1;
for(i=0;i<n;++i)
{
 if(at[i]<t)
 {
 t=at[i];
 t1=i;
 }
}

return t1;
}

void main()
{
int pno[10],at[10],bt[10],ct[10],tat[10],wt[10];
int n,i;
printf("enter the number of processes");
scanf("%d",&n);
for(int i=0;i<n;++i)
{
        printf("enter the arrival time burst time of process %d",pno[i]);
        scanf("%d%d",at[i],bt[i]);
        at1[i]=at[t];
}
int temp=0;
for(i=0;i<n;++i)
{
t=smallat(at1,n);
temp+=bt[t];
ct[t]=temp;
at1[t]=100;
}

int stat=0;
int swt=0;
for(i=0;i<n;++i)
{
tat[i]=ct[i]-at[i];
stat+=tat[i];
wt[i]=tat[i]-bt[i];
swt+=wt[i];
}

float avtat=((float) stat/n);
float avswt=((float) swt/n);
printf("pno   at   bt   ct   tat   wt\n");
for(i=0;i<n;++i)
{
printf("%d   %d   %d   %d   %d   %d\n",i,at[i],bt[i],ct[i],tat[i],wt[i]);

}
printf("AVG TAT=%f\n avg wt=%f",avtat,avswt );




}

