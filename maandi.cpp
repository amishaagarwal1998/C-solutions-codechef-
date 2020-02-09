#include <stdio.h>
#include<math.h>
int main(void) {
    int t,i,j,s,k,r,c,l;
    scanf("%d",&t);
    long long int n;
    while(t--)
    {
        scanf("%lld",&n);
        k=0;
        for(i=1;i<=sqrt(n);i++)
        {  
            
            if(n%i==0)
           {    j=i;c=0;s=0,l=0;
                while(j>0)    
                    {
                       r=j%10;
                       s++;
                       if(r==4 || r==7)
                       {         }
                        else
						{c++;}
                        
                        j=j/10;
                    }
                    if(c<s)
                    k++;
                    c=0;s=0;
                     j=n/i;
                            
                        while(j>0)    
                    {
                       r=j%10;
                       s++;
                       if(r==4 || r==7)
                       {
					   }
                        else{
						c++;}
                        
                        j/=10;
                    }
                    if(c<s)
                       k++;
                }
           
             
           }
                
                
          printf("%d\n",k);  
            
            
        }
        
       
    
    
    
	// your code goes here
	return 0;
}


