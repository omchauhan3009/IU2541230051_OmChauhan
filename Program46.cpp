#include<iostream>
using namespace std;
class A
{
	public:
		float r,side,l,b,h;
		void area()
		{
			cout<<"\nEnter Radius = ";
			cin>>r;
			
			float ans=3.14159*r*r;
			
			cout<<"\nArea of Circle = "<<ans;
		}
		void area(float side)
		{
			cout<<"\nArea of Square = "<<side*side;
		}
		void area(float l,float b)
		{
			cout<<"\nArea of Rectangle = "<<l*b;
		}
};
int main()
{
	A a;
	//circle
	a.area();
	//square
	a.area(4);
	//rectangle
	a.area(3.234,5.5);
}
