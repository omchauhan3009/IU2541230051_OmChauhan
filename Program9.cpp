#include<iostream>
using namespace std;
class Om
{

public:
	void q1 ()
{
	int i;
	for(i=1;i<=10;i++)
	{
		cout<<i<<endl;
	}
}
void q2 ()
{
	int n,sum=1;
	cout<<"Enter a number : ";cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	cout<<"Factorial "<<sum;
	
}
void q3 ()
{
	int num,sum=0;
	cout<<"Enter 10 numbers : ";
	for (int i=1;i<=10;i++)
	{
		cin>>num;
		sum = sum + num;
	}
	cout<<"Sum = "<<sum;
}
void q4 ()
{
	for (int i=1;i<=100;i++)
	{
		if (i % 2 ==0)
		{
			cout<<""<<i;
		}
	}
}
void q5 ()
{
	for (int i=1;i<=100;i++)
	{
		if (i%2 != 0)
		{
			cout<<""<<i;
		}
	}
}

	
};

int main ()
{
	
	Om o;
	o.q1();
	o.q2();
	o.q3();
	o.q4();
	o.q5();
//	q1 ();
//	q2 ();
//	q3 ();
//	q4 ();
//	q5 ();
}

