#include<iostream>
#include<fstream>
using namespace std;
class A
{
	public:
		int a,b;
		void get()
		{
			cout<<"Enter two number : ";cin>>a>>b;
		}
		void put()
		{
			cout<<a<<"\t"<<b;
		}
};
void Write()
{
	ofstream fo;
	fo.open("data.dat",ios::binary);
	A a;
	a.get();
	fo.write((char*)&a,sizeof(a));
	fo.close();
	//cout<<"\nData Written";
}
void Read()
{
	fstream fi;
	fi.open("data.dat",ios::binary);
	A a;
	fi.read((char*)&a,sizeof(a));
	a.put();
	fi.close();
}
int main()
{
	Write();
	Read();
}
