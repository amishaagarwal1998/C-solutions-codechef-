//#include <cstring>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//bool prime[1000000007];
//vector<long long int> v;
//void seive(long long int n)
//{
//    memset(prime,true,sizeof(prime));
//    prime[0]=false;prime[1]=false;
//    for(int i=2;i<=n;i++)
//    {
//        if(prime[i])
//        {   v.push_back(i);
//            for(int p=i*2;p<=n;p+=i)
//            {
//                prime[p]=false;
//            }
//        }
//    }
//}
//
//int main() {
//    
//    long long int m=1000000000,t,l,r,i,s,p,j;
//    cin>>t;
//    seive(m);
//    vector<long long int> v3;
//    v3.push_back(1);
//    v3.push_back(2);
//    v3.push_back(3);
//    for(int i=4;i<)
//    while(t--)
//        
//    {
//        
//        cin>>l>>r;
//        
//        
//       
//       
//    }
//    
//    
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//    return 0;
//}



// CPP program for finding number of divisor 
#include <bits/stdc++.h> 

using namespace std; 

// program for finding no. of divisors 
long long int divCount(long long int n) 
{ 
	// sieve method for prime calculation 
	bool hash[n + 1]; 
	memset(hash, true, sizeof(hash)); 
	for (long long int p = 2; p * p < n; p++) 
		if (hash[p] == true) 
			for (long long int i = p * 2; i < n; i += p) 
				hash[i] = false; 

	// Traversing through all prime numbers 
	long long int total = 1; 
	for (long long int p = 2; p <= n; p++) { 
		if (hash[p]) { 

			// calculate number of divisor 
			// with formula total div = 
			// (p1+1) * (p2+1) *.....* (pn+1) 
			// where n = (a1^p1)*(a2^p2).... 
			// *(an^pn) ai being prime divisor 
			// for n and pi are their respective 
			// power in factorization 
			long long int count = 0; 
			if (n % p == 0) { 
				while (n % p == 0) { 
					n = n / p; 
					count++; 
				} 
				total = total * (count + 1); 
			}
          if(hash[n/p]==true)
            
          if (n % (n/p) == 0 && p*p!=n) { 
				while (n % (n/p) == 0) { 
					n = n / (n/p); 
					count++; 
				} 
				total = total * (count + 1); 
			}
          
          
		} 
	} 
	return total; 
} 

// driver program 
int main() 
{ 
	long long int n = 100000000000; 
	cout << divCount(n); 
	return 0; 
} 

