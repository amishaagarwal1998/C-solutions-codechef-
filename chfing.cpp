#include <stdio.h>

int main(void) {
    
    long long int n,t,k,ans,r,num,a,s;
    scanf("%lld",&t);
    while(t--)
    {
        
        scanf("%lld %lld",&n,&k);
        if(n==2)
        {ans=(k-1)%1000000007;
        ans=ans*(k%1000000007);
        ans=ans/2;
        ans=ans%1000000007;
        
        printf("%lld\n",ans);
        }
            
    else  {
            
            r=(k-1)/(n-1);
            a=(k-1)-(n-1)*r;
            num=(k-1-a)/(n-1) +1; 
            s=a+k-1;
            if(s%2==0)
           { s=s/2;
              s=s%1000000007; 
           }
            else {num=num/2;
                  num=num%1000000007;
                 }
            
            ans=(s*num)%1000000007;
            
        printf("%lld\n",ans);
            }  
        
        
    }
	// your code goes here
	return 0;
}


