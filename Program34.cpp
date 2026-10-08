#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void get()
		{
			cout<<"Enter number : ";cin>>a;
		}
		void display ()
		{
			cout<<"Number = "<<a;
		}
		
};
class B:public A
{
	public:
		int b;
		void get()
		{
			cout<<"\nEnter number : ";cin>>b;
		}
		void display ()
		{
			cout<<"Number = "<<b;
		}	
};
int main()
{
	B c;
	c.get();
	c.display();
}
