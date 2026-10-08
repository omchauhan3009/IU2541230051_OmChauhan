#include<iostream>
using namespace std;
//class B;
class A
{
	int a;
	public:
		A()
		{a=8;}
		friend void display(A obj);
};
void display (A obj)
{
	cout<<"Private Member display : "<<obj.a;
}
int main()
{
	A obj;
	display(obj);
}
