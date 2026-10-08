#include<iostream>
using namespace std;
class Demo
{
	public:
		//special member function having same name as class name is called constructor
		Demo()
		{
			cout<<"\nWelcome to the world of OOP";
		}
};
int main()
{
	Demo d; //constructor calls automatically when object created.
}
