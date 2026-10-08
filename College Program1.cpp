#include<iostream>
using namespace std;
class Sum
{
	public:
		int a,b,add;
		void get ()
		{
			cout<<"Enter a : ";cin>>a;
			cout<<"\nEnter b : ";cin>>b;
			
			add = a+b;
		}
		
		void display ()
		{
			cout<<"\na = "<<a;
			cout<<"\nb = "<<b;
			cout<<"\nSum = "<<add;
		}
};
int main ()
{
	Sum s;
	s.get();
	s.display();
}
