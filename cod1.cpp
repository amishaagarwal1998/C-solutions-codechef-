#include <cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    long long int t,l,r,i,s,p,j;
    cin>>t;
    
    while(t--)
        
    {
        
        cin>>l>>r;
        long long int A[r-l+1];
        
        memset(A, 1, sizeof A); 
        for(j=2;j<=r;j++)
        {
            p=l%j;
            i=l+p;
            while(i<=r)
            { A[i-l]+=1;i+=j;}
            
        }
        s=A[0];
        for(i=1;i<r-l+1;i++)
        s=s^A[i];
        
        if(s%2==0)
            cout<<"Even\n";
        else cout<<"Odd\n";
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

