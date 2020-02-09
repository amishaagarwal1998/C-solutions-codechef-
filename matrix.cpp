
#include<stdio.h>
int searchMatrix(int A[][20], int n11, int n12, int B) {
    
    int low=0,r=0,high=n12-1,mid;
    if(n12=1)
    {   while(r<n11)
        {if(A[r][0]==B)
            return 1;
            r++;
        }
    }
    
    r=0;
    while(r<n11)
    {
        if(B>=A[r][low] && B<=A[r][high] )
            
                while(low<high)
                {
                   mid=(low+high)/2;
                    if(B>A[r][mid])
                    low=mid+1;
                    
                    else if(B<A[r][mid])
                    high=mid-1;
                    
                    else return 1;
                    
                    
                    
                }
            else {r++; low=0;high=n12-1;}
        
        
    }
    return 0;
    
}

 
int main(void)
{
	
	int n11,n12,i,j;
	scanf("%d %d",&n11,&n12);
	
	int A[10][20],B;
	for(i=0;i<n11;i++)
	for(j=0;j<n12;j++)
	scanf("%d",&A[i][j]);
	
	scanf("%d",&B);
	
	int c= searchMatrix(A,n11,n12,B);
	
	printf("%d\n",c);
	
}
