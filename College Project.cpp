#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Person {
protected:
    int id;
    string name;
public:
    Person(int i=0, string n="") : id(i), name(n) {}
    virtual void display() const = 0;
    virtual ~Person() {}
    int getId() const { return id; }
};
class Customer : public Person {
    string phone;
public:
    Customer(int i=0,string n="",string p="") : Person(i,n),phone(p) {}
    void display() const override {
        cout << id << "\t" << name << "\t" << phone << endl;
    }
    string getPhone() const { return phone; }
    void update(string n,string p) { name=n; phone=p; }
};
class Photographer : public Person {
    string specialization;
public:
    Photographer(int i=0,string n="",string s="") : Person(i,n),specialization(s) {}
    void display() const override {
        cout << id << "\t" << name << "\t" << specialization << endl;
    }
};
class Package {
protected:
    int id;
    string name;
    double price;
public:
    Package(int i=0,string n="",double p=0) : id(i),name(n),price(p) {}
    virtual double getPrice() const { return price; }
    virtual void display() const {
        cout << id << "\t" << name << "\tRs." << getPrice() << endl;
    }
    int getId() const { return id; }
    virtual ~Package() {}
};
class PremiumPackage : public Package {
    double extra;
public:
    PremiumPackage(int i,string n,double p,double e)
        : Package(i,n,p),extra(e) {}
    double getPrice() const override { return price+extra; }
    void display() const override {
        cout << id << "\t" << name << "\tRs." << getPrice()
             << " (Premium)" << endl;
    }
};
struct Booking {
    int id, customerId, photographerId, packageId;
    string date;
};
class Studio {
    Customer customers[50];
    Photographer photographers[50];
    Package* packages[50];
    Booking bookings[50];
    int nc=0,np=0,npa=0,nb=0;

    int findCustomer(int id) {
        for(int i=0;i<nc;i++) if(customers[i].getId()==id) return i;
        return -1;
    }
    int findPackage(int id) {
        for(int i=0;i<npa;i++) if(packages[i]->getId()==id) return i;
        return -1;
    }
public:
    ~Studio() {
        for(int i=0;i<npa;i++) delete packages[i];
    }

    void addCustomer() {
        int id; string n,p;
        cout<<"Customer ID: "; cin>>id;
        cout<<"Name: "; cin>>n;
        cout<<"Phone: "; cin>>p;
        customers[nc++]=Customer(id,n,p);
        cout<<"Customer added.\n";
    }

    void addPhotographer() {
        int id; string n,s;
        cout<<"Photographer ID: "; cin>>id;
        cout<<"Name: "; cin>>n;
        cout<<"Specialization: "; cin>>s;
        photographers[np++]=Photographer(id,n,s);
        cout<<"Photographer added.\n";
    }

    void addPackage() {
        int id,type; string n; double p,e=0;
        cout<<"Package ID: "; cin>>id;
        cout<<"Package Name: "; cin>>n;
        cout<<"Price: "; cin>>p;
        cout<<"1.Standard  2.Premium: "; cin>>type;
        if(type==2) { cout<<"Extra charge: "; cin>>e; }
        if(type==2) packages[npa++]=new PremiumPackage(id,n,p,e);
        else packages[npa++]=new Package(id,n,p);
        cout<<"Package added.\n";
    }

    void display() {
        cout<<"\n--- CUSTOMERS ---\nID\tName\tPhone\n";
        for(int i=0;i<nc;i++) customers[i].display();

        cout<<"\n--- PHOTOGRAPHERS ---\nID\tName\tSpecialization\n";
        for(int i=0;i<np;i++) photographers[i].display();

        cout<<"\n--- PACKAGES ---\nID\tName\tPrice\n";
        for(int i=0;i<npa;i++) packages[i]->display();

        cout<<"\n--- BOOKINGS ---\n";
        for(int i=0;i<nb;i++)
            cout<<bookings[i].id<<"\tCustomer:"<<bookings[i].customerId
                <<"\tPhotographer:"<<bookings[i].photographerId
                <<"\tPackage:"<<bookings[i].packageId
                <<"\tDate:"<<bookings[i].date<<endl;
    }

    void search() {
        int id; cout<<"Enter Customer ID: "; cin>>id;
        int i=findCustomer(id);
        if(i>=0) customers[i].display();
        else cout<<"Customer not found.\n";
    }

    void update() {
        int id; string n,p;
        cout<<"Customer ID: "; cin>>id;
        int i=findCustomer(id);
        if(i<0) { cout<<"Customer not found.\n"; return; }
        cout<<"New Name: "; cin>>n;
        cout<<"New Phone: "; cin>>p;
        customers[i].update(n,p);
        cout<<"Updated.\n";
    }

    void deleteCustomer() {
        int id; cout<<"Customer ID: "; cin>>id;
        int i=findCustomer(id);
        if(i<0) { cout<<"Customer not found.\n"; return; }
        for(;i<nc-1;i++) customers[i]=customers[i+1];
        nc--; cout<<"Deleted.\n";
    }

    void booking() {
        cout<<"\n--- CREATE BOOKING ---\n";
        cout<<"Booking ID: "; cin>>bookings[nb].id;
        cout<<"Customer ID: "; cin>>bookings[nb].customerId;
        cout<<"Photographer ID: "; cin>>bookings[nb].photographerId;
        cout<<"Package ID: "; cin>>bookings[nb].packageId;
        cout<<"Date: "; cin>>bookings[nb].date;

        if(findCustomer(bookings[nb].customerId)<0 ||
           findPackage(bookings[nb].packageId)<0) {
            cout<<"Invalid Customer or Package ID.\n";
            return;
        }

        nb++;
        cout<<"Booking created successfully.\n";
    }

    void save() {
        ofstream f("studio.txt");
        f<<nc<<" "<<np<<" "<<npa<<" "<<nb<<endl;
        for(int i=0;i<nc;i++)
            f<<customers[i].getId()<<" "<<customers[i].getPhone()<<endl;
        cout<<"Data saved.\n";
    }

    void run() {
        int ch;
        do {
            cout<<"\n==============================\n";
            cout<<" PHOTOGRAPHY STUDIO MANAGEMENT\n";
            cout<<"==============================\n";
            cout<<"1. Add Customer\n";
            cout<<"2. Add Photographer\n";
            cout<<"3. Add Package\n";
            cout<<"4. Display Records\n";
            cout<<"5. Search Customer\n";
            cout<<"6. Update Customer\n";
            cout<<"7. Delete Customer\n";
            cout<<"8. Create Booking\n";
            cout<<"9. Save Data\n";
            cout<<"0. Exit\n";
            cout<<"Enter choice: "; cin>>ch;

            switch(ch) {
                case 1:addCustomer();break;
                case 2:addPhotographer();break;
                case 3:addPackage();break;
                case 4:display();break;
                case 5:search();break;
                case 6:update();break;
                case 7:deleteCustomer();break;
                case 8:booking();break;
                case 9:save();break;
                case 0:cout<<"Thank you!\n";break;
                default:cout<<"Invalid choice.\n";
            }
        } while(ch!=0);
    }
};

int main() 
{
    Studio studio;
    studio.run();
    return 0;
}

