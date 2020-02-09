#include <iostream>
using namespace std;


class MinHeap
{
    
    int *harr;
    int capacity;
    int heap_size=0;
    public: MinHeap(int t)
    {   
        if(t>0)
        {capacity=t;
        harr=new int[capacity];
        }
    }
    int parent(int i){return (i-1)/2;}
    int left(int i){return (2*i)+1;}
    int right(int i){return (2*i)+2;}
    
    void swap(int *x,int *y)
    {
        int t=(*x);
        (*x)=(*y);
        (*y)=t;
    }
    
  void heapify(int j,int n)
    {   int index=j,l,r;
        l=left(j);
        r=right(j);
        if (l < n && harr[l] > harr[index]) 
        index = l; 
  
    
    if (r < n && harr[r] > harr[index]) 
        index = r; 
        
        if(index!=j)
        {
            swap(&harr[j],&harr[index]);
            heapify(index,n);
        }
        
    }
    
    void maxheap()
    {   int j=heap_size-1;
        
        for (int i = ((heap_size-1) / 2 ); i >= 0; i--) 
        heapify(i,heap_size); 
        
        for(;j>=0;j--)
        {
            
            
        swap(&harr[0],&harr[j-1]);
            heapify(0,j);
            
            
        }
        
        
        
    }
    void insert(int a)
    {
        if(heap_size==capacity)
        return;
        
        harr[heap_size]=a;
    
        heap_size++;
        maxheap();
        
    }
    
    
    
    
    
    
    int kth(int k)
    {   if(heap_size-k<0)
        return -1;
        return harr[heap_size-k];
        
    }
    
    void show(int i)
    {
    	for(int j=0;j<i;j++)
    	cout<<harr[i]<<" ";
    	cout<<"\n";
	}
};


int main() {
    int t,temp,n,k,i;
    cin>>t;
    while(t--)
    {
    cin>>k>>n;    
        
    MinHeap h(n);
    for(i=0;i<n;i++)
    {   cin>>temp;
    	
    	
        h.insert(temp);
        
        h.show(i);
        cout<<h.kth(k)<<" ";
    
    }
    cout<<endl;
    }
	//code
	return 0;
}
