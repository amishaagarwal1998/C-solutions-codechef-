#include <stdio.h>
#include<math.h>
int main(void) {
    
    long long int t,n,i,c,p;
    scanf("%lld",&t);
    while(t--)
    {    c=0;
        scanf("%lld",&n);
        i=1;p=sqrt(n);
        while(i<=p)
        {
            if(n%i==0)
            {c+=(n/i)+i;
            
            if((n/i)==i)
            c-=i;}
            i++;
            
        }
        
        printf("%lld\n",c);
        
    }
    
    
	// your code goes here
	return 0;
}


