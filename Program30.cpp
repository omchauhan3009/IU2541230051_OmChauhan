#include<iostream>
using namespace std;
class A
{
	public:
		void get()
		{
			cout<<"\nHello";
		}
};
class B : public A
{
	public:
		void getd()
		{
			//A::get();
			cout<<"\nI am Om Chauhan";
		}
};
int main()
{
	B obj;
	obj.get();
	obj.getd();
}
