#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int t,n,m,i,temp,c=0,min;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        vector <int> A;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            A.push_back(temp);
            
        }
        cin>>m;
        sort(A.begin(),A.end()); 
        min=A[m-1]-A[0];
       for(i=0;i<=n-m+1;i++)
		cout<<A[i]<<" ";
		
		cout<<"\n";
		for(i=0;i<=n-m+1;i++)
        {
            c=A[i+m-1]-A[i];
            cout<<c<<" ";
            if(c<min)
            min=c;
        }
        cout<<"\n"<<min<<"\n";
        
    }
	//code
	return 0;
}
