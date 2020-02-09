#include <stdio.h>

int main(void) {
    int t,n,i,c,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int x[n],l[n],f[n];
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&x[i],&l[i],&f[i]);
        }
        
        c=x[0]+l[0];
        for(i=1;i<n;i++)
        {
            if(c<=x[i])
            {   c=x[i]+l[i];}
            else{
                    r=x[i]+f[i];
                    if(c>r)
                    {
                        r=r+f[i];
                    }
                    else {
                        if(c<=r)
                            c=r+l[i];                        
                    }
            }
        }
        printf("%d\n",c);
    }
    
	// your code goes here
	return 0;
}


