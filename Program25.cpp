#include<iostream>
using namespace std;
class bowler
{
	public:
		string fn,ln;
		int ob,mo,rg,wt;
		
		void get()
		{
			cout<<"Enter First name of bowler : ";cin>>fn;
			cout<<"\nEnter Last name of bowler : ";cin>>ln;
			cout<<"\nEnter number of Overs bowled : ";cin>>ob;
			cout<<"\nEnter number of Maiden Overs : ";cin>>mo;
			cout<<"\nEnter number of Runs given : ";cin>>rg;
			cout<<"\nEnter number of Wickets taken : ";cin>>wt;
		}
		void update ()
		{
			cout<<"\nEnter number of Overs bowled : ";cin>>ob;
			cout<<"\nEnter number of Maiden Overs : ";cin>>mo;
			cout<<"\nEnter number of Runs given : ";cin>>rg;
			cout<<"\nEnter number of Wickets taken : ";cin>>wt;
		}
		void display ()
		{
			cout<<"\nName = "<<fn<<ln;
			cout<<"\nOvers bowled = "<<ob;
			cout<<"\nMaiden Overs = "<<mo;
			cout<<"\nRuns given = "<<rg;
			cout<<"\nWickets taken = "<<wt;
		}
};
int main ()
{
	bowler b;
	b.get();
	b.update();
	b.display();
}
