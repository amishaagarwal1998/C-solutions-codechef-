#include <stdio.h>
#include<string.h>
int main(void) {
    
    
    int t,n,i,k,j;
    char s[10000],temp;
    scanf("%d",&t);
    
    while(t--)
    {   k=0;
        scanf("%s",s);
        int hash[26]={0};        
        n=strlen(s);
        for(i=0;i<n;i++)
            hash[s[i]-97]++;
        i=0;j=n-1;
        while(i<j)
        {
            if(s[i]!=s[j] )
             {
                if(hash[s[i]-97]>2)
                {hash[s[i]-97]-=2;
            
                for(k=i+1;k<j;k++)
                    if(s[k]==s[i])
                    {
                        temp=s[k];
                        s[k]=s[j];
                        s[j]=temp;
                        break;
                    }
                } 
				
				 
                  
            }
            
           else { hash[s[i]-97]-=2;}

			i++;j--;
        }
        k=0;
        
        for(i=0;i<26;i++)
       {
		 if(hash[i]==1)
            k++;
            
        
            
        }
       
      
       if(k==1 || k==2 || (n%2!=0 && k==3))
       printf("DPS\n");
       
       else printf("!DPS\n");
        
    }
	// your code goes here
	return 0;
}


