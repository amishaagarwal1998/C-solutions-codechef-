#include <bits/stdc++.h>
#include <boost/lexical_cast.hpp>
using namespace std;

string encryptString(string s, int k) {
    
    long long int c=0,v=0,n,i,p;
    n=s.length();
    
    string sol,temp;
    for(i=0;i<k;i++)
    {    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            v++;
        else c++;
    
    }
    p=c*v;
        
        temp=to_string(p);
            
            
        
        sol.append(temp);
        temp.clear();
    for(;i<n;i++)
    {
        if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u')
        {v--;}
        else c--;
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            v++;
        else c++;
        p=c*v;
        
        
           temp=to_string(p);
            
            
        
        sol.append(temp);
        temp.clear();
    }
    return sol;
    // Complete this function
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        int k;
        cin >> s >> k;
        string encryptedString = encryptString(s, k);
        cout << encryptedString << endl;
    }
    return 0;
}
