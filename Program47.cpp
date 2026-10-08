#include<iostream>
using namespace std;
class Num
{
	public:
	float a,b;
	
	void op()
	{
		cout<<"Enter the value of a : ";cin>>a;
		cout<<"\nEnter the value of b : ";cin>>b;
		cout<<"Addition = "<<a+b;
	}
	void op(float m)
	{
		float n;
		cout<<"\nEnter the value of n : ";cin>>n;
		cout<<"Substraction = "<<m-n;
	}
	void op(float p,float q)
	{
		cout<<"Multiplication = "<<p*q;
		cout<<"Division = "<<p/q;
	}
};
int main ()
{
	Num n;
	n.op();
	n.op(3.1);
	n.op(6.3,2.2);
}

