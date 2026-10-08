#include<iostream>
#include<fstream>
using namespace std;
class A
{
	public:
		int a,b;
	void get()
	{
		cout<<"\nEnter 2 Numbers = ";
		cin>>a>>b;
	}	
	void put()
	{
		cout<<endl<<a<<"\t"<<b;
	}
};
void Write()
{
	fstream fo;
	fo.open("data.dat",ios::binary);
	A a;
	a.get();
	fo.write((char*)&a,sizeof(a));
	//cout<<"\nData Written";
}
void Read()
{
	fstream fi;
	fi.open("data.dat",ios::binary);
	A a;
	fi.read((char*)&a,sizeof(a));
	a.put();
}
int main()
{
	Write();
	Read();	
}
