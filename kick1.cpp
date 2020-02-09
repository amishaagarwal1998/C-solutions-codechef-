#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t,i;
    long long int d,s,c=0,e=0,C=0,E=0,a,b;
    cin>>t;
    while(t--)
    {   C=0;E=0;
        cin>>d>>s;
        for(i=1;i<=s;i++)
        {cin>>c>>e;
        C+=c;E+=e;
        }
        for(i=1;i<=d;i++)
        {cin>>a>>b;
        if(a>C || b>E)
        cout<<"N";
        else if(a+b>C+E)
        cout<<"N";
        else cout<<"Y";
        }
        cout<<"\n";
    }
    
    
    
}
