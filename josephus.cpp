
#include<stdio.h>
int recur(int arr[],int n,int k,int j)
{
    if(n==1)
    return arr[0];
    
    j=(j+k-1)%n;
    if(j==n-1)
    {
        n--;
    }
   else {   n--;
            int i=j;
            while(i<n)
            {
			arr[i]=arr[i+1];
    		i++;
			}
		}
    recur(arr,n,k,j);
    
}


int josephus(int n, int k)
{   
    int arr[n],i;
    for(i=0;i<n;i++)
    arr[i]=i+1;
    
    return(recur(arr,n,k,0));
    
   //Your code here
}

int main(void)
{
	int n,k;
	scanf("%d %d",&n,&k);
	
	printf("%d\n",josephus(n,k));
	
}
