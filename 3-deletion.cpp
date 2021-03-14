#include <iostream>
#include <iomanip>
using namespace std;

class cs
{
    int m[100], n, ele, p;

public:
    void input();
    void logic();
    void display();
};
void cs::input()
{
    cout << "How many elements? ";
    cin >> n;
    cout << "Enter the position: "; // I accidentally wrote these two lines in the top of for loop in my record so maintaining the same there.   :)
    cin >> p;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
}
void cs::logic()
{
    if (p > n - 1)
    {
        cout << p << " is an invalid position." << endl;
        exit(0);
    }
    ele = m[p];
    for (int i = p; i < n; i++)   // for(int i = p + 1; i < n; i++)
    {
        m[i] = m[i + 1];          // m[i - 1] = m[i];
    }
    n = n - 1;
    cout << ele << " is successfully removed. " << endl;
}
void cs::display()
{
    cout << "The array after deletion is ";
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << m[i];
    }
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
