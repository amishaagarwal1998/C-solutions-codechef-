#include <iostream>
using namespace std;

class MinHeap
{
    int capacity;
    int *harr;
    int heapsize=-1;
    public: MinHeap(int p)
            {
                capacity=p;
                harr=new int[capacity];
            }
            
            
            int parent(int i) {return (i-1)/2;}
            int left(int i) {return (2*i)+1;}
            int right(int i) {return (2*i)+2;}
            
            void swap(int *x,int*y)
            {
                int temp;
                temp=(*x);
                (*x)=(*y);
                (*y)=temp;
            }
           void insert(int a)
            {
                if(heapsize==capacity-1)
                return;
                
                heapsize++;
                harr[heapsize]=a;
                int i=heapsize;
                while(i>=0 && harr[parent(i)]>harr[i])
                {
                    swap(&harr[parent(i)],&harr[i]);
                    if(i-1!=parent(i) && harr[i-1]>harr[i])
                    swap(&harr[i-1],&harr[i]);
                    i=parent(i);
                    
                }
                
                
            }
            
            
            int median()
            {   
                
                
                if(heapsize%2==0)
                return harr[heapsize/2];
                
                else if(heapsize%2!=0)
                {
                    return (harr[heapsize/2]+harr[(heapsize/2)+1])/2;
                    
                }
                
    
                
            }
            
};


int main() {
    
    
    int n,i,temp;
    cin>>n;
    MinHeap h(n);
    for(i=0;i<n;i++)
    {   cin>>temp;
        h.insert(temp);
        cout<<h.median()<<"\n";
    }
	//code
	return 0;
}
