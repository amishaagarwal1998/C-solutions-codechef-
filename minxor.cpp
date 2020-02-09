/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 #include<stdio.h>
 
 partition(int * B,int low,int high)
 {
     int j,i=low-1,temp,pivot=B[high];
     for(j=low;j<high;j++)
     {
         if(B[j]<=pivot)
         {
             i++;
             temp=B[j];
             B[j]=B[i];
             B[i]=temp;
             
         }
         
     }
     temp=B[i+1];
     B[i+1]=B[high];
     B[high]=temp;
     return (i+1);
 }
 
 void Quicksort(int *B ,int start,int end)
        {
            
            
            if(start<end)
            {
                int q=partition(B,start,end);
                Quicksort(B,start,q-1);
                Quicksort(B,q+1,end);
                
            }
            
            
            
        }
 
int findMinXor(int* A, int n1) {
    
    Quicksort(A,0,n1-1);
    
    int min=(A[0]^A[1]),i,c;
   
   
   for(i=1;i<n1-1;i++)
   {     
       c=(A[i]^A[i+1]);
       if(c<min)
       min=c;
       
       
   }
    return min;
}

	int main(void)
	{
		int n1,i;
		scanf("%d",&n1);
		int A[n1];
		
		for(i=0;i<n1;i++)
		{
			scanf("%d",&A[i]);
			
		}
		
		int c=findMinXor(A,n1);
		
		for(i=0;i<n1;i++)
		printf("%d   ",A[i]);
		
		printf("\n%d\n",c);
		
	}
