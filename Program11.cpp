// Create class resort having data members room number customer name charges per day no of days stayed. Calculate function days * charges if it is >11000 then give discout of 5% otherwise no discount 
// get will read room numer name chagres and number days to stay 
// display will display entire bill including amount to be paid after discount 

#include<iostream>
using namespace std;
class resort
{
	public:
		int r_num;
		string cus_nam;
		int days;
		float ch_pernig;
		float discount,ta,na,charges;
		
		void get ()
		{
			cout<<"Enter Room number : ";cin>>r_num;
			cout<<"\nEnter the Name of the customer : ";cin>>cus_nam;
			cout<<"\nEnter number of days to stay : ";cin>>days;
			cout<<"\nEnter charges per night : ";cin>>ch_pernig;
		}
		void compute ()
		{
			if (days*charges > 11000)
			{
				discount = days*charges*0.05;
			
			}
			else 
			{
				discount=0;
			}
		}
		
		void display ()
		{
			cout<<"Name of the customer : "<<cus_nam;
			cout<<"\nNumber of days stayed : "<<days;
			cout<<"\nDiscount : "<<discount;
			
			ta = days*charges;
			na = (days*charges)-discount;
			cout<<"\nTotal amount = "<<ta;
			cout<<"\nNet amount = "<<na;
		};
};
	
int main ()
	{
			resort r;
			r.get();
			r.compute();
			r.display();
	}


	
