#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    
    long long int t,n,temp,c,h,k=0,i;
    cin>>t;
    while(t--)
    {
        c=0;h=0;k=0;
        cin>>n;
        priority_queue <long long int> A;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            A.push(temp);
        }
        
        
        
        
        while(!A.empty())
        {	
            
            temp=A.top();
            A.pop();
            
            
            if(A.top()==temp && !A.empty())
            {   
                while(A.top()==temp && !A.empty())
                {A.pop();}
                k++;
            }
            
            
            else {  A.push(temp);
                    if(k%2==0)
                    {c+=A.top();
                    temp=(A.top())/2;
                    A.pop();
                    if(temp!=0)
                    A.push(temp);
                     
                        
                    }
                    
                    else if(k%2!=0)
						{
                           h+=A.top();
                    temp=(A.top())/2;
                    
                    A.pop();
                    if(temp!=0)
                    A.push(temp);
                        }
                    
                 k++;
				 }
            
        }
        
        if(c>h)
        cout<<"Cherry "<<c-h<<"\n";
        
        else{
            
            cout<<"Hazardous\n";
            }
    }
    
	// your code goes here
	return 0;
}

