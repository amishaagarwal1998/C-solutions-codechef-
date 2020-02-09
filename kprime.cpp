#include <stdio.h>
#include <math.h>

int main(void) {
    
    int t,a,b,k,i,j,l,c=0,r,flag,m;
    scanf("%d",&t);
    while(t--)
    {		r=0;
        scanf("%d %d %d",&a,&b,&k);
        
      for(i=a;i<=b;i++)
    {   
        c=0;
        for(j=1;j<=sqrt(i);j++)
        {flag=1;
            
            if(i%j==0)
            {
			
                for(l=2;l<=sqrt(j);l++)
                {
                    if(j%l==0)
                    {flag=0;break;}
                }
                
                if(flag==1 && j!=1)
                c++;
                
                m=i/j;flag=1;
                if(m!=j)
                {
				
                for(l=2;l<=sqrt(m);l++)
                {
                    if(m%l==0)
                    {flag=0;break;}
                }
           		 
                
                if(flag==1)
                c++;
                
            }
            }
        
            
            
        }
        if(c==k)
        r++;
        
    }
    printf("%d\n",r);
    }
	// your code goes here
	return 0;
}


