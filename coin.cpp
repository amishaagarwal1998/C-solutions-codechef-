#include <iostream>
#include<math.h>
using namespace std;

int main(void) {
    
    
    
    long long int t,c,x,p=1,s=0;
    cin>>t;
    while(t--)
    {	s=0;p=1;
        cin>>c>>x;
        if(x==1)
        cout<<c<<"\n";
        
        else{
            
            while(p<c)
            {
            	p=p*x;
			}
			
            if(p>c)
            {
            	p=p/x;
			}
            
		
			s=c-p;
			
            s+=1;
            cout<<s<<"\n";
        }
        
        
    }
    
	// your code goes here
	return 0;
}


