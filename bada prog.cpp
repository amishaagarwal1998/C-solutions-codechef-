/**
 * @input A : array of strings termination by '\0'
 * @input n1 : number of strings in array A
 * 
 * @Output Integer
 */
 
 #include<stdio.h>
 #include<string.h>
 #include<ctype.h>
 
 
 long long int gcd(long long int a, long long int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}

 
 long long int LCM(long long int * arr, int n) 
{ 
    // Initialize result 
    long long int ans = arr[0]; 
  int i;
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (i = 1; i < n; i++) 
        ans = ((((arr[i] * ans)) / 
                (gcd(arr[i], ans))))%1000000007; 
  
    return ans; 
} 
 
 
 
 void leftRotatebyOne(char * arr, int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
  
    arr[i] = temp; 
} 

void rotate(char * arr, int n, int d) 
{ int i;
    for (i = 0; i < d; i++) 
        leftRotatebyOne(arr, n); 
} 
 
 
int solve(char** A, int n1) {
    int i,j=0,k=1,r=0;
    char B[100000];
    long long int count[n1];
    
    while(i<n1)
    {
    
    strcpy(B,A[i]);
    j=strlen(A[i]);
        while(1)
        {       rotate(A[i],j,k);
            if(strcmp(B,A[i])==0)
            {count[r]=k;r++;break;}
            
            else {k++;}
        }
    k=1;
     i++;   
        
    }
    
    
    long long int c=LCM(count,n1);
    c=c%1000000007;
    return c;
}






int main(void)
{
	
	char A[3][6]={"a","ababa","aba"};
	
	long long int c= solve(A,3);
	printf("%d",c);
}


