#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t,xf,i;
    cin>>t;
    vector<int> dp;
    dp.push_back(0);
    dp.push_back(1);
    dp.push_back(2);
    dp.push_back(3);
    
    for(i=4;i<1000000000;i++)
    {
        if(i%2==0)
        {
            dp.push_back(dp[(i/3)]+3);
        }
        else
        dp.push_back(dp[(i/2)]+2);
    }
    
    while(t--)
    {
        
        cin>>xf;
        
       
        cout<<dp[xf]<<"\n";        
             
        
        
    }
    
	// your code goes here
	return 0;
}

