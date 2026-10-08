#include<iostream>
#include<math.h>
using namespace std;
void si ()
{
	int P,R,T,SI;
	cout<<"Enter P : ";cin>>P;
	cout<<"Enter R : ";cin>>R;
	cout<<"Enter T : ";cin>>T;
	
	SI = (P*R*T)/100;
	
	cout<<"Simple Interest = "<<SI;
}
void ci ()
{
	int A,P,r,n,t;
	cout<<"\nEnter A : ";cin>>A;
	cout<<"\nEnter P : ";cin>>P;
	cout<<"\nEnter r : ";cin>>r;
	cout<<"\nEnter n : ";cin>>n;
	cout<<"\nEnter t : ";cin>>t;
	
	A = P*pow((1+r/n),n*t);
	cout<<"Compound Interest = "<<A;
}
int main ()
{
	int ch;
	while(1)
	{
		cout<<"\n1. Simple Interest";
		cout<<"\n2. Compound Interest";
		cout<<"Enter your choice = ";
		cin>>ch;
		if(ch==1)
		{
			si();
		}
		else if(ch==2)
		{
			ci();
		}
		else 
		{
			cout<<"\nInvalid Input";
		}
	}
}
