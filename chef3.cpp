#include <iostream>
using namespace std;

int main() {
    int t,i,w1,w2,w3,s,ans;
    cin>>t;
    while(t--)
    {
        cin>>s>>w1>>w2>>w3;
        i=w1+w2+w3;
        if(s>=i)
        ans=1;
        else if(s>=w1+w2 || s>=w2+w3)
        ans=2;
        else ans=3;
        cout<<ans<<"\n";
        
    }
	// your code goes here
	return 0;
}

