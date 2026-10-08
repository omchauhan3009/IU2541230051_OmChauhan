#include<iostream>
using namespace std;
class student 
{
	public:
		int st_id;
		string name;
		string cou;
		
	void get()
	{
		cout<<"\nEnter Student ID : ";cin>>st_id;
		cout<<"\nEnter Name of the student : ";cin>>name;
		cout<<"\nEnter Course : ";cin>>cou;
	}
	
	void display ()
	{
		cout<<"\nStudent ID = "<<st_id;
		cout<<"\nName = "<<name;
		cout<<"\nCourse = "<<cou;
	}
};
int main ()
{
	student s1,s2,s3;
	s1.get();
	s1.display();
	s2.get();
	s2.display();
	s3.get();
	s3.display();
}
