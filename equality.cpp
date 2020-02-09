#include <stdio.h>

int main(void) {
    
    long long int t,n,i,c;
    scanf("%lld",&t);
    while(t--)
    {   c=0;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        {scanf("%lld",&a[i]);
            c+=a[i];
        }
        c=c/(n-1);
        for(i=0;i<n;i++)
        {
            printf("%lld ",c-a[i]);
        }
     printf("\n");   
    }
    
	// your code goes here
	return 0;
}


