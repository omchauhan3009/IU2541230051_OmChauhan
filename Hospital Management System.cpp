#include<iostream>
using namespace std;
class HMS{
    public:
    void get(){
        
    }
    void display(){
        
    }
};
class person : public HMS{
  public:
  int age;
  string name,gender;
  
  void get(){
      HMS :: get();
      cout<<"\nEnter the Name of the Person : ";
      cin>>name;
      cout<<"\nEnter the Gender of the Person : ";
      cin>>gender;;
      cout<<"Enter the age of the Person : ";
      cin>>age;
  }
  void display(){
      HMS :: display();
      cout<<"\nThe name of the person : "<<name;
      cout<<"\nThe Gender of the person : "<<gender;
      cout<<"\nThe Age of the person : "<<age;
  }
};
class patient : public person{
  public:
  int patientId;
  string disease;
  
  void get(){
      person :: get();
      cout<<"\nEnter the patientId of the patient : ";
      cin>>patientId;
      cout<<"\nEnter the disease through which the patient is suffering : ";
      cin>>disease;
  }
  void display(){
      person :: display();
      cout<<"\nEnter the patientId of the patient : "<<patientId;
      cout<<"\nEnter the disease through which the patient is suffering : "<<disease;
  }
};
class doctor : public person{
  public:
  int doctorId;
  string specialisation;
  
  void get(){
      person :: get();
      cout<<"\nEnter the doctorId of the doctor : ";
      cin>>doctorId;
      cout<<"\nEnter the specialisation of the doctor: ";
      cin>>specialisation;
  }
  void display(){
      person :: display();
           cout<<"\nEnter the doctorId of the doctor : "<<doctorId;
      cout<<"\nEnter the specialisation of the doctor: "<<specialisation;
  }
};
class staff : public person{
  public:
  int staffId;
  
  void get(){
      person :: get();
      cout<<"\nEnter the staffId of the staff : ";
      cin>>staffId;
    
  }
  void display(){
      person :: display();
           cout<<"\nEnter the staffId of the staff : "<<staffId;
  }
};
class nurse : public staff{
  public:
  void get(){
      staff :: get();
  }

  void display(){
      staff :: display();
         cout<<"\nThe salary of the nurse is : "<<15000;
  }
};
class receptionist : public staff{
  public:
  void get(){
      staff :: get();
  }

  void display(){
      staff :: display();
         cout<<"\nThe salary of the receptionist is : "<<25000;
  }
};
class pharmacist : public staff{
  public:
  void get(){
      staff :: get();
  }

  void display(){
      staff :: display();
         cout<<"\nThe salary of the pharmacist is : "<<20000;
  }
};
class room : public HMS{
  public:
  
  void get(){
      HMS :: get();
    
  }
  void display(){
      HMS :: display();
  }
};
class generalroom : public room{
  public:
  void get(){
      room :: get();
  }

  void display(){
      room :: display();
         cout<<"\nThe type of room is General Room...  ";
  }
};
class privateroom : public room{
  public:
  void get(){
      room :: get();
  }

  void display(){
      room :: display();
         cout<<"\nThe type of room is Private Room...  ";
  }
};
class ICUroom : public room{
  public:
  void get(){
      room :: get();
  }

  void display(){
      room :: display();
         cout<<"\nThe type of room is ICU Room...  ";
  }
};
class bill : public HMS{
  public:
  
  void get(){
      HMS :: get();
    
  }
  void display(){
      HMS :: display();
  }
};
class cashpayment : public bill{
  public:
  void get(){
      bill :: get();
  }

  void display(){
      bill :: display();
         cout<<"\nThe type of payment method is cashpayment...  ";
  }
};
class cardpayment : public bill{
  public:
  void get(){
      bill :: get();
  }

  void display(){
      bill :: display();
         cout<<"\nThe type of payment method is cardpayment...  ";
  }
};
class UPIpayment : public bill{
  public:
  void get(){
      bill :: get();
  }

  void display(){
      bill :: display();
         cout<<"\nThe type of payment method is UPIpayment...  ";
  }
};
int main()
{
    int choice;

    do
    {
        cout << "\n      HOSPITAL MANAGEMENT SYSTEM";
        cout << "\n1. Patient";
        cout << "\n2. Doctor";
        cout << "\n3. Nurse";
        cout << "\n4. Receptionist";
        cout << "\n5. Pharmacist";
        cout << "\n6. General Room";
        cout << "\n7. Private Room";
        cout << "\n8. ICU Room";
        cout << "\n9. Cash Payment";
        cout << "\n10. Card Payment";
        cout << "\n11. UPI Payment";
        cout << "\n12. Exit";
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                patient p;
                p.get();
                cout << "\n\n----- Patient Details -----";
                p.display();
                break;
            }

            case 2:
            {
                doctor d;
                d.get();
                cout << "\n\n----- Doctor Details -----";
                d.display();
                break;
            }

            case 3:
            {
                nurse n;
                n.get();
                cout << "\n\n----- Nurse Details -----";
                n.display();
                break;
            }

            case 4:
            {
                receptionist r;
                r.get();
                cout << "\n\n----- Receptionist Details -----";
                r.display();
                break;
            }

            case 5:
            {
                pharmacist p;
                p.get();
                cout << "\n\n----- Pharmacist Details -----";
                p.display();
                break;
            }

            case 6:
            {
                generalroom g;
                g.get();
                cout << "\n\n----- Room Details -----";
                g.display();
                break;
            }

            case 7:
            {
                privateroom pr;
                pr.get();
                cout << "\n\n----- Room Details -----";
                pr.display();
                break;
            }

            case 8:
            {
                ICUroom i;
                i.get();
                cout << "\n\n----- Room Details -----";
                i.display();
                break;
            }

            case 9:
            {
                cashpayment c;
                c.get();
                cout << "\n\n----- Payment Details -----";
                c.display();
                break;
            }

            case 10:
            {
                cardpayment c;
                c.get();
                cout << "\n\n----- Payment Details -----";
                c.display();
                break;
            }

            case 11:
            {
                UPIpayment u;
                u.get();
                cout << "\n\n----- Payment Details -----";
                u.display();
                break;
            }

            case 12:
            {
                cout << "\nThank You for using Hospital Management System.";
                break;
            }

            default:
            {
                cout << "\nInvalid Choice!";
            }
        }

        cout << "\n\n";

    } while(choice != 12);

    return 0;
}

