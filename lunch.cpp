#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    
       int t;
    long long int n,q,l,r,y,s,p,d,max,temp,i,x;
    cin>>t;
    while(t--)
    {   vector <long long int> B;
        temp=0;
        s=0;
        
        cin>>n>>q;
        
        while(q--)
        {
             cin>>i;
             if(i==1)
            {
                cin>>y;
                x=y+s;
                B.push_back(x);
            }
            
            else { max=0;    
                    cin>>p>>d;
                    l=p+s;
                    r=d+s;
                    
                    for(i=r;i>=l;i--)
                        {
                            if(find(B.begin(),B.end(),i)==B.end())
                            {   max=i;
                                break;
                            }
                        }
                    
                     temp+=max;
                    s=temp%n;
                    cout<<max<<"\n";
                    
                    }
                    
            
        }
        
    }
    
	// your code goes here
	return 0;
}

