#include <iostream>
#include<math.h>
using namespace std;

int main() {
    
    int n,i,j,a,b,p,c;
    cin>>n;
    while(n--)
    {
        
        cin>>i>>j;
             
        	
        	if(i==2*j || j==2*i)
        	{
			p=1;cout<<p<<"\n";}
        	
        	else if(i==1)
        	{  a=log2(j);
        		cout<<a<<"\n";
			}
        	else if(j==1)
        	{
        		a=log2(i);
        		cout<<a<<"\n";
        		
			}
        else {
	
		if(i==j-1)
		{
		c=i/2;c=log2(c);}
		if(j==i-1)
		{
		c=j/2;c=log2(c);}
		
		
        a=log2(i);
        b=log2(j);
        cout<<(i+j-(2*c))<<"\n";
    		}
        
    }
	// your code goes here
	return 0;
}

