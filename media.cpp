#include <stdio.h>
#include<string.h>
int main(void) {
    
    int n,q,c,r,s,l,k,i,j,flag;
    char a[n][20], name[q][20],temp[20];
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++)
    {
        scanf("%s[^\n]s",a[i]);
    }
    
    for(i=0;i<q;i++)
    {
        scanf("%s",name[i]);
        c=strlen(name[i]);
        k=0;
        for(j=c-1;name[i][j]!='.';j--)
        {
            temp[k]=name[i][j];
            j++;k++;
        }
        k--;
        for(j=0;j<n;j++)
        {flag=1;
        for(l=k;l>=0;l--)
        {
           if(temp[l]==a[j][r])
            flag=1;
            else{flag=0;break;}
        r++;
            
        }
        if(flag==1)
        {
            s=strlen(a[i]);
            r++;
            for(;r<s;r++)
            printf("%c",a[j][r]);
        
            printf("\n");
        }
        
        }
        if(flag==0)
        printf("unknown\n");
        
    }
    
	// your code goes here
	return 0;
}


