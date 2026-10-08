#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <limits>
#include <stdexcept>

using namespace std;

/* =========================================================
   BASE CLASS : PERSON
   Demonstrates Inheritance + Runtime Polymorphism
   ========================================================= */

class Person
{
protected:
    int id;
    string name;

public:
    Person()
    {
        id = 0;
        name = "";
    }

    Person(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    virtual ~Person()
    {
    }

    int getId() const
    {
        return id;
    }

    string getName() const
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    virtual void display() const = 0;
};


/* =========================================================
   CUSTOMER CLASS
   ========================================================= */

class Customer : public Person
{
private:
    string phone;

public:

    Customer() : Person()
    {
        phone = "";
    }

    Customer(int id, string name, string phone)
        : Person(id, name)
    {
        this->phone = phone;
    }

    ~Customer()
    {
    }

    string getPhone() const
    {
        return phone;
    }

    void setPhone(string phone)
    {
        this->phone = phone;
    }

    void display() const override
    {
        cout << "Customer ID : " << id << endl;
        cout << "Name        : " << name << endl;
        cout << "Phone       : " << phone << endl;
    }
};


/* =========================================================
   PHOTOGRAPHER CLASS
   ========================================================= */

class Photographer : public Person
{
private:
    string specialization;

public:

    Photographer() : Person()
    {
        specialization = "";
    }

    Photographer(int id, string name, string specialization)
        : Person(id, name)
    {
        this->specialization = specialization;
    }

    ~Photographer()
    {
    }

    string getSpecialization() const
    {
        return specialization;
    }

    void setSpecialization(string specialization)
    {
        this->specialization = specialization;
    }

    void display() const override
    {
        cout << "Photographer ID : " << id << endl;
        cout << "Name            : " << name << endl;
        cout << "Specialization  : " << specialization << endl;
    }
};


/* =========================================================
   PACKAGE CLASS
   ========================================================= */

class Package
{
private:
    int packageId;
    string name;
    double price;
    int duration;

public:

    Package()
    {
        packageId = 0;
        name = "";
        price = 0;
        duration = 0;
    }

    Package(int packageId, string name, double price, int duration)
    {
        this->packageId = packageId;
        this->name = name;
        this->price = price;
        this->duration = duration;
    }

    ~Package()
    {
    }

    int getPackageId() const
    {
        return packageId;
    }

    string getName() const
    {
        return name;
    }

    double getPrice() const
    {
        return price;
    }

    int getDuration() const
    {
        return duration;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setPrice(double price)
    {
        this->price = price;
    }

    void setDuration(int duration)
    {
        this->duration = duration;
    }

    double calculatePrice(int extraDays = 0) const
    {
        if (extraDays < 0)
            extraDays = 0;

        if (duration == 0)
            return price;

        return price + (price / duration) * extraDays;
    }

    void display() const
    {
        cout << "Package ID : " << packageId << endl;
        cout << "Name       : " << name << endl;
        cout << "Price      : Rs. "
             << fixed << setprecision(2) << price << endl;
        cout << "Duration   : " << duration << " day(s)" << endl;
    }
};


/* =========================================================
   BOOKING CLASS
   ========================================================= */

class Booking
{
private:
    int bookingId;
    int customerId;
    int packageId;
    string date;
    bool active;

public:

    Booking()
    {
        bookingId = 0;
        customerId = 0;
        packageId = 0;
        date = "";
        active = true;
    }

    Booking(int bookingId, int customerId,
            int packageId, string date,
            bool active = true)
    {
        this->bookingId = bookingId;
        this->customerId = customerId;
        this->packageId = packageId;
        this->date = date;
        this->active = active;
    }

    ~Booking()
    {
    }

    int getBookingId() const
    {
        return bookingId;
    }

    int getCustomerId() const
    {
        return customerId;
    }

    int getPackageId() const
    {
        return packageId;
    }

    string getDate() const
    {
        return date;
    }

    bool isActive() const
    {
        return active;
    }

    void setDate(string date)
    {
        this->date = date;
    }

    void book()
    {
        active = true;
    }

    void cancel()
    {
        active = false;
    }

    void display() const
    {
        cout << "Booking ID  : " << bookingId << endl;
        cout << "Customer ID : " << customerId << endl;
        cout << "Package ID  : " << packageId << endl;
        cout << "Date        : " << date << endl;
        cout << "Status      : "
             << (active ? "Active" : "Cancelled")
             << endl;
    }
};


/* =========================================================
   FILE MANAGER CLASS
   ========================================================= */

class FileManager
{
private:
    string customerFile;
    string photographerFile;
    string packageFile;
    string bookingFile;

public:

    FileManager()
    {
        customerFile = "customers.txt";
        photographerFile = "photographers.txt";
        packageFile = "packages.txt";
        bookingFile = "bookings.txt";
    }

    void saveCustomers(Customer* customers, int count)
    {
        ofstream file(customerFile);

        if (!file)
            return;

        for (int i = 0; i < count; i++)
        {
            file << customers[i].getId() << "|"
                 << customers[i].getName() << "|"
                 << customers[i].getPhone()
                 << endl;
        }

        file.close();
    }

    void savePhotographers(Photographer* photographers, int count)
    {
        ofstream file(photographerFile);

        if (!file)
            return;

        for (int i = 0; i < count; i++)
        {
            file << photographers[i].getId() << "|"
                 << photographers[i].getName() << "|"
                 << photographers[i].getSpecialization()
                 << endl;
        }

        file.close();
    }

    void savePackages(Package* packages, int count)
    {
        ofstream file(packageFile);

        if (!file)
            return;

        for (int i = 0; i < count; i++)
        {
            file << packages[i].getPackageId() << "|"
                 << packages[i].getName() << "|"
                 << packages[i].getPrice() << "|"
                 << packages[i].getDuration()
                 << endl;
        }

        file.close();
    }

    void saveBookings(Booking* bookings, int count)
    {
        ofstream file(bookingFile);

        if (!file)
            return;

        for (int i = 0; i < count; i++)
        {
            file << bookings[i].getBookingId() << "|"
                 << bookings[i].getCustomerId() << "|"
                 << bookings[i].getPackageId() << "|"
                 << bookings[i].getDate() << "|"
                 << bookings[i].isActive()
                 << endl;
        }

        file.close();
    }

    int loadCustomers(Customer* customers)
    {
        ifstream file(customerFile);

        if (!file)
            return 0;

        int count = 0;
        string line;

        while (getline(file, line) && count < 100)
        {
            size_t p1 = line.find('|');
            size_t p2 = line.find('|', p1 + 1);

            if (p1 == string::npos ||
                p2 == string::npos)
                continue;

            int id = stoi(line.substr(0, p1));

            string name =
                line.substr(p1 + 1,
                p2 - p1 - 1);

            string phone =
                line.substr(p2 + 1);

            customers[count] =
                Customer(id, name, phone);

            count++;
        }

        file.close();

        return count;
    }

    int loadPhotographers(Photographer* photographers)
    {
        ifstream file(photographerFile);

        if (!file)
            return 0;

        int count = 0;
        string line;

        while (getline(file, line) && count < 100)
        {
            size_t p1 = line.find('|');
            size_t p2 = line.find('|', p1 + 1);

            if (p1 == string::npos ||
                p2 == string::npos)
                continue;

            int id = stoi(line.substr(0, p1));

            string name =
                line.substr(p1 + 1,
                p2 - p1 - 1);

            string specialization =
                line.substr(p2 + 1);

            photographers[count] =
                Photographer(id, name,
                              specialization);

            count++;
        }

        file.close();

        return count;
    }

    int loadPackages(Package* packages)
    {
        ifstream file(packageFile);

        if (!file)
            return 0;

        int count = 0;
        string line;

        while (getline(file, line) && count < 100)
        {
            size_t p1 = line.find('|');
            size_t p2 = line.find('|', p1 + 1);
            size_t p3 = line.find('|', p2 + 1);

            if (p1 == string::npos ||
                p2 == string::npos ||
                p3 == string::npos)
                continue;

            int id =
                stoi(line.substr(0, p1));

            string name =
                line.substr(p1 + 1,
                p2 - p1 - 1);

            double price =
                stod(line.substr(p2 + 1,
                p3 - p2 - 1));

            int duration =
                stoi(line.substr(p3 + 1));

            packages[count] =
                Package(id, name,
                        price, duration);

            count++;
        }

        file.close();

        return count;
    }

    int loadBookings(Booking* bookings)
    {
        ifstream file(bookingFile);

        if (!file)
            return 0;

        int count = 0;
        string line;

        while (getline(file, line) && count < 100)
        {
            size_t p1 = line.find('|');
            size_t p2 = line.find('|', p1 + 1);
            size_t p3 = line.find('|', p2 + 1);
            size_t p4 = line.find('|', p3 + 1);

            if (p1 == string::npos ||
                p2 == string::npos ||
                p3 == string::npos ||
                p4 == string::npos)
                continue;

            int bookingId =
                stoi(line.substr(0, p1));

            int customerId =
                stoi(line.substr(p1 + 1,
                p2 - p1 - 1));

            int packageId =
                stoi(line.substr(p2 + 1,
                p3 - p2 - 1));

            string date =
                line.substr(p3 + 1,
                p4 - p3 - 1);

            bool active =
                stoi(line.substr(p4 + 1)) == 1;

            bookings[count] =
                Booking(bookingId,
                        customerId,
                        packageId,
                        date,
                        active);

            count++;
        }

        file.close();

        return count;
    }
};


/* =========================================================
   STUDIO CLASS
   MAIN SYSTEM CLASS
   ========================================================= */

class Studio
{
private:

    // Dynamic memory
    Customer* customers;
    Photographer* photographers;
    Package* packages;
    Booking* bookings;

    int customerCount;
    int photographerCount;
    int packageCount;
    int bookingCount;

    const int capacity = 100;

    FileManager fileManager;

public:

    Studio()
    {
        // Dynamic memory allocation
        customers = new Customer[capacity];
        photographers = new Photographer[capacity];
        packages = new Package[capacity];
        bookings = new Booking[capacity];

        customerCount = 0;
        photographerCount = 0;
        packageCount = 0;
        bookingCount = 0;

        loadData();
    }

    ~Studio()
    {
        saveData();

        // Release dynamic memory
        delete[] customers;
        delete[] photographers;
        delete[] packages;
        delete[] bookings;
    }


    /* =====================================================
       CUSTOMER FUNCTIONS
       ===================================================== */

    bool customerExists(int id)
    {
        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].getId() == id)
                return true;
        }

        return false;
    }

    void addCustomer()
    {
        if (customerCount >= capacity)
            throw runtime_error("Customer storage is full.");

        int id;

        cout << "Enter Customer ID: ";
        cin >> id;
        cin.ignore();

        if (customerExists(id))
            throw runtime_error("Customer ID already exists.");

        string name;
        string phone;

        cout << "Enter Customer Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        if (phone.length() != 10)
            throw runtime_error(
                "Phone number must contain 10 digits."
            );

        customers[customerCount] =
            Customer(id, name, phone);

        customerCount++;

        cout << "\nCustomer added successfully!\n";
    }


    void displayCustomers()
    {
        cout << "\n========== CUSTOMERS ==========\n";

        if (customerCount == 0)
        {
            cout << "No customers found.\n";
            return;
        }

        for (int i = 0; i < customerCount; i++)
        {
            cout << "\n----------------------\n";

            // Runtime polymorphism
            Person* person = &customers[i];
            person->display();
        }
    }


    void searchCustomer()
    {
        int id;

        cout << "Enter Customer ID: ";
        cin >> id;

        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].getId() == id)
            {
                cout << "\nCustomer Found!\n";
                customers[i].display();
                return;
            }
        }

        cout << "Customer not found.\n";
    }


    void updateCustomer()
    {
        int id;

        cout << "Enter Customer ID: ";
        cin >> id;
        cin.ignore();

        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].getId() == id)
            {
                string name;
                string phone;

                cout << "Enter New Name: ";
                getline(cin, name);

                cout << "Enter New Phone: ";
                getline(cin, phone);

                if (phone.length() != 10)
                    throw runtime_error(
                        "Phone number must contain 10 digits."
                    );

                customers[i].setName(name);
                customers[i].setPhone(phone);

                cout << "Customer updated successfully.\n";
                return;
            }
        }

        cout << "Customer not found.\n";
    }


    void deleteCustomer()
    {
        int id;

        cout << "Enter Customer ID: ";
        cin >> id;

        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].getId() == id)
            {
                for (int j = i;
                     j < customerCount - 1;
                     j++)
                {
                    customers[j] =
                        customers[j + 1];
                }

                customerCount--;

                cout << "Customer deleted successfully.\n";
                return;
            }
        }

        cout << "Customer not found.\n";
    }


    /* =====================================================
       PHOTOGRAPHER FUNCTIONS
       ===================================================== */

    bool photographerExists(int id)
    {
        for (int i = 0; i < photographerCount; i++)
        {
            if (photographers[i].getId() == id)
                return true;
        }

        return false;
    }


    void addPhotographer()
    {
        if (photographerCount >= capacity)
            throw runtime_error(
                "Photographer storage is full."
            );

        int id;

        cout << "Enter Photographer ID: ";
        cin >> id;
        cin.ignore();

        if (photographerExists(id))
            throw runtime_error(
                "Photographer ID already exists."
            );

        string name;
        string specialization;

        cout << "Enter Photographer Name: ";
        getline(cin, name);

        cout << "Enter Specialization: ";
        getline(cin, specialization);

        photographers[photographerCount] =
            Photographer(id, name,
                          specialization);

        photographerCount++;

        cout << "Photographer added successfully!\n";
    }


    void displayPhotographers()
    {
        cout << "\n======= PHOTOGRAPHERS =======\n";

        if (photographerCount == 0)
        {
            cout << "No photographers found.\n";
            return;
        }

        for (int i = 0;
             i < photographerCount;
             i++)
        {
            cout << "\n----------------------\n";

            Person* person =
                &photographers[i];

            person->display();
        }
    }


    void searchPhotographer()
    {
        int id;

        cout << "Enter Photographer ID: ";
        cin >> id;

        for (int i = 0;
             i < photographerCount;
             i++)
        {
            if (photographers[i].getId() == id)
            {
                photographers[i].display();
                return;
            }
        }

        cout << "Photographer not found.\n";
    }


    void updatePhotographer()
    {
        int id;

        cout << "Enter Photographer ID: ";
        cin >> id;
        cin.ignore();

        for (int i = 0;
             i < photographerCount;
             i++)
        {
            if (photographers[i].getId() == id)
            {
                string name;
                string specialization;

                cout << "Enter New Name: ";
                getline(cin, name);

                cout << "Enter New Specialization: ";
                getline(cin, specialization);

                photographers[i].setName(name);
                photographers[i].setSpecialization(
                    specialization
                );

                cout << "Photographer updated successfully.\n";
                return;
            }
        }

        cout << "Photographer not found.\n";
    }


    void deletePhotographer()
    {
        int id;

        cout << "Enter Photographer ID: ";
        cin >> id;

        for (int i = 0;
             i < photographerCount;
             i++)
        {
            if (photographers[i].getId() == id)
            {
                for (int j = i;
                     j < photographerCount - 1;
                     j++)
                {
                    photographers[j] =
                        photographers[j + 1];
                }

                photographerCount--;

                cout << "Photographer deleted successfully.\n";
                return;
            }
        }

        cout << "Photographer not found.\n";
    }


    /* =====================================================
       PACKAGE FUNCTIONS
       ===================================================== */

    bool packageExists(int id)
    {
        for (int i = 0; i < packageCount; i++)
        {
            if (packages[i].getPackageId() == id)
                return true;
        }

        return false;
    }


    void addPackage()
    {
        if (packageCount >= capacity)
            throw runtime_error(
                "Package storage is full."
            );

        int id;

        cout << "Enter Package ID: ";
        cin >> id;
        cin.ignore();

        if (packageExists(id))
            throw runtime_error(
                "Package ID already exists."
            );

        string name;
        double price;
        int duration;

        cout << "Enter Package Name: ";
        getline(cin, name);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Duration in Days: ";
        cin >> duration;

        if (price < 0)
            throw runtime_error(
                "Price cannot be negative."
            );

        if (duration <= 0)
            throw runtime_error(
                "Duration must be greater than zero."
            );

        packages[packageCount] =
            Package(id, name,
                    price, duration);

        packageCount++;

        cout << "Package added successfully!\n";
    }


    void displayPackages()
    {
        cout << "\n========== PACKAGES ==========\n";

        if (packageCount == 0)
        {
            cout << "No packages found.\n";
            return;
        }

        for (int i = 0;
             i < packageCount;
             i++)
        {
            cout << "\n----------------------\n";
            packages[i].display();
        }
    }


    void searchPackage()
    {
        int id;

        cout << "Enter Package ID: ";
        cin >> id;

        for (int i = 0;
             i < packageCount;
             i++)
        {
            if (packages[i].getPackageId() == id)
            {
                packages[i].display();
                return;
            }
        }

        cout << "Package not found.\n";
    }


    void updatePackage()
    {
        int id;

        cout << "Enter Package ID: ";
        cin >> id;
        cin.ignore();

        for (int i = 0;
             i < packageCount;
             i++)
        {
            if (packages[i].getPackageId() == id)
            {
                string name;
                double price;
                int duration;

                cout << "Enter New Package Name: ";
                getline(cin, name);

                cout << "Enter New Price: ";
                cin >> price;

                cout << "Enter New Duration: ";
                cin >> duration;

                if (price < 0 ||
                    duration <= 0)
                {
                    throw runtime_error(
                        "Invalid price or duration."
                    );
                }

                packages[i].setName(name);
                packages[i].setPrice(price);
                packages[i].setDuration(duration);

                cout << "Package updated successfully.\n";
                return;
            }
        }

        cout << "Package not found.\n";
    }


    void deletePackage()
    {
        int id;

        cout << "Enter Package ID: ";
        cin >> id;

        for (int i = 0;
             i < packageCount;
             i++)
        {
            if (packages[i].getPackageId() == id)
            {
                for (int j = i;
                     j < packageCount - 1;
                     j++)
                {
                    packages[j] =
                        packages[j + 1];
                }

                packageCount--;

                cout << "Package deleted successfully.\n";
                return;
            }
        }

        cout << "Package not found.\n";
    }


    /* =====================================================
       BOOKING FUNCTIONS
       ===================================================== */

    bool bookingExists(int id)
    {
        for (int i = 0;
             i < bookingCount;
             i++)
        {
            if (bookings[i].getBookingId() == id)
                return true;
        }

        return false;
    }


    int getNextBookingId()
    {
        int maxId = 400;

        for (int i = 0;
             i < bookingCount;
             i++)
        {
            if (bookings[i].getBookingId() >
                maxId)
            {
                maxId =
                    bookings[i].getBookingId();
            }
        }

        return maxId + 1;
    }


    void displayBookings()
    {
        cout << "\n========== BOOKINGS ==========\n";

        if (bookingCount == 0)
        {
            cout << "No bookings found.\n";
            return;
        }

        for (int i = 0;
             i < bookingCount;
             i++)
        {
            cout << "\n----------------------\n";
            bookings[i].display();
        }
    }


    void searchBooking()
    {
        int id;

        cout << "Enter Booking ID: ";
        cin >> id;

        for (int i = 0;
             i < bookingCount;
             i++)
        {
            if (bookings[i].getBookingId() == id)
            {
                bookings[i].display();
                return;
            }
        }

        cout << "Booking not found.\n";
    }


    void updateBooking()
    {
        int id;

        cout << "Enter Booking ID: ";
        cin >> id;
        cin.ignore();

        for (int i = 0;
             i < bookingCount;
             i++)
        {
            if (bookings[i].getBookingId() == id)
            {
                string date;

                cout << "Enter New Date: ";
                getline(cin, date);

                bookings[i].setDate(date);

                cout << "Booking updated successfully.\n";
                return;
            }
        }

        cout << "Booking not found.\n";
    }


    void deleteBooking()
    {
        int id;

        cout << "Enter Booking ID: ";
        cin >> id;

        for (int i = 0;
             i < bookingCount;
             i++)
        {
            if (bookings[i].getBookingId() == id)
            {
                for (int j = i;
                     j < bookingCount - 1;
                     j++)
                {
                    bookings[j] =
                        bookings[j + 1];
                }

                bookingCount--;

                cout << "Booking deleted successfully.\n";
                return;
            }
        }

        cout << "Booking not found.\n";
    }


    /* =====================================================
       MAIN TRANSACTION
       ===================================================== */

    void createBooking()
    {
        if (customerCount == 0)
            throw runtime_error(
                "Please add a customer first."
            );

        if (packageCount == 0)
            throw runtime_error(
                "Please add a package first."
            );

        if (bookingCount >= capacity)
            throw runtime_error(
                "Booking storage is full."
            );

        cout << "\nAvailable Customers:\n";
        displayCustomers();

        int customerId;

        cout << "\nEnter Customer ID: ";
        cin >> customerId;

        if (!customerExists(customerId))
            throw runtime_error(
                "Customer does not exist."
            );


        cout << "\nAvailable Packages:\n";
        displayPackages();

        int packageId;

        cout << "\nEnter Package ID: ";
        cin >> packageId;

        if (!packageExists(packageId))
            throw runtime_error(
                "Package does not exist."
            );

        cin.ignore();

        string date;

        cout << "Enter Booking Date (DD-MM-YYYY): ";
        getline(cin, date);


        int bookingId =
            getNextBookingId();

        bookings[bookingCount] =
            Booking(bookingId,
                    customerId,
                    packageId,
                    date);

        bookingCount++;


        cout << "\n====================================\n";
        cout << "     BOOKING CREATED SUCCESSFULLY\n";
        cout << "====================================\n";

        cout << "Booking ID  : "
             << bookingId << endl;

        cout << "Customer ID : "
             << customerId << endl;

        cout << "Package ID  : "
             << packageId << endl;

        cout << "Date        : "
             << date << endl;
    }


    void cancelBooking()
    {
        int id;

        cout << "Enter Booking ID: ";
        cin >> id;

        for (int i = 0;
             i < bookingCount;
             i++)
        {
            if (bookings[i].getBookingId() == id)
            {
                if (!bookings[i].isActive())
                {
                    cout << "Booking is already cancelled.\n";
                    return;
                }

                bookings[i].cancel();

                cout << "Booking cancelled successfully.\n";
                return;
            }
        }

        cout << "Booking not found.\n";
    }


    /* =====================================================
       REPORT
       ===================================================== */

    void generateReport()
    {
        int activeBookings = 0;
        int cancelledBookings = 0;

        for (int i = 0;
             i < bookingCount;
             i++)
        {
            if (bookings[i].isActive())
                activeBookings++;
            else
                cancelledBookings++;
        }

        cout << "\n====================================\n";
        cout << "     PHOTOGRAPHY STUDIO REPORT\n";
        cout << "====================================\n";

        cout << "Total Customers    : "
             << customerCount << endl;

        cout << "Total Photographers: "
             << photographerCount << endl;

        cout << "Total Packages     : "
             << packageCount << endl;

        cout << "Total Bookings     : "
             << bookingCount << endl;

        cout << "Active Bookings    : "
             << activeBookings << endl;

        cout << "Cancelled Bookings : "
             << cancelledBookings << endl;

        cout << "====================================\n";
    }


    /* =====================================================
       FILE HANDLING
       ===================================================== */

    void saveData()
    {
        fileManager.saveCustomers(
            customers,
            customerCount
        );

        fileManager.savePhotographers(
            photographers,
            photographerCount
        );

        fileManager.savePackages(
            packages,
            packageCount
        );

        fileManager.saveBookings(
            bookings,
            bookingCount
        );
    }


    void loadData()
    {
        customerCount =
            fileManager.loadCustomers(
                customers
            );

        photographerCount =
            fileManager.loadPhotographers(
                photographers
            );

        packageCount =
            fileManager.loadPackages(
                packages
            );

        bookingCount =
            fileManager.loadBookings(
                bookings
            );
    }


    /* =====================================================
       MENU FUNCTIONS
       ===================================================== */

    void addRecord()
    {
        cout << "\n========== ADD RECORD ==========\n";

        cout << "1. Add Customer\n";
        cout << "2. Add Photographer\n";
        cout << "3. Add Package\n";
        cout << "4. Back\n";

        int choice;

        cout << "Enter choice: ";
        cin >> choice;

        try
        {
            switch (choice)
            {
                case 1:
                    addCustomer();
                    break;

                case 2:
                    addPhotographer();
                    break;

                case 3:
                    addPackage();
                    break;

                case 4:
                    break;

                default:
                    cout << "Invalid choice.\n";
            }
        }
        catch (exception& e)
        {
            cout << "Error: "
                 << e.what() << endl;
        }
    }


    void displayRecords()
    {
        cout << "\n========= DISPLAY RECORDS =========\n";

        cout << "1. Customers\n";
        cout << "2. Photographers\n";
        cout << "3. Packages\n";
        cout << "4. Bookings\n";
        cout << "5. All Records\n";
        cout << "6. Back\n";

        int choice;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                displayCustomers();
                break;

            case 2:
                displayPhotographers();
                break;

            case 3:
                displayPackages();
                break;

            case 4:
                displayBookings();
                break;

            case 5:
                displayCustomers();
                displayPhotographers();
                displayPackages();
                displayBookings();
                break;

            case 6:
                break;

            default:
                cout << "Invalid choice.\n";
        }
    }


    void searchRecord()
    {
        cout << "\n========== SEARCH RECORD ==========\n";

        cout << "1. Customer\n";
        cout << "2. Photographer\n";
        cout << "3. Package\n";
        cout << "4. Booking\n";
        cout << "5. Back\n";

        int choice;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                searchCustomer();
                break;

            case 2:
                searchPhotographer();
                break;

            case 3:
                searchPackage();
                break;

            case 4:
                searchBooking();
                break;

            case 5:
                break;

            default:
                cout << "Invalid choice.\n";
        }
    }


    void updateRecord()
    {
        cout << "\n========== UPDATE RECORD ==========\n";

        cout << "1. Customer\n";
        cout << "2. Photographer\n";
        cout << "3. Package\n";
        cout << "4. Booking\n";
        cout << "5. Back\n";

        int choice;

        cout << "Enter choice: ";
        cin >> choice;

        try
        {
            switch (choice)
            {
                case 1:
                    updateCustomer();
                    break;

                case 2:
                    updatePhotographer();
                    break;

                case 3:
                    updatePackage();
                    break;

                case 4:
                    updateBooking();
                    break;

                case 5:
                    break;

                default:
                    cout << "Invalid choice.\n";
            }
        }
        catch (exception& e)
        {
            cout << "Error: "
                 << e.what() << endl;
        }
    }


    void deleteRecord()
    {
        cout << "\n========== DELETE RECORD ==========\n";

        cout << "1. Customer\n";
        cout << "2. Photographer\n";
        cout << "3. Package\n";
        cout << "4. Booking\n";
        cout << "5. Back\n";

        int choice;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                deleteCustomer();
                break;

            case 2:
                deletePhotographer();
                break;

            case 3:
                deletePackage();
                break;

            case 4:
                deleteBooking();
                break;

            case 5:
                break;

            default:
                cout << "Invalid choice.\n";
        }
    }


    /* =====================================================
       MAIN MENU
       ===================================================== */

    void run()
    {
        int choice;

        do
        {
            cout << "\n\n";
            cout << "========================================\n";
            cout << "    PHOTOGRAPHY STUDIO MANAGEMENT\n";
            cout << "========================================\n";

            cout << "1. Add Record\n";
            cout << "2. Display Records\n";
            cout << "3. Search Record\n";
            cout << "4. Update Record\n";
            cout << "5. Delete Record\n";
            cout << "6. Main Transaction / Process\n";
            cout << "7. Report\n";
            cout << "8. Save / Load\n";
            cout << "9. Exit\n";

            cout << "========================================\n";

            cout << "Enter your choice: ";
            cin >> choice;

            try
            {
                switch (choice)
                {
                    case 1:
                        addRecord();
                        break;

                    case 2:
                        displayRecords();
                        break;

                    case 3:
                        searchRecord();
                        break;

                    case 4:
                        updateRecord();
                        break;

                    case 5:
                        deleteRecord();
                        break;

                    case 6:
                    {
                        cout << "\n====== MAIN TRANSACTION ======\n";

                        cout << "1. Create Booking\n";
                        cout << "2. Cancel Booking\n";
                        cout << "3. Back\n";

                        int transactionChoice;

                        cout << "Enter choice: ";
                        cin >> transactionChoice;

                        if (transactionChoice == 1)
                            createBooking();

                        else if (transactionChoice == 2)
                            cancelBooking();

                        else if (transactionChoice == 3)
                            break;

                        else
                            cout << "Invalid choice.\n";

                        break;
                    }

                    case 7:
                        generateReport();
                        break;

                    case 8:
                        saveData();
                        loadData();

                        cout << "Data saved and loaded successfully.\n";
                        break;

                    case 9:
                        saveData();

                        cout << "\nData saved successfully.\n";
                        cout << "Thank you for using Photography Studio Management!\n";
                        break;

                    default:
                        cout << "Invalid choice. Please enter 1-9.\n";
                }
            }
            catch (exception& e)
            {
                cout << "\nError: "
                     << e.what() << endl;
            }

        }
        while (choice != 9);
    }
};


/* =========================================================
   MAIN FUNCTION
   ========================================================= */

int main()
{
    try
    {
        Studio studio;

        studio.run();
    }
    catch (exception& e)
    {
        cout << "Fatal Error: "
             << e.what() << endl;
    }

    return 0;
}
