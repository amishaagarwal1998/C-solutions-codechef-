#include <stdio.h>

int min(int a,int b)
{
	if(a<=b)
	return a;
	
	else b;
}


int main(void) {
    
    int t,h,m,s,q,r,d;
    scanf("%d",&t);
    while(t--)
    {   s=0;
        scanf("%d %d",&h,&m);
        
        if(h>9 && m>9)
        s+=10;
        
        else {
        
            s=min(h,m);
            
        }
        
        if(h%11!=0)
        q=min(h/11,m);
        
        else q=min(h/11,m)-1;
        
        s+=q;
        if(m%11!=0)
        r=min(m/11,h);
        
        else r=min(m/11,h)-1;
        s+=r;
        
        
        if(h%11!=0 && h/11 <= m/11)
        d=(h/11);
        
        else if(m/11!=0 && m/11 < h/11)
        d=(m/11);
        
        else if(h%11==0 && h/11 <= m/11)
        d=(h/11)-1;
        
        else if(m/11==0 && m/11 < h/11)
        d=(m/11)-1;
        
        s+=d;
        printf("%d\n",s);
        
    }
    
    
	// your code goes here
	return 0;
}


