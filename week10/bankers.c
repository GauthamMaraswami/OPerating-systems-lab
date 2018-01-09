#include<stdio.h>
struct process
	{
	int id;
	int alloc[100];
	int max[100];
	int available[100];
	int need[100];
	int finished;
	}pr[100];
void main()
{
	int npr,nres,res[100],totalloc[100],avail[100],req[100],avail1[100];
	printf("enter the number of unique resources\n");
	scanf("%d",&nres);
	printf("enter the maximum instances of each resources\n");
	int i,j;
	for(i=0;i<nres;++i)
	{
		scanf("%d",&res[i]);	
		totalloc[i]=0;
	}
	printf("enter the number of processes\n");
	scanf("%d",&npr);
	printf("enter the allocation matrix\n");
	for(i=0;i<npr;++i)
	{
		pr[i].id=i;
		for(j=0;j<nres;++j)
			{
			scanf("%d",&pr[i].alloc[j]);
			totalloc[j]+=pr[i].alloc[j];
			}
		pr[i].finished=0;	
	}
	printf("enter the max required matrix\n");
	for(i=0;i<npr;++i)
	{
		printf("process :%d",pr[i].id);
		for(j=0;j<nres;++j)
			{
			scanf("%d",&pr[i].max[j]);
			}	
	}
	printf("need  matrix\n");
	for(i=0;i<npr;++i)
	{
		printf("process :%d",pr[i].id);
		for(j=0;j<nres;++j)
			{
			pr[i].need[j]=pr[i].max[j]-pr[i].alloc[j];
			printf("%d",pr[i].need[j]);
			}	
	}
	printf("\navailable=");
	for(i=0;i<nres;++i)
	{
		avail[i]=res[i]-totalloc[i];
		avail1[i]=avail[i];
		printf("%d\t",avail[i]);
	}
	printf("\n");
	//initializtion completed
	int safe,possib;
	int chx=1;
	while(1)
	{
	while(1)
	{
	//printf("k");
	safe=0;
	for(i=0;i<npr;++i)
		{
			if(pr[i].finished==0)
				{
					//printf("reached here%d\n",pr[i].finished);
					possib=0;
					for(j=0;j<nres;++j)
					{
					if(pr[i].need[j]>avail[j])
						{
						possib=1;
						break;
						}
					}
					if(possib==0)
					{
					printf("\n p%d executed",pr[i].id);
					printf("now available=\n");
					for(j=0;j<nres;++j)
						{
						avail[j]+=pr[i].alloc[j];
						printf("%d\t",avail[j]);
						}
						safe=1;
						printf("\n");
					
					pr[i].finished=1;
					}
				}
		}
		if(safe==0)
		{
			//printf("reached\n");
			int flagy=0;
			for(i=0;i<npr;++i)
			{
				//printf("%d lll",pr[i].finished);
				if(pr[i].finished==0)
				{
				//printf("breaking\n");
				flagy=1;
				break;
				}
			}
			if(flagy==1)
			{
			printf("\nunsafe");
			printf("\nneeded");
			for(j=0;j<nres;++j)
			{
				printf("%d",pr[i].need[j]-avail[j]);
			}
			break;
			}
			else if(flagy==0)
			{
			printf("\nsafe");
			break;
			}	
		}
	
	
	
	}//while calculate
	printf("do you want to change any process 1-yes 2-no\n");
	scanf("%d",&chx);
	if(chx==2)
	{
	break;
	}
	else if(chx==1)
	{
	printf("enter the new request to be added\n");
	for(i=0;i<nres;++i)
		{
		scanf("%d",&req[i]);
		}
	printf("enter the process id\n");
	int pid;
	scanf("%d",&pid);
	for(i=0;i<npr;++i)
		{
		pr[i].finished=0;
		}
	for(i=0;i<nres;++i)
	{
	avail[i]=avail1[i]-req[i];
	pr[pid].need[i]+=req[i];
	}
	
	}
}


}
