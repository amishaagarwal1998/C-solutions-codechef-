#include<stdio.h>

int main()
{   int t,n,i,d,min;
    scanf("%d",&t);
    
    while(t--)
    {
        
        scanf("%d",&n);
            int a[n],c=0;
            for(i=0;i<n;i++)
            {scanf("%d",&a[i]);
                c+=a[i];
                
            }
            
            min=a[0];
            for(i=1;i<n;i++)
            {
                if(a[i]<min)
                min=a[i];
            }
            
        d=c-n*min;
        printf("%d\n",d);
    }
    return 0;
}
