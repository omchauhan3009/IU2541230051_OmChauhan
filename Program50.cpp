#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("Data3.txt",ios::out);
	fout<<"Welcome to world of CTAG";
	fout.close();
	cout<<"Done";
}
