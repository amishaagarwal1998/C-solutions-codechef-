#include <iostream>
using namespace std;

int islucky(int n,long long int &counter)
{   
   
    if(counter>n)
        return 1;
    if(n%counter==0)
    return 0;
    else {
            n=(n-(n/counter));
            
            counter++;
            return islucky(n,counter);
        
        }
    
}

int main() {
    long long int n,t,c,counter;
    cin>>t;
    while(t--)
    {
        counter=2;
        cin>>n;
        c=islucky(n,counter);
        
        cout<<c<<"\n";
        
    }
    
    
	//code
	return 0;
}
