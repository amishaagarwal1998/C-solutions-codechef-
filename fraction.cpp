/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */

 
 #include<math.h>
 #include<stdio.h>
  #include<stdlib.h>
/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
char* fractionToDecimal(int A, int B) {
    
    long long int P=A,Q=B,a,b,c,i=0,j=0;
    int flag=1,r,find[200]={0},d[200],x=0,p,q;
    char temp;
    char *S=(char *)malloc(100*sizeof(char));
    if((P<0 && Q>0) || (P>0 && Q<0))
        {S[j]='-';
        j++;}
    
    else if(P==0)
    {
        S[j]='0';
        j++;
        S[j]='\0';
        
        
        return S;
    }
  
  		if(P<0)
  		P=-1*P;
      	if(Q<0)
  		Q=-1*Q;

    if(P>=Q)
    {
      i=2;
      while(i<=Q)
      {
          if(P%i==0 && Q%i==0)
          {
              P=P/i;
              Q=Q/i;
          }
          i++;
      }
        
        
    }
    
    else if(Q>P)
    {
        
        i=2;
      while(i<=P)
      {
          if(P%i==0 && Q%i==0)
          {
              P=P/i;
              Q=Q/i;
          }
          i++;
      }
        
    }
    
    a=P/Q;
    if(a==0)
    {
    	S[j]='0';
    	j++;
	}
    
    b=P%Q;
    
    c=Q;
    
    
    while(a>0)
    {
        r=a%10;
        S[j]=(char)(r+48);
        
        j++;
        a=a/10;
    
    }
    
   j--;
   if(S[0]=='-')
   p=1;
   else
   p=0;
  q=j;
  while(p<q)
  {
      temp=S[p];
      S[p]=S[q];
      S[q]=temp;
      p++;q--;
  }
  
    j++;
   if(b==0)
   {    S[j]='\0';
   		
       return S;
   }
   
    else if(b!=0)
    {
		
	S[j]='.';j++;}
   
   
   
    while(c>1)
    {
        if(c%2==0)
        c/=2;
        else if(c%5==0)
        c/=5;
        
        else 
        {
		flag=0;break;}
    }
   
    if(flag==1)
    {	
        while(b>0)
    {   
        b=b*10;
        r=b/Q;
        
        S[j]=(char)(r+48);
        j++;
        b=b%Q;
        
        
    }
    S[j]='\0';
        
    }
    
    else 
    { p=0;  
        while(flag==0)
	{
		
        find[p]=b;
		b=b*10;
        d[p]=b/Q;
        r=b%Q;
        b=r;
        
        
       for(q=0;q<=p;q++)
       if(find[q]==b)
		{	printf("%d\n",q);
		x=0;flag=1;
			while(x<q)
			{
				S[j]=(char)(d[x] +48);
				x++;j++;
			}
			
			S[j]='(';
			j++;
			while(x<=p)
			{
				S[j]=(char)(d[x] +48);
				j++;x++;
			}
			S[j]=')';
			j++;
			S[j]='\0';
			return S;
			
		}
        
        	
		
	
	p++;

	
}
	
	}
		
    
    
    return S;
    
    
}

   int main(void)
   {
   	int A,B;
   	scanf("%d %d",&A,&B);
   	
   	char *p=fractionToDecimal(A,B);
   	printf("%s\n",p);
	} 
    


