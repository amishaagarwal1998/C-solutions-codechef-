#include<stdio.h>
#include<math.h>

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;	
}


void subset(int a[],int n,int m,int sum)
{
	if(a[n-1]>m)
	{n-1;
	subset(a,n-1,m,sum);
	}
	if(n==0)
	printf("No\n");
	int i,j,flag;
		for(i=0;i<pow(2,n);i++)
		{	for(j=0;j<n;j++)
		if(i&(1<<j))
		sum=sum+a[j];	
		
		if(sum==m)
		{
		
		printf("Yes\n");
		flag=1;
		}	
		
		}
		
		if(flag!=1)
		printf("No\n");
				
		
}

void main()
{
	int t,i,j,n,m,sum=0,flag;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		
		int a[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
			swap(&a[i],&a[j]);		
		
		
		subset(a,n,m,sum);
		
	}
	
	
	
}
