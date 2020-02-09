#include <stdio.h>
 
int main(void) {
 
     int t=0;
    scanf("%lld",&t);
    for(j=1;j<=t;j++){int n;
        scanf("%d",&n);
        int rev,p,i,ind,max=0;
        i=1;
        while(i<=n)
        {  p=i;rev=0;
            while (p != 0)
   {
      rev*=10;
      rev+=p%10;
              p= p/10;
   }
   if(rev>max){max=rev;ind=i;}
            i++;
        }
 
   printf("%d\n",ind);
 
 
        }
        
    }
 
