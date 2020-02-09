#include<vector>
#include<iostream>
#include<algorithm>

class Solution
{
	public:
	std::vector <vector<int> > anagrams(const std::vector<string> &A));
	
}


vector <vector<int> > Solution::anagrams(const vector<string> &A) {
    
  int n=A.size(),i,p=0,k,r,c=0;
  std::vector <string> B;
  std::vector <vector <int>> P;
  
  for(i=0;i<n;i++)
    {B.push_back(A[i]);
    
        sort(B[i].begin(),B[i].end());
    }
    while(B.size()!=0 || B.size()!=1)
   {   i=0; 
       k=i+1;
        while(k<B.size())
       {
           if(B[i]==B[k])
            { P[p][0]=i+1+p;
              P[p][1]=k+1+p;
              p++;
              r=B[i].size();
            B[i].erase(0,r-1);
            B[k].erase(0,r-1);
            
            
                break;
            }
            k++;
            
       }
   }
   
   return P;
    
}

int main(void)
{
		using namespace std;
	string a;
	std::vector<string> A;
	std::vector<vector<int>> D;
	Solution z;
	int i=0;
	for(i=-;i<4;i++)
	{
		scanf("%s",a);
		A.pushback(a);
		
	}
	
	D=z.anagrams(A);
	for(auto i=D.begin();i<B.end();i++)
	{
		printf("%d %d\n",D[i][0],D[i][1]);
		
	}
	
}

