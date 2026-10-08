#include <iostream>
using namespace std;

class MATRIX
{
private:
    int a[10][10];
    int m, n;

public:
    
    void getData()
    {
        cout << "Enter number of rows and columns: ";
        cin >> m >> n;

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    
    void display()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    
    MATRIX operator+(MATRIX x)
    {
        MATRIX temp;
        temp.m = m;
        temp.n = n;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.a[i][j] = a[i][j] + x.a[i][j];
            }
        }
        return temp;
    }

    
    MATRIX operator-(MATRIX x)
    {
        MATRIX temp;
        temp.m = m;
        temp.n = n;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.a[i][j] = a[i][j] - x.a[i][j];
            }
        }
        return temp;
    }
};

int main()
{
    MATRIX A, B, C, D;

    cout << "Enter first matrix:\n";
    A.getData();

    cout << "Enter second matrix:\n";
    B.getData();

    C = A + B;
    D = A - B;

    cout << "\nAddition of matrices:\n";
    C.display();

    cout << "\nSubtraction of matrices:\n";
    D.display();

    return 0;
}
