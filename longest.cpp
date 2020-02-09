/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
 #include<stdio.h>
 #include<string.h>
 
/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
int lengthOfLongestSubstring(char* A) {
    
   int i=0,max=0,c=0,n,j,hash[128];
   for(j=0;j<128;j++)
   hash[j]=-1;
   n=strlen(A);
   if(n==1)
   return 1;
   
   for(i=0;i<n;i++)
   {
    
   
           
            
            
   
       if(hash[A[i]]==-1)
       {hash[A[i]]=i;c++;
       
       }
       
       else 
	   {
             i=hash[A[i]];    
              c=0; 
            for(j=0;j<128;j++)
            hash[j]=-1;
           
           
               }
       
     if(c>max)
    	max=c;
            
      printf("%d  %d  %d\n",i,max,c);      
       
   }
   
   
   return max;
    
}


int main(void)
{
	
	char s[100];
	scanf("%s",s);
	int n=lengthOfLongestSubstring(s);
	
	printf("%d\n",n);
}
