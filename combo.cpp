#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void combo(vector <int> &A, vector <int> &tempo,int i,int b )
{   
		
	
		
		if(b<0)
    	{
		
		return;
		}
    else if(b==0)
    {   int t=tempo.size();
       for(int j=0;j<t;j++)
       cout<<tempo[j]<<" ";
        vector <int> tempo;
        cout<<"\n";
    }
    
    else {
                while (i < A.size() && b- A[i] >= 0) 
    { 
  
        // Till every element in the array starting 
        // from i which can contribute to the sum 
        tempo.push_back(A[i]); // add them to list 
  
        // recur for next numbers 
        combo(A,tempo,i+1,b- A[i]); 
        i++; 
  
        // remove number from list (backtracking) 
        tempo.pop_back(); 
    } 
        }
    
        
    
}
int main() {
    int t,n,b,i,temp;
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
    
    cin>>b;
    sort(A.begin(),A.end());
    vector <int> tempo;
    
    
    combo(A,tempo,0,b);
    
    }
    
	//code
	return 0;
}
