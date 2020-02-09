#include <stdio.h>
#include<math.h>

float area(int b[])
{
    float c;
    c=(b[0]*(b[3]-b[5]) + b[2]*(b[5]-b[1]) + b[4]*(b[1]-b[3]))/2;
    
    return abs(c);
}

int main(void) {
    int n,p,q,i;
    float max,min,c;
    int b[6];
    scanf("%d",&n);
    scanf("%d %d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5]);
    max=min=abs(area(b));
    printf("%f\n",max);
    p=q=1;
	for(i=2;i<=n;i++)
	{
	   scanf("%d %d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5]);
	   
	   c=area(b);
	 printf("%f\n",c);
	    if(c>=max)
	    {max=c;p=i;}
	    
	    if(c<=min)
	    {min=c;q=i;}
	}
	
	printf("%d %d\n",q,p);
	
	// your code goes here
	return 0;
}


