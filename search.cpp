/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
 #include<stdio.h>
 
 
/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int search(const int* A, int n1, int B) {
    
    
    int start=0,end=n1-1,mid;
    if(A[0]<A[n1-1] && A[0]<A[1])
    mid=0;
    else{
     mid=start+(end-start)/2;
    
    while(start<end)
    {
       if(A[mid]<A[(mid+1)%n1] && A[mid]<A[(mid-1+n1)%n1])
            break;
            
        else if(mid==end-1 || mid==start+1)
                start=end;
                
        mid=start+(end-start)/2;
        
        if(A[mid]>A[end])
        start=mid;
        
        else if( A[mid]<A[end])
        end=mid;
       
    }
    
    }
    
    
    printf("%d\n",mid);
    
    if(B>=A[0])
    {start=0;
    end=(mid-1+n1)%n1;}
    
    else {
        
    start=(mid+1)%n1;
    end=n1-1;
        
    }
    while(start<=end)
    {
        mid=(start+end)/2;
        
        if(B>A[mid])
            start=mid+1;
            
        else if(B<A[mid])
            end=mid-1;
        else 
            if(A[mid]==B)
               {printf("%d\n",mid);
				 return mid;}
        else break;
            
    }
    
    return -1;
    
    
}


int main(void)
{
	int n1,B;
	scanf("%d",&n1);
	int a[n1],i=0,min;
	while(i<n1)
	{
	scanf("%d",&a[i]);
	i++;
	}
	
	scanf("%d",&B);
	
	int index=search(a,n1,B);
	printf("%d\n",index);
	
	return 0;
}

