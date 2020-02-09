/**
 * @input A : String termination by '\0'
 * 
 * @Output string array. You need to malloc memory. 
 *   Fill in len1 as number of strings. Make sure every string ends with null character
 */
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 
char** prettyJSON(char* A, int *len1) {
    
    int n,i,c=0,j=0,k=0;
    n=strlen(A);
    for(i=0;i<n;i++)
    {
        if(A[i]==']' || A[i]=='[' || A[i]=='{' || A[i]=='}' || A[i]==',')
        c++;
    }
  
   
    c=2*c-1;
     
    char ** B = (char **)malloc(c* sizeof(char *)); 
    
    for (i=0; i<c; i++) 
         B[i] = (char *)malloc(n * sizeof(char)); 
    
     
    
    for(i=0;i<n;i++)
    {   
    
        if((A[i]=='{' || A[i]=='[') && i==0)
        {B[k][j]=A[i];
		j++;B[k][j]='\0';k++;j=0;}
        
      else  if((A[i]=='}' || A[i]==']' ) && i==n-1)
        {B[k][j]='\0';k++;j=0;B[k][j]=A[i];j++;B[k][j]='\0';
	
		}
        
        else if(A[i]==',')
        {B[k][j]=A[i];j++;B[k][j]='\0';k++;j=0;}
        
        else if(A[i]=='{' || A[i]=='[' || A[i]==']' || A[i]=='}')
        {B[k][j]='\0';k++;j=0;B[k][j]=A[i];j++;B[k][j]='\0';k++;j=0;}
        
        else{ B[k][j]=A[i];j++;}
	}
	
	
	
	
	
    (*len1)=(k+1);
    return B;
}

int main(void)
{
	char A[100];
	
	scanf("%s",A);
	int i;
	int * len1=(int *)malloc(sizeof(int));
	char **B=prettyJSON(A,len1);
	
	for(i=0;i<(*len1);i++)
	{
		printf("%s\n",B[i]);
			
	}
	
	
	
}

