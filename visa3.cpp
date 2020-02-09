#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n,c,i,temp,l,r,t=0,x,sum,j;
    cin>>n>>c;
    vector <long long int> A(n);
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        
        
    }
    
    for(i=0;i<c;i++)
    {   
        cin>>temp;
        if(temp==1)
        {cin>>x; t=(t+(n-x))%n;}
        else if(temp==2)
        {cin>>x;t=((t+x)%n);}
        if(temp==3)
        {   sum=0;
            cin>>l>>r;
            for(j=l;j<=r;j++)
                {
				sum+=A[(t+j)%n];}
             cout<<sum<<"\n";   
        }
    }
    
    return 0;
}
