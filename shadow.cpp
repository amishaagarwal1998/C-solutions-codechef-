#include <stdio.h>


long long int sum(long long int a, long long int l, long long int r)
{
    
    int x=l/a;
    int y=r/a;
   int s=0, temp;
    
    
    
    
    if (y<x)
    {
        temp=y;
        y=x;
        x=temp;
        
    }
    
    while(x<=y)
    {
        if(x*a>=l)    
        {
            s=s+(x*a);
            x++;  
        }
        
        else x++;
        
        
    }
    
       
     return s;   
        
    
}

int main(void) {
    
    long long int t,a,b,l,r,sa,sb,ps,lcm,flag=0,temp;
    scanf("%lld",&t);
    
    while(t--)
    {   
        flag=0;
        scanf("%lld %lld %lld %lld",&a,&b,&l,&r);
        sa=sum(a,l,r);
        
        sb=sum(b,l,r);
        
    ps=sa+sb;
    
    
   if(b>a) 
    {
        temp=a;
        a=b;
        b=a;
    }
    
    lcm=a;
    while(1)
    {
        if(lcm%b==0)
        break;
        
        lcm+=a;
    }
    
    
    sa=sum(lcm,l,r) -sa;
   
    
    
    if(sa%2==0)
    flag++;
    
    if(ps%2==0 || ps%3==0)
    flag++;
    
    if(flag==0)
    printf("FAKE LOVE\n");
    
    if(flag==1)
    printf("LOVE\n");
    
    if(flag==2)
    printf("TRUE LOVE\n");
    
    }
    
	// your code goes here
	return 0;
}


