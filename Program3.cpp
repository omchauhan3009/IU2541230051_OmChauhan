// Input two numbers and purform Add,Sub,Mul,Div and print it

#include<iostream>
using namespace std;
int main ()
{
	int a,b,add,sub,mul,div;
	cout<<"Enter a : ";cin>>a;
	cout<<"Enter b : ";cin>>b;
	
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	
	cout<<"Addition = "<<add;
	cout<<"\nSubtraction = "<<sub;
	cout<<"\nMultiplication = "<<mul;
	cout<<"\nDivision = "<<div;
	
}
