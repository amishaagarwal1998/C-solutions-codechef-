#include <iostream>
#include<limits.h>
#include <vector>
using namespace std;

int main() {
    long long int t,n,i,j,min=0,sum=0,temp,index1,index2,c;
    vector <long long int> :: iterator itr,ptr;
    cin>>t;
    while(t--)
    {   vector <long long int> A;
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            A.push_back(temp);
        }
        
        while(n>2)
        {	min=INT_MAX;
            for(j=0;j<n;j++)
            {
                c=A[j]+A[(j+1)%n];
                
                if(c<min)
                {
                    min=c;
                    index1=j;
                    index2=(j+1)%n;
                }
                
            }
            sum+=min;
            itr=A.begin();
            
            
            if(index2==0)
            {
			A.erase(itr);
			A.insert(itr,min);
            A.erase(itr+index1);
        	
		}
            
            
            else {
			
            A.erase(itr+index1);
            itr+=index1;
            A.insert(itr,min);
            itr=A.begin();
            A.erase(itr+index2);
			}
    
            n=A.size();
    		for(i=0;i<n;i++)
			cout<<A[i]<<" ";
			cout<<"\n";        
        }
       
        c=A[0]+A[1];
        
        sum=sum+A[0]+A[1];
        cout<<sum<<"\n";
    }
	// your code goes here
	return 0;
}

