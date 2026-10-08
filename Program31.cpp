#include<iostream>
using namespace std;
class publication
{
	public:
		float pr;
	string book;
	
	void get()
	{
		cout<<"Enter name  : ";cin>>book;
		cout<<"\nEnter price  : ";cin>>pr;
	}
};
class book : public publication 
{
	public:
		int pc;
		
		void get()
		{
			cout<<"Enter page count : ";cin>>pc;
			publication :: get();
		}
		void display()
		{
			cout<<"Page count = "<<pc;	
		}
		
};
class tape : public publication
{
	public:
		int pt;
		
		void get()
		{
			cout<<"Enter Playing time : ";cin>>pt;
			publication :: get();
		}
		void display ()
		{
			cout<<"Playing time = "<<pt;
		}
		
};
int main ()
{
	book b;
	tape t;
	b.get();
	b.display();
	t.get();
	t.display();
}
