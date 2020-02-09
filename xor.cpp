#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int t,n,k,i,j,temp,c,max;
    cin>>t;
    while(t--)
    {  vector <int> A;
        c=0,max=0;
        cin>>n>>k;
        
        for(i=0;i<n;i++)
        {
            cin>>temp;
            A.push_back(temp);
            
        }
        
        
       for(i=0;i<k;i++)
       c=c^A[i];
       cout<<c<<"  ";
       max=c;
       j=0;
       for(;i<n;i++)
       {
           c=c^A[j];
           c=c^A[i];
           cout<<c<<"  ";
           if(c>max)
           max=c;
           j++;
           
       }
       cout<<"\n";
       
      
      cout<<max<<"\n";  
        
    }
    
	// your code goes here
	return 0;
}

