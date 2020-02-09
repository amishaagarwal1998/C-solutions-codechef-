#include<stdio.h>
int main(void)
{
	int t,n,i,c,p,r;
	scanf("%d",&t);
	while(t--)
	{	c=0,p=0;
		scanf("%d",&n);
		int h[n],k[n];
		
		for(i=0;i<n;i++)
		{		
			scanf("%d %d",&h[i],&k[i]);
			h[i]=h[i]*2;
						
		}
		for(i=0;i<n;i++)
	{
			
			
		 if(p==h[i])
			{p=0;h[i]=0;
			}
		else if(p>h[i])
			{
				p=p-h[i];
				
				if(p==h[i])
			{h[i]=0;break;}
				
			}
			if(p<h[i])
			h[i]=h[i]-p;
			
		if(h[i]%k[i]==0 && h[i]!=0)
		{					
			c=c+ h[i]/k[i];
			
		}
		else if(h[i]<k[i] && h[i]!=0)
		{c++;
		 p=h[i]-k[i];}
		else if(h[i]%k[i]!=0)
		{	r=1+(h[i]/k[i]);
			c=c+r;
			p=r*k[i]-h[i];
		}
	}
		printf("%d\n",c);	
		
	}
	return 0;
}
