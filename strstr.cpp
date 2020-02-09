/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * @input B : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
 #include<stdio.h>
 #include<string.h>
 
 
int strStr(const char* A, const char* B) {

    int n,m;
    n=strlen(A);
    m=strlen(B);
    int p=0,i,j,flag;
    
    if(n==0 || m==0)
        return 0;
        
        while(p<n)
    {   j=0;i=p;
        if(A[i]==B[j])
        {    
            while(A[i]==B[j] && j<m && i<n)
            {  
				 flag=1;
                i++;j++;
            }
            
            
            
        }
        
        else 
        {
            flag=0;
            
        }
        
        if(flag==1)
        return p;
        
        p++;
        
    }
    
    return -1;
    
    
}

int main(void)
{
	char A[20],B[20];
	gets(A);
	gets(B);
	
	int c=strStr(A,B);
	printf("%d\n",c);
}


