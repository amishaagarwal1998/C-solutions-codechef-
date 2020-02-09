
#include<stdio.h>

int sum(long long int n)
{	int s=0,r=0;
	while(n>0)
	{
		r=n%10;
		s+=r;
		n/=10;
		
	}
	
	return s;
	
}

int main(void)
{
	long long int t,n;
	int s=0,i;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		s=sum(n);
		for(i=0;i<=9;i++)
		{
			if((s+i)%10==0)
			break;
			
		}
		n=n*10+i;
	printf("%lld\n",n);	
	}
	
}
