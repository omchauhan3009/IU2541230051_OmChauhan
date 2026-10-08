#include<iostream>
using namespace std;
void aoc()
{
	int pie = 3.14,r,Ac;
	cout<<"Enter r : ";cin>>r;
	Ac = pie*r*r;
	cout<<"\nAc = "<<Ac;	
}
void aor()
{
	int l,b,Ar;
	cout<<"Enter l :";cin>>l;
	cout<<"Enter b : ";cin>>b;
	Ar = l*b;
	cout<<"\nAr = "<<Ar;	
}
void aot()
{
	int b,h,At;
	cout<<"Enter b :";cin>>b;
	cout<<"Enter h : ";cin>>h;
	At = (b*h)/2;
	cout<<"\nAt = "<<At;
}
void aos()
{
	int a,As;
	cout<<"Enter a : ";cin>>a;
	As = a*a;
	cout<<"\nAs = "<<As;
}
int main ()
{
	int ch;
	while(1)
	{
		cout<<"\n-----Area Menu----\n";
		cout<<"\n1. Area of cirlce";
		cout<<"\n2. Area of square";
		cout<<"\n3. Area of triangle";
		cout<<"\n4. Area of rectangle";
		cout<<"\nEnter your choice = ";
		cin>>ch;
		if(ch==1)
		{
			aoc();
		}
		else if(ch==2)
		{
			aos();
		}
		else if(ch==3)
		{
			aot();
		}
		else if(ch==4)
		{
			aor();
		}
		else if(ch==0)
		{
			exit(0);
		}
		else
		{
			cout<<"\nInvalid Choice ";
		}
		
		
	}
	
}
