#include <iostream>
using namespace std;

int main() {
    
    int t,n,i,c;
    cin>>t;
    while(t--)
    {   
        c=0;
        cin>>n;
        while(n>0)
        {
            i=1&n;
            if(i==1)
            {
                c++;
                
            }
            
            if(c>1)
            {break;}
            n=n>>1;
        }
        cout<<c<<"\n";
        if(c==1)
        cout<<"YES\n";
        
        else cout<<"NO\n";
    }
	//code
	return 0;
}
