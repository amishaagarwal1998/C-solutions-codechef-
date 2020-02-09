#include<iostream>
using namespace std;
int dp[20][3]={-1};
int min(int a,int b)
{
	if(a<=b)
	return a;
	else return b;
}
int colour(int index,int last,int arr[][3],int n)
{
	if(index==n)
	return 0;
	int ans=10e5;
	int &st=dp[index][last];
	if(st!=-1)
	return st;
	for(int j=0;j<3;j++)
	{
		if(j==last)
		continue;
		
	ans=min(ans,arr[index][j]+colour(index+1,j,arr,n));
	}
	
	return st=ans;
}
int main()
{
	int i,n;
	cin>>n;
	int arr[n][3];
	for(i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
	}
cout<<colour(0,0,arr,n)<<"\n";	
	
}
