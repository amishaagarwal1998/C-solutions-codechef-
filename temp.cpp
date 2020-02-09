#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t,n,i,j,r,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        string temp;
        map <int,string> S;
        map <int,string> :: iterator itr,ptr;
        
            for(i=0;i<n;i++)
            {cin>>temp;
            r=temp.length();
            S.insert(make_pair(r,temp));
            }
        j=0;
        itr=S.begin();
        if(n==1)
        cout<<itr->second<<"\n";
        else 
        {
        ptr=itr;
        ptr++;
        while(j<itr->first)
        {ptr=itr;ptr++;
            for(;ptr!=S.end();ptr++)
            {
                if(itr->second[j]==ptr->second[j])
                flag=1;
                else {flag=0;break;}
            }
            if(flag==0)
            break;
            j++;
            
            
        }
        
        ptr=S.begin();
        if(j==0)
        cout<<"-1";
        else if(ptr->first==1 && j!=0)
        cout<<itr->second[0];
        
        else 
        {for(i=0;i<j;i++)
        cout<<itr->second[i];
        }
        cout<<"\n";
        }
            
        }
        //code
	return 0;
}
