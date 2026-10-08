#include<iostream>
using namespace std;
class run
{
	public:
		string fn,ln;
		int runs,fours,six,tr;
		
		void get()
		{
			cout<<"Enter First name of the player : ";cin>>fn;
			cout<<"\nEnter Last name of the player : ";cin>>ln;
			cout<<"\nEnter number of runs scored : ";cin>>runs;
			cout<<"\nEnter number of fours : ";cin>>fours;
			cout<<"\nEnter number of six : ";cin>>six;
		}
		void update()
		{
			tr=(fours*4)+(six*6);
			cout<<"Total runs = "<<tr;
		}
		void display()
		{
			cout<<"\nFirst name = "<<fn;
			cout<<"\nLast name = "<<ln;
			cout<<"\nRuns scored = "<<runs;
			cout<<"\nFours = "<<fours;
			cout<<"\nSix = "<<six;
		}
};
int main ()
{
	run r;
	r.get();
	r.update();
	r.display();
}
