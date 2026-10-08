/*
create new file-read data from file-write data inside file
update data in file-close file 

1.ofstream-first class to write data inside file 
2.ifstream-2nd class-read data from file 
3.fstream - used for both reading and writing 
*/
#include<fstream>
#include<iostream>

using namespace std;
int main()
{
	/*ofstream fout;
	fout.open("sample.txt");
	if(is_open(fout))
	{
	fout<<"Hello Wordl"<<endl;
	fout<<"Welcome to the world of FH"<<endl;
	fout.close();
	cout<<"\nData Written Successfully\n";
	}
	
	
	ifstream fin;
	fin.open("sample.txt");
	string s;
	
	
	
	while(getline(fin,s))
	{
		cout<<s<<endl;
	}
	fin.close();*/
	
	fstream f;
	f.open("sample.txt",ios::in | ios::out | ios::app );
	f<<"C++ Programming using File Handling";
	
	f.seekg(0);
	string s;
	while(getline(f,s))
	{
		cout<<s<<endl;
	}
	
	f.close();
}
	

