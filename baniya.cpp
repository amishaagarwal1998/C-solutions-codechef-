#include <iostream>
#include <set>

using namespace std;
int count(int con)
{
    // base case
    if (con == 0)
        return 0;
  
    else
  
        
        return (con & 1) + count(con >> 1);
}
  


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,query,x,con,pre,even,odd,c,shot,i,j;
    cin>>t;
    while(t--)
    {even=0;odd=0;c=0;
        set <long long int, greater <long long int> > B;
        
        
        set <long long int, greater <long long int> > :: iterator itr,ptr;
        cin>>query;
        for(i=1;i<=query;i++)
        {	set <long long int, greater <long long int> > C;
        	c=0;
        	
            cin>>con;
            pre=con;
            itr=B.find(pre);
            if(itr==B.end())
            {
            c=count(con);					
                                            
                if(c%2==0)
                even++;
                else odd++;
                c=0;
                
                for(ptr=B.begin();ptr!=B.end();ptr++)
                {
                    con=pre^(*ptr);
                    
                   itr=B.find(con);
                   if(itr==B.end())
            {       shot=con;c=0;
            
				c=count(con);		
                if(c%2==0)
                even++;
                else odd++;
                
                 C.insert(shot);
                }
                
            }
              B.insert(pre);
            for(ptr=C.begin();ptr!=C.end();ptr++)
            B.insert((*ptr));
             
           C.clear();
           
        }
        cout<<even<<" "<<odd<<"\n"; 
    }
	// your code goes here
    }
	return 0;
}



