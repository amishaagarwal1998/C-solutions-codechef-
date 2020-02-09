#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	
	long long int i,temp,sum,j;
	vector <long long int> C,P;
	
	while(1)
	{
		sum=0;
		cin>>i;
		if(i==0)
		break;
		
		for(j=1;j<=i;j++)
		{	cin>>temp;
			C.push_back(temp);
		}
		sort(C.begin(),C.end(),greater<long long int>());
		for(j=1;j<=i;j++)
		{	cin>>temp;
			P.push_back(temp);
		}
		sort(P.begin(),P.end());
		
		for(j=0;j<i;j++)
		sum=sum+(C[j]*P[j]);
		cout<<sum<<"\n";
		
	}
	
	
	
	// your code here

	return 0;
}
