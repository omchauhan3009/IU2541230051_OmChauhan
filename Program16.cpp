// press 1 check balance 
// press 2 deposite
// press3 withdraw
// press 4 display all customer
// press 5 exit

#include<iostream>
using namespace std;
class bank
{
	public:
		int acc_no;
		float bal,dep,wit;
		string cus_nam;
		
		void get()
		{
			cout<<"\nEnter Account Number : ";cin>>acc_no;
			cout<<"\nEnter Customer Name : ";cin>>cus_nam;
			cout<<"\nEnter Opening Balance : ";cin>>bal;
		}
		void deposite()
		{
			cout<<"\nEnter the amount you want to deposite : ";cin>>dep;
			bal = dep+bal;
		}
		void withdraw ()
		{
			cout<<"\nEnter the amount you want to withdraw : ";cin>>wit;
			bal = bal-wit;
		}
		void display()
		{
			cout<<acc_no<<"\t\t"<<cus_nam<<"\t\t\t"<<bal;
		}
		
};
int main ()
{
	bank b[10];
	for (int i=0;i<3;i++)
	b[i].get();
	while(1)
	{
		int ch,acc_no,f=0,bal;
		cout<<"\n1.Check Balance\n2. Deposite\n3. Withdraw\n4. Display\n5. Exit\n Enter Your Choice: ";
		cin>>ch;
		if(ch==1)
    	{
        cout << "\nEnter account number: ";
        cin >> acc_no;

        for(int i=0;i<3;i++)
        {
            if(acc_no==b[i].acc_no)
            {
                cout << "\nYour Balance = " << b[i].bal;
                f=1;
                break;
            }
        }
    	}
		else if(ch==2)
		{
			cout<<"\nEnter the account number : "<<acc_no;
			for (int i = 0;i<3;i++)
			{
				if(acc_no==b[i].acc_no)
				{
					b[i].deposite();
					break;
				}
			}
			if(f==0)
			{
				cout<<"\nNot found";
			}
		}
		else if(ch==3)
		{
			cout<<"\nEnter the account number : "<<acc_no;
			for(int i=0;i<3;i++)
			{
				if(acc_no==b[i].acc_no)
				{
					b[i].withdraw();
					break;
				}
			}
			if(f==0)
			{
				cout<<"\nNot found";
			}
		}
		else if(ch==4)
		{
			for(int i=0;i<3;i++)
			b[i].display();
		}
		else if(ch==5)
		{
			exit(5);
		}
		else 
		{
			cout<<"\nInvalid Input";
		}
	}
}
