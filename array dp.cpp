int lower(int x,int TEMP[],int n1)
 {  int i=0;
     
    while(TEMP[i]<x)
    {
        i++;
        
    }
    
    return i;
 }
 
int solve(int* A, int n1, int B, int C) {
    int c=C,p=0,i,k,sum=0;
    if(n1==0)
    return 0;
    
    while(c>0)
    {
        c=c/10;
        p++;
        
    }
    
    int cnt=0;
        for(i=0;i<n1;i++)
        if(A[i]==0)
        {
            cnt++;
        }
        else break;
    if(B<p)
    {   if(B==1)
            cnt=0;
    return (n1-cnt)*pow(B,(n1-1));    
        
    }
    
    if(B>p)
    return 0;
    
    if(B==p)
    { 
     int D=C,Digit[p],r,mid,flag=0,end,sum=0,i=B-1;
        
        while(D>0)
        {
            r=D%10;
            Digit[i]=r;
            i--;
            D=D/10;
            
        }
            
            if(n1==1 && A[0]==0 && C>0 )
                return 1;
        
            i=0;end=n1-1;flag=0;
            while(i<end)
            {
                mid=(i+end)/2;
               
                if(A[mid]>Digit[0])
                    {
                       end=mid-1; 
                    }
              else if(A[mid]==Digit[0])
                {flag=1;break;}
                
                else  i=mid+1; 
                
            }
         
            
                if(B==1)
                {cnt=0;}
                sum=(lower(Digit[0],A,n1)-cnt)*pow(n1,p-1);
               
            if(flag==1)
            {   i=1;
                while(i<B)
                {
                    r=lower(Digit[i],A,n1);
                   
                    sum+=(r)*pow(n1,p-i-1);
                    i++;
                }
            }
            
       return sum; 
    }
}
int main(void)
{
	int n1,i,B,C,sum;
	scanf("%d",&n1);
	int A[n1];
	for(i=0;i<n1;i++)
	scanf("%d",&A[i]);
	
	scanf("%d %d",&B,&C);
	sum=solve(A,n1,B,C);
	printf("\n%d",sum);
	return 0;
}
