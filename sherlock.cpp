#include <iostream>
#include<string.h>
#include <bits/stdc++.h> 
#include<math.h>
using namespace std;

int main() {
    
    char str[100],b[100];
    
    scanf("%[^\n]s ",str);
    int i=0,j,n,r,c,size=0,k=1;
    
   while(str[i]!='\0')
    i++;
   
   size=i;
   
   for(i=0;i<size;i++)
   {
   	
   	if(str[i]==' ')
   	break;
	}
   			while(i+k<size)
   			{
   			    str[i]=str[i+k];
   				i++;
		 	if(str[i+k]==' ')
			 k++;
			 }
		 	
		 	
		 	
		
   	
   
    str[i]='\0';
   
    size=strlen(str);
   
    n=sqrt(size);
    
    if(n*n==size)
      {r=n;c=n;}
    
    else {
            r=n;
            c=n+1;
        
        }
    k=0;j=0;i=0;
    while(j<c)
    {
        i=j;
    while(i<size)    
        {
            b[k]=str[i];
            i+=c;k++;
        
        }
        b[k]=' ';
        k++;
        j++;
    }
    
    k--;
    b[k]='\0';
    
    cout<<b<<"\n";
	// your code goes here
	return 0;
}

