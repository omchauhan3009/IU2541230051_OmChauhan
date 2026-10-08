#include<iostream>
using namespace std;
class Student
{
	public:
		int rollno,s1,s2,s3,s4,s5,Total;
		string name;
		
		void get()
		{
			cout<<"Enter Roll Number : ";cin>>rollno;
			cout<<"\nEnter Name of the student : ";cin>>name;
			cout<<"\nEnter marks of 5 subjects : ";cin>>s1>>s2>>s3>>s4>>s5;
			
			Total = s1+s2+s3+s4+s5;
		}
		void display ()
		{
			cout<<"\nRoll number = "<<rollno;
			cout<<"\nName = "<<name;
			cout<<"\nMarks = "<<s1<<s2<<s3<<s4<<s5;
			cout<<"\nTotal marks = "<<Total;
		}
};
int main ()
{
	Student s;
	s.get();
	s.display();
}
