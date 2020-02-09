#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int A,long long int B)
{
    if(B==0)
    return A;
    
    return gcd(B,A%B);
    
}


int main(void) {
    
    long long int t,n,q,l,r,temp,i,j,G;
    cin>>t;
    vector <long long int> A;
    
    while(t--)
    {
        cin>>n>>q;
     for(i=1;i<=n;i++)
        {cin>>temp;A.push_back(temp);}

        while(q--)
        {cin>>l>>r;
        if(l>1)
        G=A[0];
        else G=A[r];
        for(i=0;i<n;i++)
        {
            
            
            if((i<l-1 && i>0) || (i>r-1 && i<n))
            {
               G= gcd(A[i],G);
               if(G==1)
               break;
                
            }
        }
        
        cout<<G<<"\n";
        }
        A.clear();
    }
	// your code goes here
	return 0;
}


