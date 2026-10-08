#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<a<<"\t"<<b<<"\t";
	int n = 10;
	for (int i=1;i<=n;i++)
	{
		c = a+b;
		cout<<c<<"\t";
		a = b;
		b = c;
	}
}
