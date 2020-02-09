
#include<stdio.h>
 #include<string.h>
 #include<ctype.h>

int isPalindrome(char* A) {
    
    int j=strlen(A),i,flag=1;
    j--;
    
    
    for(i=0;i<j;i++)
    if(A[i]>=65 && A[i]<=90)
    {
        A[i]+=32;
        
    }
    
    
    i=0;
    while(i<j)
    {   if(!isalpha(A[i]) && !isdigit(A[i]))
            i++;
    
        if(!isalpha(A[j]) && !isdigit(A[j]))
        j--;
        
        if( (isalpha(A[i]) || isdigit(A[i])) && (isalpha(A[j]) || isdigit(A[j])) )
        {  
            if(A[i]==A[j])
            {i++;flag=1;j--;}
        
            else {flag=0;break;}
    
        }    
            
    }    
    
    return flag;
    
}


int main(void)
{
	char A[]="1a2";
	
	int flag=isPalindrome(A);
	
	printf("%d\n",flag);
}


