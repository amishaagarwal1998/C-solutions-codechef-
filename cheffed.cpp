#include <stdio.h>
long long int sum(int n)
{   int r;
    long long int c=0;
    while(n>0)
    {
        r=n%10;
        c=c+r;
        n=n/10;
    }
    return c;
}

int main(void) {
    long long int n,i,m,p;
    int c=0;
    scanf("%lld",&n);
    
    for(i=n-100;i<n;i++)
    {
        
        m=sum(i);
        p=sum(m);
        
        if(i+m+p==n)
        {
            c++;
            printf("%d\n",c);
        }
        
    }
    
    printf("%d\n",c);
	// your code goes here
	return 0;
}


