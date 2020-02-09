#include<stdio.h>
int const m=5;
int const n=5;
void spiral(int a[][5],int start1,int start2,int end1,int end2)
{int i,j;
	
	
	while(start1<end1 && start2<end2)
	{
		i=start1;
		j=start2;
		
		for(;j<end2;j++)
		printf("%d ",a[i][j]);
		j--;
		
		for(i=start1+1;i<end1;i++)
		printf("%d ",a[i][j]);
		i--;
		for(j=end2-1;j>0;j--)
		printf("%d ",a[i][j]);
		j++;
		for(i=end1-1;i>0;i--)
		printf("%d ",a[i][j]);
		i++;
		start1++;end1--;
		start2++;end2--;
	}
}

int main()
{
	int i,j;

	int a[m][n];
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		scanf("%d ",&a[i][j]);
	}
	printf("\n");
}

spiral(a,0,0,m,n);
return 0;
}
