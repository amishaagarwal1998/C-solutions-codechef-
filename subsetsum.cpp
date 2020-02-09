#include <iostream>
#include<vector>
using namespace std;

int combo(vector <int> &A,vector <int> &tempo,int s,int sum,int i,int flag)
{
    
    for(int k=0;k<tempo.size();k++)
    s+=tempo[k];
    
    if(s>sum)
    return flag;
    
    if(s==sum)    
     {printf("YES");   
        flag=1;
     }
    else{
        
            while( i<A.size() && flag==0)
            {
                
                tempo.push_back(A[i]);
                flag=combo(A,tempo,0,sum-A[i],i+1,flag);
                i++;
                tempo.pop_back();
                
                
            }
        		return flag;
		}
}

int main() {
    
    int t,n,temp,i,sum=0,flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        
        vector <int> A;
        vector <int> tempo;
        for(i=0;i<n;i++)
        {
            scanf("%d",&temp);
            A.push_back(temp);
            sum+=temp;
        }
        
        flag=combo(A,tempo,0,sum,0,0);
   
   		if(flag==1)
   			cout<<"YES\n";
   			
   		if(flag==0)
		   cout<<"NO\n";
    }
    
    
	//code
	return 0;
}
