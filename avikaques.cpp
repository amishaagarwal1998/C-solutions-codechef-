#include <stdio.h>
long long int binaryNum[100001][32]={0}; 

void decToBinary(long long int arr[],long long int n) 
{ 
    // array to store binary number 
   
  
    // counter for binary array 
    
    for(j=0;j<n;j++){
    while (arr[j] > 0) { 
        int i = 0; 
        // storing remainder in binary array 
        binaryNum[j][i] = n % 2; 
        n = n / 2; 
        i++; 
    }j++;} 
} 

long long int sum(long long int arr[],long long int index,long long int k)
{
    long long int i=0,sumo=0;
    for(i=index;i<index+k;i++)
    {
        
    }
}

int main(void) {
long long int t;
long long int arr[32];
cin>>t;
while(t--)
{
 
    
    while(t--){
        long long int n,k;
        long long int array[n];
        cin>>n>>k;
        for(i=0;i<n;i++)
        cin>>array[i];
        decToBinary(array,n);
        long long int max=0;
    	for(i=0;i<n-k;i++)
    	{
    		sum()
    	
		}
    }
}
}


