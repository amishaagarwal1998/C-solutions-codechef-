#include <iostream>
#include<string>

using namespace std;

int main() {
    
    int t,n,r,sum,p,i;
    cin>>t;
    while(t--)
    {   sum=0;
        string s;
        cin>>s;
        n=s.length();
        i=n-1;
        while(s[i]>='0' && s[i]<='9')
            i--;
        
        i++;
        p=i;
        cout<<p<<"\n";
    while(i<n)
    {
        r=(int)(s[i]);
        sum=sum*10 + r;
        i++;
    }
        cout<<sum<<"\n";
        if(sum==p)
        cout<<"1\n";
        else cout<<"0\n";
        
    }
	//code
	return 0;
}
