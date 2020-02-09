#include <iostream>
#include<math.h>
using namespace std;

int main() {
    
    long long int t,n,i,c;
    cin>>t;
    while(t--)
    {
        c=0,i=1;
        cin>>n;
        while(n/(pow(5,i))>0)
        {
            c+=(n/(pow(5,i)));
            i++;
            
            
        }
        
        cout<<c<<"\n";
        
    }
    
    
    
	// your code goes here
	return 0;
}

