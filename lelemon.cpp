#include <stdio.h>

int main(void) {
    long long int t,n,m,max,p,i,j,c;
    scanf("%lld",&t);
    while(t--)
    {	c=0;
        scanf("%lld %lld",&n,&m);
    long long int a[m],b[n][100];
        
        for(i=0;i<m;i++)
            scanf("%lld",&a[i]);
            
        for(i=0;i<n;i++)
        {
            scanf("%lld",&b[i][0]);
            for(j=1;j<=b[i][0];j++)
            {
                scanf("%lld",&b[i][j]);
                
            }
            
            
        }
        
        for(i=0;i<m;i++)
        {   max=b[a[i]][1];
        	p=1;
            for(j=1;j<=b[a[i]][0];j++)
            {
                if(b[a[i]][j]>=max)
                {max=b[a[i]][j];p=j;}
            }
            b[a[i]][p]=0;
             c=c+max;
             printf("%lld\n",c);
        	
		}
        
        printf("%lld",c);
        
    }
        
        
            
            
        
        
        
    
    
    
	// your code goes here
	return 0;
}


