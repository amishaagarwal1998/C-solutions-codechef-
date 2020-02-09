/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 #include<stdio.h>

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int firstMissingPositive(int* A, int n1) {
    int max,min,i,flag=0,temp,temp1;
    max=min=A[0];
    for(i=0;i<n1;i++)
    {
        if(A[i]>=max)
        max=A[i];
        
        if(A[i]<=min)
        min=A[i];
    }
    
    if(max<1 || min>1)
    return 1;
    
    if(max==min)
    {
        if(max>=1)
        return (max+1);
        
        else return 1;
        
    }
    
    else{
       
     for(i=0;i<n1;i++)   
     
        if((A[i]-1)>=0 && (A[i]-1)<n1)
        {   A[i]=A[i]*(-1);
            
        }
        
        
    for(i=1;i<n1;i++)
    {
        if(A[i]>0)
        {
		return A[i];}
        
        else flag=1;
    }
    if(flag=1)
    return (n1+1);
}


}


int main(void)
{
	int n1,i,c;
	scanf("%d",&n1);
	int A[n1];
	for(i=0;i<n1;i++)
	{
		scanf("%d",&A[i]);
		
	}
	
	 c=firstMissingPositive(A,n1);
	 printf("%d\n",c);
	 
	 
}
