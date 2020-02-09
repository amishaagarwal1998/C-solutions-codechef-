#include <stdio.h>
#include<math.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float h,v,p,s;
        
        scanf("%f %f",&p,&s);
       
        
        h=(p-sqrt(p*p-24*s))/12;
        
    
    
       
        v= (s*h)/2 -( p/6 + sqrt(p*p-24*s)/12)*h*h; 
		     
        printf("%0.2f",v);
    }
    
	// your code goes here
	return 0;
}
