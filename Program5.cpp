// Area of circle, square, trianlge, rectangle 

#include<iostream>
using namespace std;
int main ()
{
	int pie = 3.14;
	int r,a,b,h,l,w,Ac,As,At,Ar;
	
	cout<<"Enter r : ";cin>>r;
	cout<<"\nEnter a : ";cin>>a;
	cout<<"\nEnter b : ";cin>>b;
	cout<<"\nEnter h : ";cin>>h;
	cout<<"\nEnter l : ";cin>>l;
	cout<<"\nEnter w : ";cin>>w;
	
	Ac = pie*r*r;
	As = a*a;
	At = (b*h)/2;
	Ar = l*b;
	
	cout<<"Ac = "<<Ac;
	cout<<"\nAs = "<<As;
	cout<<"\nAt = "<<At;
	cout<<"Ar = "<<Ar;
	
	
}
