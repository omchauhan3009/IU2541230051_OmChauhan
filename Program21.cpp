#include<iostream>
using namespace std;
class account
{
	public:
		int acc_no;
		string cus_nam;
		float bal;
		
		account()
		{
			cout<<"Enter Account Number : ";cin>>acc_no;
			cout<<"\nEnter Customer name : ";cin>>cus_nam;
			cout<<"\nEnter Balance : ";cin>>bal;
		}
		void display ()
		{
			cout<<"Account Number = "<<acc_no;
			cout<<"\nCustomer Name = "<<cus_nam;
			cout<<"\nBalance = "<<bal;
			
			if(bal<1000)
			{
				cout<<"Minimum Balance Warning";
			}
		}
};

int main ()
{
	account a,a1,a2;
	a.display();
	a1.display();
	a2.display();
}
