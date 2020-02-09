#include <iostream>
using namespace std;
long long int gcd(long long int A,long long int B)
{
    
    if(B==0)
    return A;
    
    return gcd(B,A%B);
    
}
int main() {
    
    long long int B,res=0,i,n,G,t;
    cin>>t;
    while(t--)
    {
	res=0;
    string A;
    cin>>A;
    cin>>B;
    n=A.length();
    for(i=0;i<n;i++)
    res=(res*10+A[i])%B;
    
    G=gcd(B,res);
    cout<<G<<"\n";
	}
	// your code goes here
	return 0;
}

