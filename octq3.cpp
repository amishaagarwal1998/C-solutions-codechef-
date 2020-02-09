#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    long long int t,N,k,i,temp,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>N>>k;
        vector <long long int> A;
        for(i=0;i<N;i++)
        {   cin>>temp;
            A.push_back(temp);
        }
        i=0;
        while(k%N>=i)
        {   a=A[i%N];
            b=A[N-(i%N)-1];
            c=a^b;
            if(k/N==0)
            {
                if(i%N>(k%N)-1)
                A[i%N]=a;
                else
                A[i%N]=c;
            }
            if(k/N==1)
            {   if(i%N>(k%N)-1)
                A[i%N]=c;
                else 
                A[i%N]=b;
            }
            if(k/N==2)
            {
                if(i%N>(k%N)-1)
                A[i%N]=b;
                else 
                A[i%N]=a;
            }
            if(k/N==0)
            {   
                if(N-(i%N)-1>(k%N)-1)
                A[N-(i%N)-1]=b;
                else
                A[N-(i%N)-1]=a;
            
            
            }
            
            
            if(k/N==1)
            {
                if(N-(i%N)-1>(k%N)-1)
                A[N-(i%N)-1]=a;
                else
                A[N-(i%N)-1]=c;
            }
            
            if(k/N==2)
            {
                if(N-(i%N)-1>(k%N)-1)
                A[N-(i%N)-1]=c;
                else
                A[N-(i%N)-1]=b;
            }
            
            i++;
        }
        
        
        
        
        for(i=0;i<N;i++)
        cout<<A[i]<<" ";
    
        cout<<"\b"<<"\n";
    }
    
    
	// your code goes here
	return 0;
}

