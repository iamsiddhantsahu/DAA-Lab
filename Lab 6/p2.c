#include<stdio.h>
struct job
{
	int j,d,p;
};
struct time
{
	int s,j;
};
int max(struct job z[],int n)
{
	int m=z[0].d;
	for(int i=1;i<n;i++)
		if(z[i].d>m)
			m=z[i].d;
	return m;
}
void sort(struct job z[],int n)
{
	struct job temp;
	for(int i=0;i<n-1;i++)
	{
		int pos=i;
		int max=z[i].p;
		for(int j=i+1;j<n;j++)
		{
			if(z[j].p>max)
			{
				max=z[j].p;
				pos=j;
			}
		}
		temp=z[i];
		z[i]=z[pos];
		z[pos]=temp;
	}
}
void  main()
{
	int n,i,j,ma,c=0,k,pr=0;
	printf("Enter the number of jobs: ");
	scanf("%d",&n);
	
	struct job jo[n];
	
	for(i=0;i<n;i++)
	{
		jo[i].j=i+1;
		printf("Enter the deadline and profit for job %d:",i+1);
		scanf("%d%d",&jo[i].d,&jo[i].p);
	}
	
	ma=max(jo,n);
	printf("Max: %d",ma);
	sort(jo,n);
	
	struct time t[ma];
	
	for(i=0;i<ma;i++)
		t[i].s=0;
		
	for(i=0;i,n;i++)
	{
		k=jo[i].d;
		while(k>0)
		{
			if(t[k-1].s==0)
			{
				t[k-1].s=1;
				t[k-1].j=jo[i].j;
				pr+=jo[i].p;
				c++;
				break;
			}
			else
				k--;
		}
		if(ma==c)
			break;
	}	
	printf("Max Profit: %d",pr);
	printf("The Job Scheduling is: ");
	for(i=0;i<ma;i++)
		printf("J%d->",t[i].j);
}
