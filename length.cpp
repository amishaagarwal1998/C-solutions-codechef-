/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
 #include<stdio.h>
int lengthOfLastWord(const char* A) {
    int i,c,n;
    for(i=0;A[i]!='\0';i++)
          {   }
          printf("%d\n",i);
    n=i;
    i--;
    while(A[i]==' ')
    i--;
    while(i>=0)
    {
        if(A[i]==' ')
        break;
        
        else {i--;c++;}
    }
    
    

     return c;
    
}
int main(void)
{
	char A[50];int c;
	gets(A);
	c=lengthOfLastWord(A);
	printf("%d\n",c);
}
