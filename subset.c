#include <stdio.h>
#include<math.h>
int main(void) {
    
    int i,j,t,n,m,c,flag=0,sum=0;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d %d",&n,&m);
        int a[n];
        
        for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
        }
        for(c=0;c<pow(2,n);c++)
        {sum=0;
            for(j=0;j<n;j++)
            {
                if(c&(1<<j) && sum<=m)
                sum=sum+a[j];
                printf("%d",sum);
            }
            if(sum==m)
            {  printf("Yes\n");
            flag=1;break;
            }
        }
        if(flag==0)
        {printf("No");}
        
    }
    
	// your code goes here
	return 0;
}


