/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
 #include<stdio.h>
 #include<string.h>
int solve(char* A) {
    
    int i=0,n;
    long long int c=0;
    n=strlen(A);
    printf("%d\n",n);
    
    while(A[i]!='\0')
    {
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U')
        {c+=n-i;}
        i++;
    }
    
    return (c%10003);
}

int main(void)
{
	char A[20];
	scanf("%s",A);
	printf("%s\n",A);
	long long int c= solve(A);
	printf("%d\n",c);
}
