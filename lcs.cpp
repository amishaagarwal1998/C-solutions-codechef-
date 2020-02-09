#include <iostream>
#include <string>
using namespace std;
int max(int a,int b)
{
    if(a>=b)
    return a;
    else return b;
}
int main() {
    int t,i,n,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        
        int dp[n+1][m+1];
        dp[0][0]=0;
        for(i=0;i<=n;i++)
        {
            dp[0][i]=0;
        }
        for(j=0;i<=m;j++)
        {
            dp[j][0]=0;
        }
        
        
        for(i=1;i<=n;i++)
        {
        for(j=1;j<=m;j++)
        {   if(s1[i]==s2[j])
            dp[i][j]=1+dp[i-1][j-1];
            else 
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            
        }
        
        }
        for(i=1;i<=n;i++)
        {
		for(j=1;j<=m;j++)
        {cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
    }
        cout<<dp[n][m]<<"\n";
        
    }
	//code
	return 0;
}
