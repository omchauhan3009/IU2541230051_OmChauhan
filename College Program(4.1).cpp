#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	A(int x)
	{
		this->x=x;
		cout<<this->x;
	}
		
};
int main()
{
	A a(4);
}
