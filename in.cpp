#include <iostream>
#include<vector>
using namespace std;

void combo(vector <int> &A,vector <int> &tempo,int i,vector <vector <int> > sol)

{
        sol.push_back(tempo);
        for(int j=0;j<tempo.size();j++)
        cout<<tempo[j]<<" ";
    
    	cout<<"\n";
    while( i<A.size())
            {
                
                tempo.push_back(A[i]);
                combo(A,tempo,i+1,sol);
                i++;
                tempo.pop_back();
                
                
            }
    
    
}

int main(void) 
{
    
    vector <int> tempo;
    vector <int> A;
    vector <vector <int> > sol;
    int temp,n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
    	cin>>temp;
    	A.push_back(temp);
	}
    combo(A,tempo,0,sol);
    
    
    
}

