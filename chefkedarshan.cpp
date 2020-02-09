#include <iostream>
#include <vector>
#include <string> 
#include<algorithm>
using namespace std;

int main() {
    
    
    
    int t,n,c,i;
    cin>>t;
    
    while(t--)
    {
       vector <string> A;
    vector <string> :: iterator itr;
        string S;
        cin>>S;
        n=S.length();
        
		 c=0;
		
        
        
        for(i=0;i<n-1;i++)
        {   
            if((S[i]>='A' && S[i]<='Z') && (S[i+1]>='A' && S[i+1]<='Z'))
           {    string temp;
               temp.push_back(S[i]);
            temp.push_back(S[i+1]);
            
            itr=std::find(A.begin(),A.end(),temp);
            if(itr==A.end())
            {c++;A.push_back(temp);}
             
           }
            
        }
    
        cout<<c<<"\n";
		    
		
    }
    
	// your code goes here
	return 0;
}

