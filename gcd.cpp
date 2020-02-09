#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    long long int t,n,temp,i,min,c,min1,max,min2;
    
    scanf("%lld",&t);
    
    while(t--)
    {
        vector <long long int> v;
        vector <long long int> g;
        vector <long long int> h;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&temp);
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),greater<long long int>());
        
        vector <long long int> :: iterator itr;
         vector <long long int> :: iterator ptr;
         vector <long long int> :: iterator atr;
        
        
        itr=v.begin();
       
        
        ptr=v.begin();
        while((*ptr)==(*itr))
        {
            ptr++;
            
        }
        
        atr=ptr;
        atr++;
        if(v.size()==2)
        min=(*atr);
        else 
        min=(*ptr);
        while(ptr!=v.end() && atr!=v.end())
        {
           c= __gcd((*ptr), (*atr));
            if(c<=min)
            min=c;
        
            ptr++;
            atr++;
            
        }
           min=min+(*itr);
        
        ptr=v.begin();
        for(itr=v.begin();itr!=v.end();itr++)
        {
            if((*ptr)%(*itr)==0)
                {
                    g.push_back((*itr));
                    
                }
            else {h.push_back((*itr));}
        }
        
        ptr=g.begin();
        atr=ptr;
        atr++;
        if(g.size()==1)
        min1=(*ptr);
        else 
        min1=__gcd((*ptr), (*atr));
        
         while(ptr!=g.end() && atr!=g.end())
        {
           c= __gcd((*ptr), (*atr));
            if(c<=min1)
            min1=c;
        
            ptr++;
            atr++;
            
        }
            
        ptr=h.begin();
        atr=ptr;
        atr++;
        if(h.size()==1)
        min2=(*ptr);
        else 
        min2=__gcd((*ptr), (*atr));
         while(ptr!=h.end() && atr!=h.end())
        {
           c= __gcd((*ptr), (*atr));
            if(c<=min2)
            min2=c;
        
            ptr++;
            atr++;
            
        }  
        
        if(min>=min1+min2)
        printf("%lld\n",min);
        
        else printf("%lld\n",min1+min2);
            
            

        
        
    }
    
	// your code goes here
	return 0;
}

