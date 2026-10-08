// Add employee 
// 1. add new
// 2. search specific
// 3. all employee

#include<iostream>
using namespace std;
class employee
{
	public:
		int em_id;
		string em_nam;
		float sal;
		
		void get()
		{
			cout<<"\nEnter Employee Name : ";cin>>em_nam;
			cout<<"\nEnter Employee ID : ";cin>>em_id;
			cout<<"\nEnter Salary : ";cin>>sal;
		}
		void display()
		{
			cout<<em_id<<"\t\t"<<em_nam<<"\t\t"<<sal;
		}
};
int main ()
{
	employee e[10];
	for (int i=0;i<3;i++)
	e[i].get();
	while(1)
	{
		int ch,ID,f=0;
		string name;
		float salary;
		cout<<"\n1.Add new employee\n2.Search for specific employee\n3.All employee\nENter your choice : ";cin>>ch;
		
		if(ch==1)
		{
			cout<<"\nName of employee : ";cin>>name;
			cout<<"\nEmployee ID : ";cin>>ID;
			cout<<"\nSalary : ";cin>>salary;
		}
		else if(ch==2)
		{
			cout<<"Enter Emplpyee ID : "<<ID;
			for (int i = 0;i<3;i++)
			{
				if (ID = e[i].em_id)
				{
					e[i].get();
					break;
				}
			}
			if(f=0)
			{
				cout<<"Invalid Input";
			}
		}
		else if(ch==3)
		{
			for(int i=0;i<3;i++)
			e[i].display();
		}
		else 
		{
			cout<<"Invalid Input";
		}
	}
}
