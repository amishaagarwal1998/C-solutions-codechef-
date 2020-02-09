#include <stdio.h>

int main(void) {
    
    
    long long int n,i,j,flag=1,temp;
    scanf("%lld",&n);
    long long int A[n];
    
    for(i=0;i<n-2;i++)
    for(j=0;j<n-2-i;j++)
    {
        if(A[j]>A[j+2])
        {temp=A[j+2];
        A[j+2]=A[j];
        A[j]=temp;
        }
        
        
    }
    
    for(i=0;i<n-1;i++)
    {
        
        if(A[i]>A[i+1])
    {flag=0;break;}
    
    }
    if(flag==0)
    printf("%lld\n",i);
    if(flag==1)
    printf("OK\n");
	// your code goes here
	return 0;
}


