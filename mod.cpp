#include <iostream>
using namespace std;

int main() {
    int a,b,c,t,square=1;
    cin>>t;
    while(t--)
    {
      cin>>a>>b>>c;
      square=a%c;
      if(b==0)
      cout<<"1\n";
      else 
      while(b>0)
      {
         if(b%2==0)
         {square=((square%c)*(square%c))%c;b=b/2;cout<<b<<"\n";}
         else if(b%2==1)
         {square=((square%c)*(a%c))%c;b--;}
         
         cout<<square<<"\n"; 
      }
        cout<<square<<"\n";
        
    }
	//code
	return 0;
}
