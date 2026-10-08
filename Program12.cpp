// find max of 2 num

/* #include<iostream>
using namespace std; 
int main ()
{
	int a,b;
	cout<<"Enter a : ";cin>>a;
	cout<<"\nEnter b :";cin>>b;
	
	if(a>b)
	{
		cout<<"a is greater";
	}
	else if (a<b)
	{
		cout<<"b is greater";
	}
	else 
	{
		cout<<"Both are equal";
	}
}
*/ 

// find max of 3 num

/*#include<iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"Enter a : ";cin>>a;
	cout<<"\nEnter b :";cin>>b;
	cout<<"\nEnter c : ";cin>>c;
	
	if (a>b && a>c)
	{
		cout<<"a is greatest";
	}
	else if(a<=b && b>=c)
	{
		cout<<"b is greatest";
	}
	else
	{
		cout<<"all are equal";
	}
}
*/

// check the num is even of not

/* #include<iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"Enter the value of a :";cin>>a;
	
	if (a%2 ==0)
	{
		cout<<"a is even num";
	}
	else if (a%2 !=0)
	{
		cout<<"a is off num";
	}
	else 
	{
		cout<<"a is 0";
	}
}
*/

// check the year is leap or not

/* #include<iostream>
using namespace std;
int main ()
{
	int yr;
	
	cout<<"Enter year : ";cin>>yr;
	
	if (yr%4 == 0)
	{
		cout<<"It's a leap year";
	}
	else 
	{
		cout<<"It's not a leap year";
	}
}
*/
// input num and check that it is divisible by 5 or 11 

/* #include<iostream>
using namespace std;
int main ()
{
	int num;
	
	cout<<"Enter the number : ";cin>>num;
	
	if (num%5 == 0 || num%11 == 0)
	{
		cout<<"Number is divisible by 5 and 11";
	}
	else if (num%5 == 0 || num%11 != 0)
	{
		cout<<"Number is divisible by 5 not by 11 ";
	}
	else if (num%5 != 0 || num%11 == 0)
	{
		cout<<"Number is divisible by 11 not by 5 ";
	}
	else 
	{
		cout<<"Number is not divisible by 5 neither by 11";
	}
}
*/

// enter digit and make the sum of the digits

/*#include<iostream>
using namespace std;
int main ()
{
	int dig,sum=0;
	
	cout<<"Enter No  : ";cin>>dig;
	
	while(dig>0)
	{
		sum = sum+dig%10;
		dig=dig/10;
	}
	cout<<"Sum of digits = "<<sum;
}
*/
// display all the num between 1 to n

#include<iostream>
using namespace std;
int main ()
{
	int sn;
	
	cout<<"Enter sn : ";cin>>sn;
	
	for (int i=1;i<=sn;i++)
	{
		cout<<""<<i;
	}
}
