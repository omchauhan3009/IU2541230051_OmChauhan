#include<iostream>
using namespace std;
class bank
{
	public:
		int bn,pri,nc,is_c,re_c;
		string book_nam,aut,pub;
		
		void get()
		{
			cout<<"Enter Book number : ";cin>>bn;
			cout<<"\nEnter Book name : ";cin>>book_nam;
			cout<<"\nEnter name of author : ";cin>>aut;
			cout<<"\nEnter name of the publisher : ";cin>>pub;
			cout<<"\nEnter price of a book : ";cin>>pri;
			cout<<"\nEnter number of copies : ";cin>>nc;
		}
		void issue_book()
		{
			cout<<"\nEnter Copies you want to Issue = ";
			cin>>is_c;
			if(nc>is_c)
			{
				nc=nc-is_c;
				cout<<"\nBook Issued Successfully ";
			}
			else
			{
				cout<<"\nNot Available ";
			}
		}
		void return_book()
		{
			cout<<"\nEnter Copies you want to return = ";
			cin>>re_c;
			nc=nc+re_c;
			cout<<"\nBook Returned Successfully....";
			cout<<"\nUpdated Stock = "<<nc;
		}
		void display()
		{
			cout<<"\nBook Number = "<<bn;
			cout<<"\nBook name = "<<book_nam;
			cout<<"\nAuthor = "<<aut;
			cout<<"\nPublisher = "<<pub;
			cout<<"\nPrice = "<<pri;
			cout<<"\nCopies = "<<nc;
			
		}
};
int main()
{
	bank b;;
	b.get();
	b.issue_book();
	b.return_book();
	b.display();
}
