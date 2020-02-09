/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer
 */
 #include<stdio.h>
 #include<math.h>
 
void main( ) {
	int n1;
	scanf("%d %d\n",&n1);
	int A[n1],B[n1];
	int i,c=0;
	
    
    
    for(i=0;i<n1;i++)
    scanf("%d %d\n",&A[i],&B[i]);
    
    if(n1==1)
   { printf("0");
    }
    else
    for(i=0;i<n1-1;i++)
    {
        if(abs(A[i]-A[i+1])> abs(B[i]-B[i+1]))
        {
            c=c+abs(B[i]-B[i+1]);
            c+=abs(B[i]-B[i+1]+A[i+1]-A[i]);
        }
        
        else if(abs(A[i]-A[i+1])<abs(B[i]-B[i+1]))
            {   
                c=c+abs(A[i]-A[i+1]);
                c+=abs(B[i]-B[i+1]+A[i+1]-A[i]);
            }
            
            else
            {
                c=c+abs(A[i]-A[i+1]);
              
            }
    }
  
    printf("%d\n",c);
}

