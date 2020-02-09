/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
#include<stdio.h>
#include<stdlib.h>
partition(int a[],int low,int high)
{   int i=low-1,pivot=a[high],j,temp;
    for(j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            
        }
    }
    temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return (i+1);
}

void Quicksort(int B[],int start,int end)
{
    if(start<end)
    {
        int q=partition(B,start,end);
        Quicksort(B,start,q-1);
        Quicksort(B,q+1,end);
        
        
    }
    
    
}


int* wave(int* A, int n1, int *len1) {
    
    int i,mid,j;
    *len1=n1;
    int *B=(int *)malloc((*len1)*sizeof(int));
    for(i=0;i<n1;i++)
    {
        B[i]=A[i];
        
    }
    
    
    Quicksort(B,0,n1-1);
    mid=n1/2;
    j=0;
    for(i=0;i<n1;i++)
    { printf("%d  ",i);  
	if(i==n1-1)
        {A[i]=B[mid];printf("\n%d\n",i);break;}
        
        if(i%2==0)
        A[i]=B[mid+1+j];
        else 
        {
            A[i]=B[j];
            j++;
        }
        
    }
  
    
}

int main(void)
{
	
	int n1,i,*len1;
	scanf("%d",&n1);
	int A[n1];
	for(i=0;i<n1;i++)
		scanf("%d",&A[i]);
		wave(A,n1,len1);
	for(i=0;i<(*len1);i++)
		scanf("%d",&A[i]);
}

