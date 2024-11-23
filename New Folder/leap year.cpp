# include<iostream>
using namespace std;
int main()
{
	int days;
	
	cout<<"please enter number of days in a year";
	cin>>days;
	
	if( days>365)
	{
		cout<<"it is a leap year";
	}
	
	else
	{
		cout<<"it is not a leap year";
	}
}
