#include <stdio.h>
#include<math.h>
int prime(int c)
{     int j;
    for(j=2;j<sqrt(c);j++)
    {
        if(c%j==0)
       { return 0;}
        
        
    }
    
    return 129;
    
}

int main(void) {
    
    int t,x,y,c,f,i;
    
    scanf("%d",&t);
    while(t--)
    {	f=2;
        scanf("%d %d",&x,&y);
        c=x+y;
        printf("%d\n",c);
        for(i=1;i<=20;i++)
        {   
          f=prime(c+i);
          printf("%d %d\n",i,f);
            if(f!=0)
            {printf("%d\n",i);break;}

        }
        
    }
    
	// your code goes here
	return 0;
}


