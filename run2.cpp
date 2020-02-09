#include <iostream>
using namespace std;

int main() {
    
    
    long long int t,n,c1,c2,i;
    cin>>t;
    while(t--)
    {   string s,r;
        c1=0;c2=0;
        cin>>n;
        cin>>s>>r;
        for(i=0;i<n;i++)
        {if(s[i]=='0')
        c1++;
        if(r[i]=='0')
        c2++;
        }
        
        if(c1==c2)
        cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    
	// your code goes here
	return 0;
}

