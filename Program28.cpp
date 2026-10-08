#include<iostream>
using namespace std;

class publication
{
	public:
		string book;
		float price;
		
		void get(){
			cout<<"Enter name of book : ";cin>>book;
		cout<<"\nEnter price of book : ";cin>>price;			
		}
		
};

class book:public publication
{
	public:
		int pc;
		void get()
		{
				publication::get();
				cout<<"Enter page count : ";
				cin>>pc;
		}
		void display()
		{
			cout<<"Page count = "<<pc;
		}
	
		
};
class tape:public publication 
{
	public:
		float pt;
		void get()
		{
			publication :: get();
			cout<<"Enter playing time : ";cin>>pt;
		}
		void display()
		{
			cout<<"Playing time = "<<pt;
		}
};

int main ()
{
	book b;tape t;
	b.get();
	b.display();
	t.get();
	t.display();
}
