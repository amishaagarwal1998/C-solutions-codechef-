#include <iostream>
using namespace std;

int main() {
    
    int t,n,i,j,max;
    cin>>t;
    while(t--)
    {   max=1;
        cin>>n;
        int A[n],B[n]={1};
        for(i=0;i<n;i++)
        cin>>A[i];
    
        for(i=0;i<n;i++)
        for(j=0;j<i;j++)
        {
            if(A[j]<A[i])
            {
                if(B[j]+1>B[i])
                B[i]=B[j]+1;
            }
        }
        
        for(i=0;i<n;i++)
        {
            if(B[i]>max)
            max=B[i];
        }
        
        cout<<max<<"\n";
    }
	//code
	return 0;
}
