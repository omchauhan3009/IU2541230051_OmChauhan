#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int x;
	public:
		
		A(int a)
		{
			x=a;
			cout<<"\nBefore Swapping = "<<x<<"\t";
		}
		friend void swap(A &,B &);
};
class B
{
	private:
		int y;
	public:
	B(int b)
	{
		y=b;
		cout<<y<<endl;
	}
	friend void swap(A &,B &);
};
void swap(A &a,B &b)
{
	int c=a.x;a.x=b.y;b.y=c;
	cout<<"\nAfter Swapping = "<<a.x<<"\t"<<b.y;
}
int main()
{
	A a(5);B b(7);
	swap(a,b);
	
}

