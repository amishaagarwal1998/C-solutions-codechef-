#include <stdio.h>

int main(void) {
    int r,c,i,j,k,p,flag;
    scanf("%d %d",&r,&c);
    long long int a[r][c],min,max;
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
        scanf("%lld",&a[i][j]);
        
    }
    
    
    for(i=0;i<r;i++)
    
    {   flag=0;
        min=a[i][0];
        p=0;
        for(j=1;j<c;j++)
        if(a[i][j]<min)
       {
		 min=a[i][j];
		 p=j;
 		}
        max=a[0][p];
        for(k=1;k<r;k++)
        if(a[k][p]>=max)
        max=a[k][p];
        
        if(max==min)
        {
		printf("%lld\n",max);
        flag=1;break;}
    }
    if(flag==0)
    printf("GUESS\n");
	// your code goes here
	return 0;
}


