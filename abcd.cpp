/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int maxSpecialProduct(int* A, int n1) {
    
        long long int p=1,M=1000000007,i,k,max=0;
        
       for(i=n1-2;i>1;i--)
       {   
            
           p=1;
           k=i+1;
           while(k<n1)
           {
               if(A[k]>A[i])
               {p=(p*k);break;}
               k++;
           }
           if(k==n1)
           p=0;
           k=i-1;
           while(k>=0)
           {
               if(A[k]>A[i])
               {p=(p*k);break;}
               k--;
           }
           if(k==-1)
           p=0;
        if(p>max)
        max=p;
        
       }
       
 
 
 return (max%M);
}

