#include<stdio.h>
#include<string.h>
struct com{
    
    char a[20];
	char b[20];
    
};

int main(void)
{
    int n,q,i,j,l,k,flag,z;
    
    scanf("%d %d",&n,&q);
    char name[20],temp[20];
    struct com c[100];
    for(i=0;i<n;i++)
    {scanf("%s %s",c[i].a,c[i].b);
    }
    
    for(i=0;i<q;i++)
    {
        scanf("%s",name);
        l=strlen(name);
        k=0;
        for(j=l-1;name[j]!='.';j--)
        {
            temp[k]=name[j];
            k++;
        }
        
        strrev(temp);
         z=strlen(temp);
        printf("%d  %s\n",z,temp);
       
        for(j=0;j<n;j++)
        {   flag=1;
            if(c[j].a!=temp)
            {flag=0;printf("%d  %s\n %d  %s\n",strlen(c[j].a),c[j].a,strlen(c[j].b),c[j].b);}
            
            else if(c[j].a==temp)
			 {flag=1;printf("%s\n",c[j].b);break; }
        }
        if(flag==0)
        printf("unknown\n");
        
        
    }
    
    
    return 0;
}
