#include<iostream>
using namespace std;
class student
{
	public:
		int st_id;
		string nam,cou;
		
		student()
		{
			cout<<"Enter student ID : ";cin>>st_id;
			cout<<"\nEnter name of the student : ";cin>>nam;
			cout<<"\nEnter course : ";cin>>cou;
		}
		void display()
		{
			cout<<"Student ID : "<<st_id;
			cout<<"\nName of Student : "<<nam;
			cout<<"\nCourse : "<<cou;
		}
};
int main ()
{
	student s,s1,s2;
	s.display();
	s1.display();
	s2.display();
}
