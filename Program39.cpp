#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
	int rno,marks;
	string name;
	ofstream fout;
	/*fout.open("Student.txt");
	for (int i = 1; i<=5;i++)
	{
		cout<<"Enter Roll number : ";
		cin>>rno;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Marks : ";
		cin>>marks;
		
		fout<<rno<<"\t"<<name<<"\t"<<marks<<endl;
	}
	fout.close();
	cout<<"Data written successfully";*/
	ifstream fin;
	fin.open("Student.txt");
	string s;
	while(getline(fin,s))
	{
		cout<<s<<endl;
	}
	fin.close();
	
}
