#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    
    
    long long int t,n,temp,c,h,k=0,i;
    cin>>t;
    while(t--)
    {
        c=0;h=0;k=0;
        cin>>n;
        vector <long long int> A;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            A.push_back(temp);
        }
        
        
        while(n>0)
        {
            sort(A.begin(),A.end());
            temp=A[n-1];
            
            if(A[n-2]==temp)
            {   i=n-1;
                while(A[i]==temp)
                {A.pop_back();n--;i--;}
                k++;
            }
            
            
            else {
                    if(k%2==0)
                    {c+=A[n-1];A[n-1]/=2;}
                    
                    else if(k%2!=0)
						{
                            h+=A[n-1];A[n-1]/=2;
                        }
                    if(A[n-1]==0)
                    {
                        A.pop_back();n--;
                    }
                 k++;
				 }
            
        }
        
        if(c>h)
        cout<<"Cherry "<<c-h<<"\n";
        
        else{
            
            cout<<"Hazardous\n";
            }
    }
    
	// your code goes here
	return 0;
}

