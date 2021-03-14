#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class cs
{
    float s;

public:
    double area(double a)
    {
        return a * a;
    }
    double area(double l, double b)
    {
        return l * b;
    }
    double area(double a, double b, double c)
    {
        s = (a + b + c) / 2.0;
        return (sqrt(s * (s - a) * (s - b) * (s - c)));
    }
};
int main(int argc, char const *argv[])
{
    double x, y, z;
    cs bh;
    int ans;
    cout << "Enter the number of sides(1, 2 and 3): ";
    cin >> ans;
    if (ans == 1)
    {
        cout << "Enter the side: ";
        cin >> x;
        cout << "Area of the square: " << bh.area(x) << endl;
    }
    else if (ans == 2)
    {
        cout << "Enter two sides: ";
        cin >> x >> y;
        cout << "Area of the rectangle: " << bh.area(x, y) << endl;
    }
    else if (ans == 3)
    {
        cout << "Enter three sides: ";
        cin >> x >> y >> z;
        cout << "Area of the triangle: " << bh.area(x, y, z) << endl;
    }
    else
    {
        cout << "Invalid input.";
    }
    return 0;
}
