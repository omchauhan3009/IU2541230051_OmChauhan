/*#include <iostream>
using namespace std;


int& maximum(int &a, int &b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before modification:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    maximum(x, y) = 100;

    cout << "\nAfter modification:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}*/ 

#include <iostream>
using namespace std;

int &getReference(int &x)
{
    return x;
}

int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    getReference(a) = 100;

    cout << "After modification, a = " << a << endl;

    return 0;
}
