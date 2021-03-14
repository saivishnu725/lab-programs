#include <iostream>
#include <math.h>

using namespace std;

class cs
{
    double a, b, c, r1, r2;

public:
    void getdata()
    {
        cout << "Enter the co-efficients: " << endl;
        cin >> a >> b >> c;
    }
    void roots()
    {
        double d = b * b - 4 * a * c;
        if (d == 0)
        {
            cout << "Roots are equal " << endl;
            r1 = -b / (2 * a);
            r2 = r1;
        }
        else if (d > 0)
        {
            cout << "Roots are positive and different: " << endl;
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
        }
        else
        {
            cout << "Roots are imaginary" << endl;
            exit(0);
        }
    }
    void display()
    {
        cout << "First root = " << r1 << endl;
        cout << "Second root = " << r2 << endl;
    }
};
int main()
{
    cs bh;
    bh.getdata();
    bh.roots();
    bh.display();
    cout << endl;
    return 0;
}
