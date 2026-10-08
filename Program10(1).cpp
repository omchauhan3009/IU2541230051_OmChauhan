// create class bank data members account number customer name opening balance method get data display get read data of all 3 member and display will display all data on screen
#include<iostream>
using namespace std;
class bank
{
	public:
	int acc_no;
	string cus_nam;
	float op,dep,ub,wd;
	
	
	void getdata()
	{
		cout<<"Enter Account number : ";cin>>acc_no;
		cout<<"\nEnter Customer Name : ";cin>>cus_nam;
		cout<<"\nEnter Opening balance : ";cin>>op;
	}
	void deposite()
	{
		cout<<"\nEnter the Deposit amount : ";cin>>dep;
		op = op + dep;
		cout<<"\nUpdated balance = "<<op;
	}
	void withdraw()
	{
		cout<<"\nEnter amount to withdraw : ";cin>>wd;
		if (wd<op)
		{
			cout<<wd;
		}
		else
		{
			cout<<"Insufficient Balance";
		}
	}

	
	void display ()
	{
		cout<<"\nAccount Number = "<<acc_no;
		cout<<"\nCustomer Name = "<<cus_nam;
		cout<<"\nOpening Balance = "<<op;
	}
};

int main ()
{
	bank b;b.getdata();
	int ch;
	while(1)
	{
		cout<<"\n-----Menu----\n";
		cout<<"1.Deposite";
		cout<<"\n2.Withdraw";
		cout<<"\n3.Display";
		if (ch==1)
		{
			b.deposite();
		}
		else if (ch==2)
		{
			b.withdraw();
		}
		else if (ch==3)
		{
			b.display ();
		}
		else
		{
			cout<<"Invalid Input";
		}
	}
}
