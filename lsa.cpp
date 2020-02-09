#include<iostream>
using namespace std;
int main()
{
    
    int n,i,x,sum=0,p,max,index=0,j;
    cin>>n;
    int A[n],B[n];
    cin>>x;
    for(i=0;i<n;i++)
    {cin>>A[i];
    A[i]-=x;
    }
    
    for(i=0;i<n;i++)
    {   sum=0;B[0]=A[0];
        
        for(j=i;j<n;j++)
        {
            B[i]=B[i-1]+A[i];
            
        }
        
        for(j=n-1;j>=0;j--)
        {
            if(B[j]>=0)
            {
                index=j;
                break;
            }
        }
        if((index-i+1)>max)
        max=(index-i+1);
        
    }
    
    cout<<max<<"\n";
    return 0;
}
