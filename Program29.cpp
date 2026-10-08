#include<iostream>
using namespace std;
class Book
{
	public:
		string book_name;
		int bn,price,nc,up,restore;
		
		void get()
		{
			cout<<"Enter Book Number : ";cin>>bn;
			cout<<"\nEnter Book Name : ";cin>>book_name;
			cout<<"\nEnter Price of each book : ";cin>>price;
			cout<<"\nEnter Number of Copies : ";cin>>nc;
		}
		void stock()
		{
			cout<<"\nEnter number of books you want to purchase : ";cin>>up;
			nc = nc - up;
		}
		void restock()
		{
			cout<<"\nEnter number of books you want to restore : ";cin>>restore;
			nc = nc + up;
		}
		void display ()
		{
			cout<<"Book Number = "<<bn;
			cout<<"\nBook Name = "<<book_name;
			cout<<"\nPrice = "<<price;
			cout<<"\nNumber of copies = "<<nc;
			
		}
};
int main ()
{
	Book b[10];
	for(int i = 0;i<3;i++)
	b[i].get();
	while(1)
	{
		int ch,f=0,n,q;
		cout<<"1.Add book\n2. Generate bill\n3. Add stock\4. Exit\nEnter your choice :  ";cin>>ch;
		if(ch==1)
		{
			for(int i = 0;i<3;i++)
			b[i].stock();
		}
		else if(ch==2)
		{
			for (int i=0;i<3;i++)
			{
				cout<<"\nEnter book number : ";cin>>n;
				if(n==b[i].bn)
				{
					cout<<"\nBook Found";
					cout<<"\nEnter Qty = ";cin>>q;
					f=1;
					b[i].nc=b[i].nc-q;
					b[i].display();
					break;
				}
				
			
			}
			if(f==0)
			{
				cout<<"\nNo Record Found";
			}
		}
		else if(ch==3)
		{
			for(int i = 0;i<3;i++)
			b[i].restock();
		}
		else if (ch==4)
		{
			exit(0);
			
		}
		else 
		{
			cout<"Invalid input";
		}
	}
}
