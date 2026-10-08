#include<iostream>
using namespace std;
class bank
{
	public:
		int acc_no;
		string cus_nam;
		float bal;
	
	
		void get()
		{
			cout<<"\nEnter Account Number : ";cin>>acc_no;
			cout<<"\nEnter Customer Name : ";cin>>cus_nam;
			cout<<"\nEnter Opening balance : ";cin>>bal;
		}		
		void display ()
		{
			cout<<acc_no<<"\t"<<cus_nam<<"\t\t\t\t"<<bal<<endl;
		
		}
};
int main ()
{
	bank b[10];
	
	for(int i=0;i<3;i++)
	{
		b[i].get();
	}
	cout<<"acc_no\tcus_nam\t\t\t\tbal"<<endl;
	cout<<"\n---------------------------------------------------\n";
	for(int i=0;i<3;i++)
	{
		b[i].display();
		
	}
}
