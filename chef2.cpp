#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,N,Y,I,i;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>m;
        cin>>s;
        N=0;Y=0;I=0;
        for(i=0;i<m;i++)
        {
        if(s[i]=='Y')
        Y++;
        if(s[i]=='N')
        N++;
        if(s[i]=='I')
        I++;
        }
        if(Y==0 && N>=0 && I>0)
        cout<<"INDIAN\n";
        else if(Y==0 && I==0)
        cout<<"NOT SURE\n";
        else cout<<"NOT INDIAN\n";
        
    }
    
	// your code goes here
	return 0;
}

