
#include<iostream>
#include<vector>
int isvalid(int row,int col, vector <vector <int> > &sol, int N)
{    int i,j;
    for(i=0;i<=col;i++)
    if(sol[row][i]==1)
    return 0;
    
    for(i=row,j=col;i>=0,j>=0;i--,j--)
        if(sol[i][j]==1)
        return 0;
        
    for(i=row,j=col;i>N,j>=0;i++,j--)
    if(sol[i][j]==1)
    return 0;
    
    return 1;    
}

int Nqueen(vector <vector <int> > &sol,int col,int N)
{
    if(col>=N)
    return 1;
    for(int i=0;i<N;i++)
    {
        if(isvalid(i,col,sol,N))
    {
        
        sol[i][col]=1;
        Nqueen(sol,col+1,N);
    }
    
    else
    sol[i][col]=0;
    }
    
    return 0;
    
}

int main(void){
    
    int i,j,N;
    scanf("%d",&A);
    vector <vector <int> > sol;
    for(i=0;i<A;i++)
    for(j=0;j<A;j++)
    sol[i][j]=0;
    for(i=0;i<A;i++)
    {
        if(Nqueen(sol,i,A)==1)
        for(i=0;i<A;i++)
        {
		for(j=0;j<A;j++)
        cout<<sol[i][j]<<" ";
    	
		cout<<"\n";
		}
		
		cout<<"\n";
	}
    
 
}

