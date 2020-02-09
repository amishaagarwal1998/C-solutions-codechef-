#include <iostream>
#include<algorithm>
using namespace std;

int main(void) {
	long long int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	   long long int array[n],i,k,j,cherry=0,haza=0,hash[100000]={0};
	   long long int m=100000;
	   
	  
	    for(i=0;i<n;i++)
	    {cin>>k;hash[k%m]++;array[i]=k;}
	    
	    sort(array,array+n);
	    
	    for(i=n-1,k=0;i>=0;k++)
	    {  
	        if(hash[array[i]%m]==1)
	        { if(k%2==0){
	          cherry+=array[i]; }
	          else{haza+=array[i]; }
	          array[i]/=2;
	          i--;
	          sort(array,array+i+1);
	        }
	        else{i=i-hash[array[i]%m];
	    }
	}
	if(haza>=cherry){cout<<"Hazardous"<<endl;}
	else printf("Cherry %lld\n",cherry-haza);
}

}
