#include<iostream>
#include<fstream>
using namespace std;
class resort
{
    
    int room_no,adult,kids,nights,price,total;
    string name,room;
    float gst,net;
    public: 
    void get()
    {
    cout<<"enter room number:"; 
    cin>>room_no;
    cout<<"enter room type(suite/super delux/delux):";
    cin>>room;
    cout<<"enter number of adults:";
    cin>>adult;
    cout<<"enter number of kids:";
    cin>>kids;
    cout<<"enter number of nights:";
    cin>>nights;
    cout<<"enter name :";
    cin>>name;
    if(room=="suite")
    price=10000;
    else if(room=="super delux")
    price=7500;
    else if(room=="delux")
    price=5000;
    else
    price=0;
    total= price*nights;
    gst=total*0.18;
    net=total+gst;
    }
    void display()
    {
        cout<<"\n-----BILL-----";
        cout<<"\nroom number:"<< room_no;
        cout<< "\nname:"<< name;
        cout<< "\nadult:"<< adult;
        cout<< "\nkids:"<< kids;
        cout<< "\nroom type:"<< room;
        cout<< "\nnights:"<< nights;
        cout<< "\nroom charge:"<< total;
        cout<< "\ngst (18%):"<< gst;
        cout<< "\ntotal bill:"<< net;
    }
};
int main()
{
    resort r[3];
    fstream f;
    f.open("resort.sam",ios::out|ios::binary|ios::in);
    for (int i = 0;i<3;i++)
    {
    	r[i].get();
    	f.write((char*)&r[i],sizeof(r[i]));
	}
	f.seekg(0);
	for(int i=0;i<3;i++)
	{
		f.read((char*)&r[i],sizeof(r[i]));
		r[i].display();
	}
	f.close();
}
