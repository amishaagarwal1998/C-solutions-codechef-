#include <stdio.h>

int main(void) {
    
    
    int t;
    long long int n,k,d;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        if(n>=0 && k>=0)
        {
            if(n==0)
            printf("0 0\n");
            
            else if(k==0)
            printf("0 %lld\n",n);
            
            else if(n<k)
            {
                 printf("0 %lld\n",n);
            }      
     
            else
            {
      
            printf("%lld ",n/k);
            d=n-(n/k)*k;
            printf("%lld\n",d);
        
            }
        }  
    }
	// your code goes here
	return 0;
}


