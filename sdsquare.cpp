#include <stdio.h>
#include<math.h>
int main(void) {
    int t,flag;
    long long int a,c,b,i,r,s,d;
    scanf("%d",&t);
    while(t--)
    {   c=0;
        scanf("%lld %lld",&a,&b);
        
        r=sqrt(a);

            while(r*r<a)
            {
                r++;
            }
        s=sqrt(b);
            while(s*s<=b)
            {
                s++;
            }
            s--;
            
            
        for(i=r;i<=s;i++)
        {flag=1;
            d=i*i;
            while(d>0)
            {
                r=d%10;
                if(r!=0 && r!=4 && r!=9 && r!=1)
                {flag=0;break;}
                d=d/10;
            }
            if(flag==1)
            {
                c++;
                
            }
        }
        printf("%lld\n",c);
    }
    
	// your code goes here
	return 0;
}


