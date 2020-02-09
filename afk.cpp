#include <stdio.h>
#include<math.h>

int main(void) {
    int t;
    long long int a,b,c,A,C,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        
            
        A=a-b;
        C=c-b;
        d=abs(A+C);
        if(d%2==0)
		printf("%lld\n",d/2);
        
        else{
        	d++;
        	
        	printf("%lld\n",d/2);	
		}
    }
	// your code goes here
	return 0;
}


