#include <iostream>
using namespace std;

int main() {
    long long int t,n,i,j,cnt0,cnt1,r=0;
    cin>>t;
    while(t--)
    {   r=0;
        cnt0=0;
        cnt1=0;
        string s;
        cin>>s;
        n=s.length();
        
            
        for(i=0;i<n;i++)
       {	cnt0=0;cnt1=0;
		 for(j=i;j<n;j++)
        {
            if(s[j]=='0')
            cnt0++;
            else cnt1++;
            
            if(cnt0==(cnt1*cnt1))
            r++;
            
            
        }
    }
        
        cout<<r<<"\n";
        
    }
    
	// your code goes here
	return 0;
}

