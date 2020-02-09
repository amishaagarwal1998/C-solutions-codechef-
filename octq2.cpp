#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t,n,m,q,i,a,b,c,e1,e2;
    long long int R[1000000],C[1000000];
    cin>>t;
    while(t--)
    {   
        cin>>n>>m>>q;
        
        memset(R,0,sizeof(R));
        memset(C,0,sizeof(C));
        c=0;
        e1=0;
        e2=0;
        while(q--)
        {
            cin>>a>>b;
            
            R[a-1]+=1;
            
            C[b-1]+=1;
            
        }
        
        for(i=0;i<n;i++)
        if(R[i]%2==0)
        e1++;
    
        for(i=0;i<m;i++)
        if(C[i]%2==0)
        e2++;
        
        
        c=(n*m)-(e1*e2);
        e1=n-e1;
        e2=m-e2;
        
        c=c-(e1*e2);
        cout<<c<<"\n";
    }
    
	// your code goes here
	return 0;
}

