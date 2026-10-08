#include<iostream>
using namespace std;
class bank
{
	public:
		int accno;
		string cust_nam;
		float opbal,dep,wit;
		
		void get()
		{
			cout<<"Enter account number : ";cin>>accno;
			cout<<"\nEnter Customer name : ";cin>>cust_nam;
			cout<<"\nEnter Opening Balance : ";cin>>opbal;
		}
		void deposite ()
		{
			cout<<"\nEnter amount to deposite : ";cin>>dep;
			opbal=opbal+dep;
		}
		void withdraw ()
		{
			cout<<"\nEnter the amount you want to withdraw : ";cin>>wit;
			opbal=opbal-wit;
		}
		void display ()
		{
			cout<<"\nAccount Number : "<<accno;
			cout<<"\nCustomer Name : "<<cust_nam;
			cout<<"\nCurrent Balance : "<<opbal;
			
		}
};

int main ()
{
	bank b[10];
	for(int i=0;i<3;i++)
	b[i].get();
	while(1)
	{
		int ch,f=0,ano;
		cout<<"\n1.Deposite\n2.Withdraw\n3.Display\n0.Exit\nEnter Your Choice = ";
		cin>>ch;
		/*if (ch==1)
		{
			cout<<"\nEnter Account No = ";
			cin>>ano;
			for(int i=0;i<3;i++)
			{
				if(ano==b[i].accno)
				{
					f=1;
					b[i].deposite();
					break;
					
				}
			}
			if(f==0)
			{
				cout<<"\nInvalid Account Number";
			}
			
		}*/
		if (ch==2)
		{
			cout<<"\nEnter the account number : ";cin>>ano;
			for (int i=0;i<3;i++)
			{
				if(ano==b[i].accno)
				{
					f=1;
					b[i].withdraw();
					break;
				}
			}
			if(f==0)
			{
				cout<<"\nInvalid account number";
			}
			
		}
		else if (ch==3)
		{
			for(int i=0;i<3;i++)
			b[i].display ();
		}
		else if(ch==0)
		{
			exit(0);
		}
		else 
		{
			cout<<"Invalid Input";
		}
	}
	
}
