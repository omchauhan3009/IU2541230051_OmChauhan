/*#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int m,n=2,num;

cout<<"Enter the value of m : ";
cin>>m;

num = pow(m,n);

cout<<"The required num = "<<num;
}
*/

#include <iostream>
using namespace std;
double power(double m,int n=2)
{
    double result=1;

    for (int i=1;i<=n;i++)
    {
        result=result*m;
    }
    return result;
}

int main()
{
    double m;
    int n,choice;
    cout<<"Enter the value of m = ";
    cin>>m;
    cout<<"1. Calculate Square (Default Power = 2)"<<endl;
    cout<<"2. Enter Your Own Power"<<endl;
    cout<<"Enter your choice = ";
    cin>>choice;

    if(choice==1)
    {
        cout<<"Result = "<<power(m)<<endl;
    }
    else if(choice==2)
    {
        cout<<"Enter the value of n = ";
        cin>>n;
        cout<<"Result = "<<power(m, n)<<endl;
    }
    else
    {
        cout<<"Invalid Choice!"<<endl;
    }
    return 0;
} 
