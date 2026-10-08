#include<iostream>
using namespace std;
class bank
{
	public :
		int accno;
		string cust_nam;
		float opbal,dep,wit;
		
		void get ()
		{
			cout<<"Enter account number : ";cin>>accno;
			cout<<"\nEnter Customer name : ";cin>>cust_nam;
			cout<<"\nEnter Opening balance : ";cin>>opbal;
		}
		void deposite ()
		{
			cout<<"Enter the amount you want to deposite : ";cin>>dep;
			opbal=opbal+dep;
		}
		void withdraw ()
		{
			cout<<"Enter the amout you want to withdraw : ";cin>>wit;
			opbal=opbal-wit;
		}
		void display ()
		{
			cout<<"\nAccount Number : "<<accno;
			cout<<"\nCustomer Name : "<<cust_nam;
			cout<<"\nOpening Balance : "<<opbal;
		}
};

int main ()
{
	bank b;
	b.get();
	while(1)
	{
		int ch;
		cout<<"1.Deposite";
		cout<<"\n2. Withdraw";
		cout<<"\n3. Display";
		cout<<"\n4. Exit";
		cout<<"\nEnter your choice : ";
		cin>>ch;
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
			b.display();
		}
		else if (ch==0)
		{
			exit(0);
		}
		else 
		{
			cout<<"Invalid Input";
		}
	}
}
