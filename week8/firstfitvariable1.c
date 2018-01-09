#include<stdio.h>
void main()
{
	int m,npin,npad,ar[10000],sta[1000],end[1000],np[1000],sz[1000],extf=0,ch,var=0;
	printf("enter the memory size\n");
	scanf("%d",&m);
	int i;
	for(i=0;i<m;++i)
	{
	ar[i]=-1;
	
	}
	
	while(1)
	{
	printf("enter your choice 1-add 2-delete 3-break");
	scanf("%d",&ch);
	if(ch==3)
	{
	break;
	}
	else if(ch==2)
	{
	int flagx=0,pno;
	printf("enter the process to be deleted\n");
	scanf("%d",&pno);
	for(i=0;i<m;++i)
	{
	if(ar[i]==pno)
		{
			ar[i]=-1;
			flagx=1;
		}
	}
	if(flagx==1)
	printf("delete successful\n");
	}
	else if(ch==1)
	{
	int st,en,j,k,emp;
	printf("enter the no of new processes \n");
	scanf("%d",&npad);
	int ctr=0,flag=0;
	printf("enter the process\n");
	for(k=0;k<npad;++k)
	{ 
	ctr=0;
	scanf("%d",&np[k]);
	
		if(ar[0]==-1)
		{
			sta[ctr]=0;
			for(j=0;j<m;++j)
			{
				if(ar[j]!=-1)
					{
					end[ctr]=j-1;
					++ctr;
					flag=1;
					break;
					}
					
			}
			++j;
			
			if(flag==0&&ar[m-1]==-1)
			{
			end[ctr]=m-1;
			++ctr;
			}
			while(j<m){
			if(ar[j-1]!=-1&&ar[j]==-1)
			   {
			   sta[ctr]=j;
			   }
			if(j==m-1 && ar[j]==-1)
			{
			   end[ctr]=j;
			   ++ctr;
			}
			else if(ar[j-1]==-1&&ar[j]!=-1)
				{
				end[ctr]=j-1;
				++ctr;
				}
			++j;
			}	
		}
		else{
			for(j=1;j<m;++j)
			{
			if(ar[j-1]!=-1&&ar[j]==-1)
			   {
			   sta[ctr]=j;
			   }
			if(j==m-1 && ar[j]==-1)
			{
			   end[ctr]=j;
			   ++ctr;
			}
			   
			else if(ar[j-1]==-1&&ar[j]!=-1)
				{
				end[ctr]=j-1;
				++ctr;
				}
			
			}
		
		}
		
	//printf("tttttttt%dTTTTT\n",ctr);
	for(i=0;i<ctr;++i)
	{
	sz[i]=end[i]-sta[i]+1;
	//printf("sztttttttt%dTTTTTsz\n",sz[i]);
	
	}
	 emp=0;
	for(i=0;i<m;++i)
	{
		if(ar[i]==-1)
		{
		emp+=1;
		}
	}
	
	if(np[k]>emp)
		printf("no space\n");
	else{
		int pos=-1;
		for(i=0;i<ctr;++i)
		{
			if(np[k]<=sz[i])
			{
			pos=i;
			break;
			}
	
		}
		
		
printf("\n");

		if(pos==-1)
		{
		extf=1;
		printf("external fragmentation%d\n",emp);
		
		}
		else
		{
		printf("process allocated\n");
			for(j=sta[pos];j<sta[pos]+np[k];++j)
			{
			ar[j]=var;
			}
			++var;
		}
	}
		/*for(i=0;i<m;++i)
{
printf(" %dk%d ",ar[i],i);
}
printf("\n");
*/
	
	
}
for(i=0;i<m;++i)
{
printf(" %d-%d ",ar[i],i);
}
emp=0;
	for(i=0;i<m;++i)
	{
		if(ar[i]==-1)
		{
		emp+=1;
		}
	}
if(extf==1)
printf("total fragmentation=%d",emp);
if(extf==0)
printf("space remaining=%d",emp);
	
	
	
	}
	}
	
	/*printf("enter no of processes inside the memory\n");
	scanf("%d",&npin);
	printf("enter starting and ending address of the memory (please dont overwrite)\n");
	
	for(i=0;i<npin;++i)
	{
		scanf("%d%d",&st,&en);
	for(j=st;j<=en;++j)
		{
		 ar[j]=i;
		}
	}*/
	
	/*for(i=0;i<m;++i)
{
printf(" %dk%d ",ar[i],i);
}*/
	
}
