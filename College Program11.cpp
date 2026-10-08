#include<iostream>
using  namespace std;
int main()
{
	char ch;
	char name[50];
	/*cout.put('O');
	cout.put('\n');
	cout<<"Enter one character : ";cin.get(ch);
	cout<<"You entered : ";cout.put(ch);*/
	cin.ignore();
	cout<<"Enter your full name : ";cin.getline(name,50);
	cout<<"Your name is : ";
	cout<<name<<'\n';
	
}

