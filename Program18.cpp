/* 
ABC int comppny wans to crate a billing ststem with login 
User ID Admin 
Pass Admin123
2. After login it disply five diff items with their price 
calculate total amount apply GST 18% and display net payable amount 

3 attempts for login allowed on the failure program exit
*/ 

#include<iostream>
using namespace std;
int main ()
{
	string UI,Pass,User_ID="admin",Password="admin123";
	int TA,NA,NPA,attempt;

	
	
	
	
	for(attempt = 1;attempt<=3;attempt++)
	{
		cout<<"Enter User ID : ";cin>>UI;
		cout<<"\nEnter Pass : ";cin>>Pass;
		
		if(UI == User_ID && Pass == Password)
		{
			cout<<"Login Successful";
			cout<<"\nPen = Rs 20";
			cout<<"\nPencil = Rs 10";
			cout<<"\nScale = Rs 10";
			cout<<"\nBook = Rs 70";
			cout<<"\nGeometry Box = Rs 100";
			
			TA = 210;
			NA = 0.18 * TA;
			NPA = TA - NA;
			cout<<"\nNet Payable amount = "<<NPA;
			break;
		}
		else 
		{
			cout<<"Invalid User ID or Password ";
		}
	}
	
	/*if(User_ID == UI && Password == Pass)
	{
		cout<<"Login Successful";
	}
	else if(User_ID != UI && Password == Pass )
	{
		cout<<"Login Unsuccessful";
	}
	else
	{
		cout<<"Login Unsuccessful";
	}*/
}
