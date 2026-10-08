// Q15 

/*#include<iostream>
using namespace std;
int main ()
{
	cout<<"Hello World!";
}
*/

// Q16 

/*#include<iostream>
using namespace std;
int main ()
{
	int A;
	cout<<"Enter A = ";cin>>A;
}
*/

// Q17 

/* #include<iostream>
using namespace std;
int main ()
{
	int A,B,Sum;
	
	cout<<"Enter the value of A : ";cin>>A;
	cout<<"\nEnter the value of B : ";cin>>B;
	
	Sum = A+B;
	
	cout<<"Addition of Numbers = "<<Sum;
}*/


// Q18 

/*#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor, quotient, remainder;

    cout << "Enter dividend: ";cin>>dividend;

    cout << "Enter divisor: ";cin>>divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "\nQuotient = " << quotient;
    cout << "\nRemainder = " << remainder;
}*/

//Q19

/*#include<iostream>
using namespace std;
int main()
{
	cout<<"Size of Float = "<<sizeof(float)<<" byte";
	cout<<"\nSize of Integer = "<<sizeof(int)<<" byte";
	cout<<"\nSize of Character = "<<sizeof(char)<<" byte";
	cout<<"\nSize of Double = "<<sizeof(double)<<" byte";
}
*/

// Q20

/*#include<iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"Enter a = ";cin>>a;
	cout<<"\nEnter b = ";cin>>b;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"After swap : ";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
	
}
*/

// Q21

/*#include<iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"Enter a number : ";cin>>num;
	
	if (num%2 == 0)
	{
		cout<<"It's a even number";
	}
	else if (num%2 != 0)
	{
		cout<<"It's not a even number";
	}
	else 
	{
		cout<<"It's 0";
	}
}*/

// Q22
/*#include<iostream>
using namespace std;
int main ()
{
	char ch;
	cout<<"Enter a character : ";cin>>ch;
	
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		cout<<"It's a vowel";
	}
	else 
	{
		cout<<"It's not a vowel";
	}
}*/

// Q23 

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
}*/

// Q24 

/*#include<iostream>
#include<math.h>
using namespace std;
int main ()

{
	int a,b,c,D,r1,r2;
	cout<<"Enter a : ";cin>>a;
	cout<<"\nEnter b : ";cin>>b;
	cout<<"\nEnter c : ";cin>>c;
	
	D = (b*b)-4*a*c;
	
	if (D>0)
	{
		r1=-b+sqrt(D)/(2*a);
		r2=-b-sqrt(D)/(2*a);
		cout<<"\nRoots are real and exist "<<r1<<r2<<endl;
	}
	else if(D==0)
	{
		r1=-b/(2*a);
		cout<<"\nRoots are equal and exists "<<r1;
	}
	else
	{
		cout<<"\nRoot does not exist";
	}
	
	
}
*/

// Q25 

/*#include<iostream>
using namespace std;
int main ()
{
	int num,sum;
	
	cout<<"Enter a number : ";cin>>num;
	
	for (int i=1;i<=num;i++)
	{
		sum = sum + i;
	}
	cout<<"Sum of natural numbers = "<<sum;
}
*/

// Q26 

/*#include<iostream>
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

// Q27 

/*#include<iostream>
using namespace std;
int main ()
{
	int num,fact=1;
	cout<<"Enter a number : ";cin>>num;
	
	for (int i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	cout<<"Factorial of a number = "<<fact;
}*/

// Q28 

/* #include<iostream>
using namespace std;
int main ()
{
	int n;
	cout<<"Enter a number : ";cin>>n;
	
	for (int i = 1;i<=10;i++)
	{
		cout<<n*i<<endl;
	}
}
*/

// Q29 

/* #include<iostream>
using namespace std;
int main ()
{
	int num,a,c,b;
	cout<<"Enter a number : ";cin>>num;
	
	for(int i=1;i<=num;i++)
	{
		cout<<""<<a;
		c=a+b;
		a=b;
		b=c;
	}
}
*/ 

// Q30

/* #include<iostream>
using namespace std;
int main ()
{
	int n;
	
	cout<<"Enter a number : ";cin>>n;
	
	
}*/

// Q32 

/*#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	cout<<"Enter a number : ";cin>>a;
	
	for (int i = a;i>=1;i--)
	{
		cout<<""<<i;
	}
}*/

// Q35

/*#include<iostream>
using namespace std;
int main ()
{
	char ch;
	cout<<"Enter a character : ";cin>>ch;
	
	cout<<"ASCII value = " <<int(ch);
	
}
*/
// Q36

/*#include<iostream>
using namespace std;
int main ()
{
	int num1,num2,mul;
	
	cout<<"Enter first number : ";cin>>num1;
	cout<<"\nEnter second number : ";cin>>num2;
	
	mul = num1 * num2;
	
	cout<<"Multiplication of two numbers = "<<mul;	
}
*/ 

// Q37 
	
/*#include<iostream>
using namespace std;
int main ()
{
	int num,rem,rev,temp;
	cout<<"Enter a number : ";cin>>num;
	
	temp = num;
	while(num!=0)
	{
		rem = num % 10;
		rev = (rev*10)+rem;
		num = num/10;
		
	}
	if (temp==rev)
	{
		cout<<"It's a palindrome num";
	}
	else 
	{
		cout<<"It's not a palindrome num";
	}
}
*/

// Q38

/* #include<iostream>
using namespace std;

int main ()
{
	int num;
	
	cout<<"Enter a number : ";cin>>num;
	
	if (num <= 1)
	{
		cout<<"Not possible";
	}
	else
	{
		for (int i=2;i<num;i++)
		{
			if (num % i == 0)
			{
				cout<<"It's not a prime number ";
			}
		}
		cout<<"Its a prime number";
	}
}*/

// Q39 

#include<iostream>
using namespace std;
int main ()
{
	int sr,er;
	
	cout<<"Enter starting range : ";cin>>sr;
	cout<<"\nEnter Ending range : ";cin>>er;
	
	
}
