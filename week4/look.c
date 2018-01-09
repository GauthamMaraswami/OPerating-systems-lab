#include<stdio.h>

void main(){
int n;
printf("\nEnter number of requests:\n");
scanf("%d",&n);
printf("Enter the header:\n");
int head;
scanf("%d",&head);
int cyl;
printf("\nEnter total number of cylinders:\n");
scanf("%d",&cyl);
printf("\nEnter the previous position:");
int prev;
scanf("%d",&prev);
int req[40],i,diff[40];
printf("\nEnter the requests:\n");
for(i=0;i<n;i++)
{scanf("%d",&req[i]);diff[i] = head - req[i];}
int dir;
if(prev-head>0)
	dir = 1;
else
	dir = -1;
	int j,k;
	n++;
	diff[n-1]=0;
	req[n-1]=head;
for(j=0;j<n;j++)
	for(k=0;k<n-1;k++)
		if(diff[k]>diff[k+1])
			{
				int temp = diff[k];
				diff[k]=diff[k+1];
				diff[k+1]=temp;
				
				temp = req[k];
				req[k]=req[k+1];
				req[k+1]=temp;
			}
	

printf("Movement of header:\n head:%d",head);
int previous = head,tot=0;

for(j=0;j<n;j++){
if(diff[j]==0)
	break;
}
int pos = j;
if(dir==1){
j++;
for(;j<n;j++){
tot+=req[j]-previous;
previous=req[j];
printf(" to %d ",req[j]);
}
j=pos-1;

for(j=pos-1;j>=0;j--)
{
tot=tot+ req[j]-previous;
previous=req[j];
printf(" to %d ",req[j]);
}
}
else{
j--;
for(;j>=0;j--){
tot+=req[j]-previous;
previous=req[j];
printf(" to %d ",req[j]);
}

for(j=pos+1;j<n;j++){

tot=tot+previous-req[j];
previous=req[j];
printf(" to %d ",req[j]);
}

}

printf("\nTotal header move ment:%d",tot);


}
