#include<iostream>
using namespace std;
class Methodoverloading
{
	public:
	float add(int a,int b)
	{
		return a+b;
	}
	
};
class Area :public Methodoverloading
{
	public:
		float add(float a,float b)
		{
			cout<<a<<"+"<<b<<"=";
			return a+b;
		}
};
int main()
{
	Area obj;
	cout<<obj.add(10,10.4f)<<endl;
	Methodoverloading obja;
	cout<<obja.add(10,10.4f);
	
}		


/* Function Overloading --> When two or more function share the same name it is called function overloading. But these function should differ in either 
 1. Number of parameters
 2. Type if parameters
 3. Order of parameters 
 void add(int a,int b)
{
	cout<<a+b;
}
void add (float a, float b)
{
	cout<<a+b;
}
*/ 
