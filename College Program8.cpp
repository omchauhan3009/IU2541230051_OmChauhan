#include<iostream>
using namespace std;
int x=10;

int& display()
{
	return x;
}
int main()
{
	cout<<"\nValue of Global Variable = "<<display();
	display()=50;
	cout<<"\nNow Value of global variable x = "<<x;
	
}
