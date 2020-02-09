/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
 #include<stdio.h>
 #include<string.h>
 
int solve(char* A) {
    
    
    
    int n=strlen(A);
    int r,c,i,j,flag;
    r=i=0;
    c=j=n-1;
    while(r<c)
    {  flag=0;
    	
	while(i<j)
        {   
        
        	if(A[i]==A[j])
        	{
            i++;j--;
            flag=1;
        	}
        
        	else {flag=0;break;}
        
        }
        
        	if(flag==1)
        	{
            return (n-1-c);
            
        	}
        
        else {i=r;c--;j=c;
		
		
		}
    }
    
}

int main(void)
{
	char A[50];
	gets(A);
	int c= solve(A);
	printf("%d\n",c);
}
