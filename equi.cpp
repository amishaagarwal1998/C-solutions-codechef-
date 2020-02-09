#include <iostream>
using namespace std;

int main() {
    int t,n,i,sum,c;
    cin>>t;
    while(t--)
    {   sum=0;
        c=0;
        i=0;
        cin>>n;
        if(n==1)
        cout<<n<<"\n";
        else {
        int A[n];
        for(i=0;i<n;i++)
        {cin>>A[i];sum+=A[i];}
        
        for(i=0;i<n;i++)
        {c+=A[i];
            if((sum-A[i])%2==0)
            {
                
                if((c-A[i])==((sum-A[i])/2))
                {cout<<i+1<<"\n";
                break;}
            }
        }
            
            if(i==n)
            cout<<"-1\n";
        }
        
    }
	//code
	return 0;
}
