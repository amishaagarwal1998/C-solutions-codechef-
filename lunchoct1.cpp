#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    long long int t,n,i,temp,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <int> A;
        for(i=0;i<n;i++)
        {cin>>temp;
        A.push_back(temp);
        }
        
        sort(A.begin(),A.end());
        
        if(A[n/4]!=A[(n/4)-1])
        {
		x=A[(n/4)];}
        else {cout<<A[(n/4)-1]<<A[n/4]<<"-1\n"; continue;}
        
        if(A[n/2]!=A[(n/2)-1])
        y=A[(n/2)];
        else {cout<<"-1\n"; continue;}
        
        if(A[3*n/4]!=A[(3*n/4)-1])
        z=A[(3*n/4)];
        else {cout<<"-1\n"; continue;}
        
        cout<<x<<" "<<y<<" "<<z<<"\n";
    }
	// your code goes here
	return 0;
}

