#include <stdio.h>

int main(void) {
    int n,q;
    
    int b[3],c=0,i,j;
    scanf("%d %d",&n,&q);
    int a[100000]={0};
    for(i=1;i<=q;i++)
    {c=0;
        scanf("%d %d %d",&b[0],&b[1],&b[2]);
        if(b[0]==0)
        {
            for(j=b[1];j<=b[2];j++)
            a[j]++;
       }
       
       if(b[0]==1)
        {
            for(j=b[1];j<=b[2];j++)
            if(a[j]%2==1)
            c++;\
            
            printf("%d\n",c);
        }
    }
    
    
	// your code goes here
	return 0;
}


