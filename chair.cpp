#include <stdio.h>
#include<math.h>
int main(void) {
    int t,n;
    long long int d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        
        d=pow(2,n)-1;
        d=d%1000000007;
        printf("%lld\n",d);
    }
    
	// your code goes here
	return 0;
}


