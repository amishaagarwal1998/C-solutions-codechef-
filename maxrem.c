#include <stdio.h>

int main(void) {
    
    int n,a[n],i,max,smax;
    
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    max=a[0];
    smax=a[0];
    for(i=0;i<n;i++)
    {   if(a[i]>max)
            {smax=max;
            max=a[i];}
    }
    printf("%d\n",max);
    printf("%d\n",smax);
    
	// your code goes here
	return 0;
}


