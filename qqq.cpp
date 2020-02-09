#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    
    long long int n,q,l,r,k,c,flag=0,i,s;
    cin>>n;
    vector <long long int> V(n);
    for(i=0;i<n;i++)
    {
	cin>>V[i];}
    cin>>q;
    while(q--)
    {	flag=0;
        c=0;
        cin>>l>>r>>k;
        flag=0;
        //long long int *i1=V.begin();
    
        //i1 = min_element(i1 + l-1, i1 + r-1);
       	//s=*max_element(V.begin()+l-1, V.begin()+r-1);
       	
       	s=1;
        while(s<=20)
        {	c=0;
			for(i=l-1;i<=r-1 && c<k;i++)
        	{if(V[i]%2==1)
           	 {c++;}
            V[i]=V[i]/2;
            
        	}
         		s++;
        
        	if(c>=k)
        	{cout<<"YES\n";flag=1;break;}
        }
        
        if(flag==0)
        cout<<"NO\n";
    }
    
	// your code goes here
	return 0;
}

