#include<iostream>
using namespace std;
class Shape
{
	public:
		int AOC,r;
		
		float AOS;
		void area()
		{
			cout<<"Enter the value of r : ";cin>>r;
			AOC = (3.14*r*r);
			cout<<"\nArea of circle = "<<AOC;
		}
		void area (float s)
		{
			AOS = s*s;
			cout<<"\nArea of square = "<<AOS;
		}
};
int main ()
{
	Shape s;
	s.area();
	s.area(2.3);
}
