#include<iostream>
using namespace std;
int main()
{
	int percentage;
	
	cout<<"please enter your percentage";
	cin>>percentage;
	
	if(percentage>=90)
	 {
		cout<<"your grade is A";
	 }
	 
	else if(percentage>=80)
	   {
			cout<<"your grade is B";
	   }
	   
	  else if(percentage>=70)
	   {
			cout<<"your grade is C";
	   }
	   
	   else if(percentage>=60)
	   {
	   		cout<<"your grade is D";
	   }
	   
	  else if(percentage<=60)
	   {
	   		cout<<"your grade is F";
	   }
	   
	   else
	   {
	   		cout<<"enter valid percentage"<<endl;
       }
       
       
     
	   	
}
