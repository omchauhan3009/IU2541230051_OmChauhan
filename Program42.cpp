#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
	int c=0;
	int ch;
	ofstream f;
	f.open("Story.txt");
		f<<"Story 2: The Thirsty Crow \nOn a sunny day, a crow feels thirsty and goes in search of water near the forest. It flew across the jungle but was still not able to find a water source anywhere. Suddenly it’s eyes fell on a jug of water. \nWhen it reached the jug to drink, it noticed that the water level was too low and the opening of the jug was narrow. The crow’s beak could not reach it. Eventually, it came up with an idea. The crow started collecting pebbles around the jug and dropped them into the water. \nSlowly, the water level started rising. Finally, the crow quenched its thirst. \nMoral: Where there is a will, there is a way. It teaches the morals of perseverance and problem solving."<<endl;
		f.close();
		cout<<"Data written Successfully!!!";
		
	ifstream fin;
	fin.open("Story.txt");
	string a,words;
	cout<<"1. Number of character\n2. Number of Words\n3. Number of Lines\nEnter your choice : ";cin>>ch;
	{
		if(ch==1)
		{
			while(fin>>a)
			{
				c++;
			}
			cout<<"Total Character = "<<c;
		}
		else if(ch==2)
		{
			while(fin>>words)
			{
				c++;
			}
			cout<<"\nTotal Words : "<<c;
		}
		else if (ch==3)
		{
			string s;
			while(getline(fin,s))
			{
				c++;
				// cout<<s<<endl;
			}
			cout<<"\nTotal Lines : "<<c;
		}
		else
		{
			cout<<"Invalid choice";
		}
	}

	
	fin.close();
	
}
