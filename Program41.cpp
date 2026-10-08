#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
	int c=0;
/*	ofstream f;
	f.open("Poem.txt");
		f<<"Golden light wakes up the skies,\n Soft wind moves the quiet trees.\n Morning birds begin to rise,\nDancing on the gentle breeze.\nShadows fade and drift away,\nFlowers open wide and gleam.\nWelcome to a bright new day,\nshining like a happy dream.\nTime moves slow and feels so right,\nbathed in pure and warm delight."<<endl;
		f.close();
		cout<<"Data written Successfully!!!";*/
		
	ifstream fin;
	fin.open("Poem.txt");
	char ch;
	
	while(fin>>ch)
	{
		c++;
		cout<<ch<<endl;
	}
	cout<<"\nTotal Character = "<<c;
	fin.close();
	
}
