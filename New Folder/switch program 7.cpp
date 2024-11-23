#include<iostream>
using namespace std;
int main()
{
	int valueone;
	int valuetwo;
	
	cout<<"please enter your valueone";
	cin>>valueone;
	
	cout<<"please enter your valuetwo";
	cin>>valuetwo;
	
	int choice;
	
	cout<<"please enter your choice/npress 1 for add/npress 2 for subtract/ npress 3 for multiply/npress 4 for divide"; 
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<valueone+valuetwo;
			break;
			
	    case 2:
	    	cout<<valueone-valuetwo;
	    	break;
	    	
	    case 3:
	    	cout<<valueone*valuetwo;
	    	break;
	    	
	    case 4:
	    	cout<<valueone/valuetwo;
	    	break;
	    	
	    default:
	    cout<<"invalid choice";
	    break;
	    		
	    		
	}       
	
	
}
