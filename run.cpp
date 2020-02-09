#include <math.h>
#include <iostream>
using namespace std;

int main() {
    
    long long int t,x,y,p,xf,r,c;
    cin>>t;
    while(t--)
    {
        x=0;
        y=0;
        p=1;
        c=0;
        cin>>xf;
        
        while(x!=xf)
        {
                x=p;
                y=y+(p*p);
                
                p=sqrt(y)+1;
                
                c++;  
                
                
        }
        
        cout<<c<<"\n";
    }
    
	// your code goes here
	return 0;
}

