#include <iostream>
#include <iomanip>
using namespace std;

class cs
{
    double p, t, r, s;

public:
    void input();
    void logic();
    void display();
};
void cs::input()
{
    cout << "Enter principle amount, time and rate " << endl;
    cin >> p >> t >> r;
}
void cs::logic()
{
    s = (p * t * r) / 100;
}
void cs::display()
{
    cout << "Prinicple: " << p << endl;
    cout << "Time: " << t << endl;
    cout << "Rate: " << r << endl;
    cout << "Simple interest: " << s;
}

int main(int argc, char const *argv[])
{
    cs bh;
    bh.input();
    bh.logic();
    bh.display();
    cout << endl;
    return 0;
}
