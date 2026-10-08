#include <iostream>
using namespace std;

class Student
{
    int rno;
    string name;
    int sci,maths,eng,cpp,guj,tot;

public:
    void getData()
    {
        cout<<"Please Enter Your Roll Number = ";
        cin>>rno;

        cout<<"Please Enter Your Name = ";
        cin>>name;

        cout<<"Please Enter Your Science Marks = ";
        cin>>sci;

        cout<<"Please Enter Your Mathematics Marks = ";
        cin>>maths;

        cout<<"Please Enter Your English Marks = ";
        cin>>eng;

        cout<<"Please Enter Your C++ Marks = ";
        cin>>cpp;

        cout<<"Please Enter Your Gujarati Marks = ";
        cin>>guj;
    }

    void Total()
    {
        tot=sci+maths+eng+cpp+guj;
        cout<<"Total Marks Calculated Successfully!"<<endl;
    }

    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Roll Number : " << rno<< endl;
        cout << "Name        : " << name << endl;
        cout << "Science     : " << sci<< endl;
        cout << "Mathematics : " << maths << endl;
        cout << "English     : " << eng<< endl;
        cout << "C++         : " << cpp << endl;
        cout << "Gujarati    : " << guj<< endl;
        cout << "Total Marks : " << tot<< endl;
    }
};

int main()
{
    Student s;
    int choice;

    while (1)
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Enter Student Details" << endl;
        cout << "2. Calculate Total" << endl;
        cout << "3. Display Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.getData();
            break;

        case 2:
            s.Total();
            break;

        case 3:
            s.display();
            break;

        case 4:
            cout << "Program Ended!" << endl;
            return 0;

        default:
            cout << "Invalid Choice!" << endl;
        }
    }
}
