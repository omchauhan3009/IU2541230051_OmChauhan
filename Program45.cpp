#include<iostream>
#include<fstream>
using namespace std;

class bank
{
	private:
		int accno;
		string name;
		int opbalance;
	
	public:
		void get()
		{
			cout<<"Enter account number : ";cin>>accno;
			cout<<"\nEnter name : ";cin>>name;
			cout<<"\nEnter Opening balance : ";cin>>opbalance;
			if(opbalance<1000)
			{
				cout<<"Minimum OP Balnce should be 1000";
			}
		}
		void deposite (float amount)
		{
			
			cout<<"Amount deposited successfully!!";
			opbalance = opbalance + amount;
			cout<<"Current Balance = "<<opbalance;
		}
		void withdraw (float amount)
		{
			if(opbalance-amount >= 1000)
			{
				
				cout<<"Amount withdraw successfully!!";
				opbalance = opbalance - amount;
				cout<<"Current Balance = "<<opbalance;
			}
			else
			{
				cout<<"Insufficient balance";
			}
		} 
		void display()
		{
			cout<<"Account Number = "<<accno;
			cout<<"\nName = "<<name;
			cout<<"\nOpening balance = "<<opbalance;
		}
		void save()
		{
			ofstream fout("bank.temp",ios::binary| ios::app);
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void displayfile()
		{
			bank b;
			
			ifstream fin("bank.temp",ios::binary);
			
			while(fin.read((char*)&b,sizeof(b)))
			{
				b.display();
			}
			fin.close();
		}
};
int main()
{
	bank b;
	int ch;
	float amt;
	for (int i =0;i<10;i++)
	b.get();
	cout<<"\n1.Deposite\n2.Withdraw\n3.Display\n4.Exit\nEnter your choice : ";cin>>ch;
	
	if(ch==1)
	{
		cout<<"Enter the amount you want to deposite = ";cin>>amt;
		b.deposite(amt);
	}
	else if(ch==2)
	{
		cout<<"Enter the amount you want to withdraw = ";cin>>amt;
		b.withdraw(amt);
	}
	else if(ch==3)
	{
		b.display();
	}
	else 
	{
		cout<<"Program Ended!!";
	}
	
}
