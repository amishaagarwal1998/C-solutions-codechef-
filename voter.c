#include <stdio.h>
int partition(int a[],int low,int high)
{int i=low-1,pivot=a[high],temp,j;
for(j=low;j<high;j++)
{
	if(a[j]<=pivot)
	{i++;
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	
	}
}
temp=a[i+1];
a[i+1]=a[high];
a[high]=temp;

return i+1;

}


void Quicksort(int a[],int start,int end)
{	if(start<end)
	{
	int q=partition(a,start,end);
	Quicksort(a,start,q-1);
	Quicksort(a,q+1,end);
}
}



int main(void) {
    
    int n1,n2,n3,i;
    scanf("%d %d %d",&n1,&n2,&n3);
    int n=n1+n2+n3;
	int a[n];
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
	Quicksort(a,0,n-1);

	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	printf("\n");

		i=0;

		while(i<n)
	{  if(i+2<n)
	    {if(a[i]==a[i+1] && a[i+1]==a[i+2])
	    {printf("%d\n",a[i]);
	       i+=3;}
	    }	
			
		 if(i+1<n)
			{
	         if(a[i]==a[i+1] && a[i+1]!=a[i+2])
	        {printf("%d\n",a[i]);
	            i+=2;
	       }
	           }
	           
	           else i++;
	    
	}

	return 0;
}


