/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int maxArr(int* A, int n1) {
    
    int i,j,c=0,d=0;
    for(i=0;i<n1-1;i++)
    {   c=abs(A[i]-A[i+1])+1;
        for(j=i+1;j<n1;j++)
        {
            d=abs(A[i]-A[j])+ abs(i-j);
            printf("%d %d\n",c,d);
            if(d>=c);
                d=c;
        }
    }
    
    return d;
    
}

