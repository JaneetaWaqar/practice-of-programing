#include<iostream>
using namespace std;
int main()
{
	int first_side;
	int second_side;
	int third_side;
	
	cout<<"please enter the length of first_side of triangle";
	cin>>first_side;
	
	cout<<"please enter the length of second_side of triangle";
	cin>>second_side;
	
	cout<<"please enter the length of third_side of a triangle";
	cin>>third_side;
	
	if(first_side <=0&&second_side <=0&&third_side<=0)
	{
		cout<<"side must be positive";
	}
	
	
	if(first_side==second_side&&second_side==third_side)
	{
		cout<<"it is equilateral triangle"<<endl;

    }
    
      else if(first_side==second_side&&second_side==third_side&&first_side==third_side);
     {
    	cout<<"it is isosceles triangle"<<endl;
     }
      else
	{
		cout<<"it is sceles triangle"<<endl;
	}	
    
       return 0; 
     
}

