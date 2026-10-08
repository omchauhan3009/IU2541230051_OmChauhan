#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int c=x;x=y;y=c;
}
int main()
{
    int x=12,y=20;
    
    swap(x,y);
    cout<<"\nValue of x = "<<x<<"\nValue of y = "<<y;
}
