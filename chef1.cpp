#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	char m;
	cin>>m;
	switch(m)
	{
	    case 'B':cout<<"BattleShip"<<endl;
		break;
	    
	    case 'b':cout<<"BattleShip"<<"\n";break;
	    case 'C':cout<<"Cruiser"<<"\n";break;
	    case 'c':cout<<"Cruiser"<<"\n";break;
	    case 'D':cout<<"Destroyer"<<"\n";break;
	    case 'd':cout<<"Destroyer"<<"\n";break;
	    case 'F':cout<<"Frigate"<<"\n";break;
	    case  'f':cout<<"Frigate"<<"\n";break;
	    
	    
	}
	}
	return 0;
}

