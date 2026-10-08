#include<iostream>
using namespace std;
class Sum
{
	public:
		int a,b,add,sub,mul,div;
		void get ()
		{
			cout<<"Enter a : ";cin>>a;
			cout<<"\nEnter b : ";cin>>b;
		}
		void sum ()
		{
			add = a+b;
			cout<<"Addition = "<<add;
		}
		void diff ()
		{
			sub = a-b;
			cout<<"Substraction = "<<sub;
		}
		void product ()
		{
			mul = a*b;
			cout<<"Multiplication = "<<mul;
		}
		void modulus ()
		{
			div = a/b;
			cout<<"Division = "<<div;
		}
		void display ()
		{
			cout<<"\na = "<<a;
			cout<<"\nb = "<<b;
		
		}
};
int main ()
{
	Sum s;
	s.get();
	while(1)
	{
		int ch,add,sub,mul,div,a,b;
		cout<<"1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter your choice : ";cin>>ch;
		if(ch==1)
		{
			s.sum();
		}
		else if (ch==2)
		{
			s.diff();
		}
		else if(ch==3)
		{
			s.product();
		}
		else if(ch==4)
		{
			s.modulus();
		}
		else
		{
			cout<<"Invalid input";
		}
	}
}
