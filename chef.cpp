#include <stdio.h>

int main(void) {
    
    int t,x,y,k,i,n,flag;
    scanf("%d",&t);
    while(t--)
    {   flag=0;
        scanf("%d %d %d %d",&x,&y,&k,&n);
        int a[n][2];
        
        for(i=0;i<n;i++)
        {scanf("%d",&a[i][0]);
        scanf("%d",&a[i][1]);
            
            if(a[i][0]>=x-y && k>=a[i][1] && flag==0)
                    {printf("LuckyChef\n");flag=1;}
            
        }
        if(flag==0)
        printf("UnluckyChef\n");
        
    }
    
	// your code goes here
	return 0;
}


