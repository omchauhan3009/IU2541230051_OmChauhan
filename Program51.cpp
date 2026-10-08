#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
	ofstream fout;
	fout.open("Numbers.txt",ios::out);
	for(int i = 1;i<=100;i++)
	{
		fout<<i<<endl;	
	}
	fout.close();
	cout<<"Done";
}

