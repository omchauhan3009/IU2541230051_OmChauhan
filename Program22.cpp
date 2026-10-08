// create class bus data members No of adult no of kids from two distance 
// get function will read data from user 
// Calculate method which calculate price according to distance 
// <= 100 km --> Adult 300, kids 200
// 100 - 300 km --> adult 500,kids 300
// >300 km --> adult 1000, kids 700
// display method will display all the members everyrthing including total amount to pay

#include<iostream>
using namespace std;
class bus 
{
	public:
		int na,nk,dis,ad_pr,kid_pr,TA;
		
		void get()
		{
			cout<<"Enter number of adults : ";cin>>na;
			cout<<"\nEnter number of kids : ";cin>>nk;
			cout<<"\nEnter distance between 2 places : ";cin>>dis;
		}
		void calculate()
		{
			if(dis<=100)
			{
				ad_pr=300;kid_pr=200;
			}
			else if (dis >= 100 && dis<=300)
			{
				ad_pr=500;
				kid_pr=300;
			}
			else
			{
				ad_pr=1000;
				kid_pr=700;
			}
		}
		void display()
		{
			cout<<"\nNumber of adult = "<<na;
			cout<<"\nNumber of kids = "<<nk;
			cout<<"\nDistance = "<<dis;
			
			TA = na*ad_pr+nk*kid_pr;
			
			cout<<"\nTotal amount = "<<TA;
		}
};

int main ()
{
	bus b;
	b.get();
	b.calculate();
	b.display();
}
