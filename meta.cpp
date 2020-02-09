#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;

int main() {
    int t,n,m,i,j,p,r,s,flag,len,min;
    cin>>t;
    while(t--)
    { min=INT_MAX;
       
    string s,text;
    map <char,int> hash;
    map <char,int> :: iterator itr;
	cin>>s;
	cin>>text;
	n=s.length();
	m=text.length();
	
	 for(j=0;j<m;j++)
	{
	    hash[text[j]]++;
	}
	
	for(i=0;i<n;i++)
	{   flag=0;
	    itr=hash.find(s[i]);
	     if(itr!=hash.end())
	            flag=1;
	    if(flag==1)
	    {p=m;j=i;
	       while(j<n) 
	     {  itr=hash.find(s[j]);
	     	if(itr!=hash.end())
		 	{
			 hash[s[j]]--;
			 cout<<p<<" ";
			 p--;
	     	}
	     	cout<<"\n";
	     	if(p==0)
	     	{
			 len=j-i+1;
			 if(len<min)
			 {min=len;r=i;cout<<min<<r<<"\n";}
			hash.clear();
			 for(j=0;j<m;j++)
			{
	    	hash[text[j]]++;
			}
			 break;
			 }
	     }
	    }
	    
	}
	
	for(j=r;j<r+min;j++)
	cout<<s[j];
	cout<<"\n";
    //code
	return 0;
    }
}
