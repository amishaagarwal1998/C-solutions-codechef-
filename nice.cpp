#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    long long int t,n,i=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        long long int a[n];
        
        for(i=0;i<n;i++)
        cin>>a[i];
        
        sort(a,a+n);
        
        if(a[0]+1!=a[1])
        cout<<a[0]<<"\n";
        
        else if(a[n-1]-1!=a[n-2])
		        cout<<a[n-1]<<"\n";
        else 
        {
		for(i=1;i<n-1;i++)
        if(a[i]+1!=a[i+1])
        	{
			cout<<a[i]<<"\n";break;
        	}
    	}
	}
	// your code goes here
	return 0;
}

