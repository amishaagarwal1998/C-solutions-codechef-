#include <iostream>
#include <map>
#include <algorithm>
#include<iterator>
using namespace std;
int main() {
    int t,n,i,temp;
    map <int,int> hash;
    map <int,int> :: iterator itr;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        for(i=0;i<(2*n)+2;i++)
        {
            cin>>temp;
            hash[temp]++;
        }
        for(itr=hash.begin();itr!=hash.end();itr++)
        cout<<itr->first<<" "<<itr->second<<"\n";
        for(itr=hash.begin();itr!=hash.end();itr++)
            if(itr->second==1)
                cout<<itr->first<<" ";
        
        cout<<"\n";
        hash.clear();
    }
	//code
	return 0;
}
