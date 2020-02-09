
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int bintoa(char * B,char x,int n)
 { int S[n+2];
     x=(int)(x-48);
    int i=n-1,j=0,c=0,d;
    long long int sum=0;
     while(i>=0)
     {        
         S[j]+=((int)(B[i]-48)*x + c)%10;
         
         
         c=((int)(B[i]-48)*x + c)/10;
         
        
         j++;
         
         i--;
     }
     
     
     if(c!=0)
     S[j]=c;j++;
     S[j]=0;
     
     
    i=0;
     
  
  while(j--)
  {
      sum=(sum*10)+S[j];
      
      
  }
  
  
     return sum;
 }
char* multiply(char* A, char* B) {
    int n1,n2,i;
    long long int sum=0,prod=0,S,c=1;
    n1=strlen(A);
    n2=strlen(B);
     
    
    if(n1<=n2)
    {   i=n1-1;
        while(i>=0)
        {
            prod=bintoa(B,A[i],n2);
            prod=prod*c;
            sum+=prod;
            
            
            c=c*10;i--;
        }
    }
    
    else {  i=n2-1;
            while(i>=0)
        {   
            prod=bintoa(A,B[i],n1);
            prod*=c;
            
            sum+=prod;
           
            c=c*10;i--;
        }
      }
      i=0;
      S=sum;
      while(S>0)
      {
          i++;
          S/=10;
      }
     
      char * C=(char *)malloc(i*sizeof(char));
      C[i]='\0';
      i--;
      while(sum>0)
      {
          C[i]=(char)(sum%10 + 48);
          sum=sum/10;
          i--;
      }
      printf("%s\n",C);
      return &C[0];
}

int main(void)
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	char A[n1],B[n2];
	scanf("%s %s",A,B);
	
	char * C=multiply(A,B);
	printf("%s\n",C);
	
}

