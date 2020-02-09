#include <stdio.h>
#include<math.h>


int recur(int start,int l,int x)
{	
    if(x==0)
    { 
    
	return 1;
    
	}
    
   else 
    {
       
			int sum=0;
			for(int i=start;pow(i,l)<=x;i++)
			{
				sum+=recur(i+1,l,x-pow(i,l));
				
			}        
       return sum;
        
        
	}
}

int main() {
    
    int t,x,n,sum,i;
    scanf("%d",&t);
    while(t--)
    {   sum=0;
    i=1;
        
        
        
        
        printf("%d %d\n",n,x);
        
		sum+=recur(i,n,x);
    	
        printf("%d\n",sum);
        
    }
    
    
	//code
	return 0;
}
