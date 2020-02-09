/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
 # include <stdio.h>
int main(void) {
    int n1;
    scanf("%d",&n1);
    int A[n1],temp,i=0,c=0,j;
    for(j=0;j<n1;j++)
    	scanf("%d",&A[j]);
    temp=A[i];
    A[i]=A[temp];
    c++;
    printf("%d %d %d \n",i,temp,c);	
    while(c<n1)
    {    printf("%d %d %d %d\n",i,temp,j,c);	
        for(j=1;j<n1;j++)
        	
         
			   if(A[j]==i)
            {
			A[j]=temp+10;
             temp=i;
             i=j;
             break;
            }     
       
            
       c++; 
        
    }
    
    for(j=0;j<n1;j++)
    {		if(A[i]>=10)
    		A[i]-=10;
			printf("%d  ",A[j]);
			
	}	
    
    return 0;
}

