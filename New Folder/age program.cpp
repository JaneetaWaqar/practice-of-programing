#include<iostream>
using namespace std;
int main ()
{ 
	int age;
	
	cout<<"please enter your age";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"you are eligible to vote";
	}
	
	if(age<18)
	{
		cout<<"you are not eligible";
	}
}
