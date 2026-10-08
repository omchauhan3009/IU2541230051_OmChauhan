#include<iostream>
using namespace std;
class Patient
{
	public:
		int p_id,age;
		string name,disease;
		float bill;
		
		void get ()
		{
			cout<<"Enter Patient ID : ";cin>>p_id;
			cout<<"\nEnter Patient Name : ";cin>>name;
			cout<<"\nEnter Age : ";cin>>age;
			cout<<"\nEnter Disease : ";cin>>disease;
			cout<<"\nEnter Bill Amount : ";cin>>bill;
		}
		
		void display ()
		{
			cout<<"Patient ID = "<<p_id;
			cout<<"Patient Name = "<<name;
			cout<<"Age = "<<age;
			cout<<"Disease = "<<disease;
			cout<<"Bill Amount = "<<bill;
		}
};
int main ()
{
	Patient p[10];
	for (int i=0;i<3;i++)
	int ch,pid,ag,n,max_bill;
	p.get();
	while(1)
	{
		cout<<"Enter number of patient : ";cin>>n;
		
		cout<<"1.Display\n2.Search by Patient ID\n3.Higest Bill\n4.Senior Citizen\n5.Total hospital income\nEnter your choice : ";cin>>ch;
		if(ch==1)
		{
			for (int i = 0;i<n;i++)
			p.display();
		}
		else if(ch==2)
		{
			cout<<"Enter Patient ID = ";cin>>pid;
			for(int i=0;i<n;i++)
			{
				if (p[i].get() == pid)
				{
					p[i].display();
					cout<<"Patient found successfully";
				}
				else
				{
					cout<<"Patient not found";
				}
			}
		}
		else if(ch==3)
		{
			for(int i = 0;i<n;i++)
			{
				if(p[i].bill>max_bill)
				{
					cout<<"Higest bill = "<<max_bill;
				}
			}
		}
		else if(ch==4)
		{
			if (ag>=60)
			{
				cout<<"Patient is a senior citizen";
			}
			else 
			{
				cout<<"Patient is not a senior citizen";
			}
		}
		else if (ch==5)
		{
			for(int i=0;i<n;i++)
			total = p[i].bill;
			cout<<"Total bill = "<<total;
		}
		else 
		{
			cout<<"Invalid Input;"
		}
	}
}
