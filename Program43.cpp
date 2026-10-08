#include<iostream>
#include<fstream>
using namespace std;
class Bank
{
	public:
	int op_bal,acc_id;
	string name;
	
	void get()
	{
		cout<<"Enter name of the customer : ";cin>>name;
		cout<<"\nEnter account ID : ";cin>>acc_id;
		cout<<"\nEnter Opening balance : ";cin>>op_bal;
	}
	void display()
	{
		cout<<"Name = "<<name;
		cout<<"\nAccount ID = "<<acc_id;
		cout<<"\nOpening balance = "<<op_bal;
	}
};
int main ()
{
	Bank b[3];
	fstream f;
	f.open("bank.dat",ios::out|ios::binary|ios::in);
	for(int i=0;i<3;i++)
	{
		b[i].get();
		f.write((char*)&b[i],sizeof(b[i]));
	}
	cout<<"\nData Written Successfully";
	f.seekg(0);
	for(int i=0;i<3;i++)
	{
		f.read((char*)&b[i],sizeof(b[i]));
		b[i].display();
	}
	f.close();
	
}
