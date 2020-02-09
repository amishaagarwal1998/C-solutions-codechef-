#include<stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int a[n],c,i,flag;
		for(i=0;i<n;i++)
		{scanf("%d",&a[i]);
		}
		
		for(i=0;i<n;i++)
		{	c=0;flag=0;
			if(a[i]%2==0)
				while(a[i]%2==0)
				{
				c++;i++;
			if(c>=k)
			{printf("YES\n");flag=1;break;
					}
			}
		
		}
		if(flag==0)
		printf("NO\n");
	}
	
	return 0;
	
}
