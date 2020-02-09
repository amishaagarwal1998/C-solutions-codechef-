#include <iostream>
using namespace std;

int main() {
    
    long long int t,n,k,d,s;
    cin>>t;
    while(t--)
    {
        
        cin>>n>>k;
        if(k%n==0)
        cout<<"0\n";
        
        else {
            k=(k%n);
            
          if(k>n-k)      
             {
             	s=2*(n-k);
			 }
           else if(k<n-k)
		   {
		   
		   		s=2*(k);
		   }
		   else if(k==n-k)
		   {
		   	s=2*(k)-1;
		   }
		   
            
      }
        
        cout<<s<<"\n";}
    
	// your code goes here
	return 0;
}

