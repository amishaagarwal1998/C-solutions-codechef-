#include <stdio.h>

int main(void) {
    
    int t,c=0,p;
    scanf("%d",&t);
    long long int l,r;

	
    while(t--)
    {	c=0;
        scanf("%lld %lld",&l,&r);
        
		p=l%10;
		if(p>3 && p<=9)
		l=l+(9-p);
		else if(p==0 || p==1)
		{	
			l=l+(2-p);
		}
		  
		
        while(l<=r)
        {	
            if(l%10==2)
            {
			l++;c++;}
			else l++;
            if(l<=r)
            
			if(l%10==3)
            {l+=6;c++;}
        
            if(l<=r)
            if(l%10==9)
            {
                l+=3;
                c++;
            }
            
            
        }
       printf("%d\n",c); 
        
    }
    
	// your code goes here
	return 0;
}


