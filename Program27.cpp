#include<iostream>
using namespace std;


class A
{
	public:
		void disp()
		{
			cout<<"\nWelcome to class A";
		}
};
class B:public A //inheritance
{
	public:
		void hello()
		{
			cout<<"\nWelcome to class B";
		}
	
};
int main()
{
	B b;
	b.disp();b.hello();
}
