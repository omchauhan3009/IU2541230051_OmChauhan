/* // input 
1. in class A
2. in class B
find sum of two number using function overriding*/

#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void get()
		{
			cout<<"\nEnter number 1 : ";cin>>a;
		}
		void display ()
		{
			cout<<"\nNumber 1 = "<<a;
		}
};
class B : public A
{
	public:
		int b,sum;
		void get()
		{
			A :: get();
			cout<<"\nEnter number 2 : ";cin>>b;
		}
		void display()
		{
			A :: display();
			cout<<"\nNumber 2 = "<<b;
		}
		void Sum()
		{
			sum = a+b;
			cout<<"\nAddition of these numbers = "<<sum;
		}
};
int main ()
{
	B c;
	c.get();
	c.display();
	c.Sum();
}
