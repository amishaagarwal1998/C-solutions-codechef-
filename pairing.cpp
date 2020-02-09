#include<stdio.h>
int main(void)
{int t,n,m;
    scanf("%d",&t);
    while(t--)
  {     int hash[1000]={0},count[m],k=0;
      scanf("%d %d",&n,&m);
      int a[m],b[m],i;
      
        for(i=0;i<m;i++)
        {
          scanf("%d %d",&a[i],&b[i]);
        }
        hash[a[m-1]]++;
		hash[b[m-1]]++;
        count[0]=m-1;k++;
        for(i=m-2;i>=0;i--)
        {
            if(hash[a[i]]==0 && hash[b[i]]==0)
            { count[k]=i;k++;
            hash[a[i]]++;
            hash[b[i]]++;
                
            }
            
        }
      for(i=k-1;i>=0;i--)
      printf("%d ",count[i]);
      printf("\n");
  }
   return 0; 
}
