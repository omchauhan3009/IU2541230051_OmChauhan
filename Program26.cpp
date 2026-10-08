#include<iostream>
using namespace std;
class student
{
	public:
		
		int admno;
		float eng,math,science,total;
		string sname;
	
	void get()
	{
		cout<<"Enter Admission number : ";cin>>admno;
		cout<<"\nEnter name of student : ";cin>>sname;
		cout<<"\nEnter English marks : ";cin>>eng;
		cout<<"\nEnter Maths marks : ";cin>>math;
		cout<<"\nEnter Science marks : ";cin>>science;
		
		total = eng+math+science;
	}
	void display()
	{
		cout<<"Admission Number = "<<admno;
		cout<<"\nName of Student = "<<sname;
		cout<<"\nEnglish Marks = "<<eng;
		cout<<"\nMaths Marks = "<<math;
		cout<<"\nScience Marks = "<<science;
		cout<<"\nTotal marks = "<<total;
	}
};
int main ()
{
	student s;
	s.get();
	s.display();
}
