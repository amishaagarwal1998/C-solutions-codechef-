#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,j,flag,i,len;
	cin>>n>>m;
	vector <string> input1;
	string input2,yell,temp;
	
	for(i=0;i<n;i++)
	{
		cin>>temp;
		input1.push_back(temp);
		
	}
	
	cin>>input2;
	len=input2.length();
	cout<<len<<" "<<(n*m)<<"\n";
	if(len>=n*m)
	{
	
	for(i=0;i+n*m-1<len;i++)
	{	
		string dest=input2.substr(i,i+(n*m)-2);	
		cout<<dest<<"\n";
		j=0;
		while(j<n*m)
		{
			string tempo=dest.substr(j,j+m-2);
			if(find(input1.begin(),input1.end(),tempo)!=input1.end())
			flag=1;
			else flag=0;
			
			if(flag==1)
			{ j+=m;}
			else break;
		}
		if(flag==1)
		{cout<<i<<"\n";break;
		}
		
	}	}
	
}
