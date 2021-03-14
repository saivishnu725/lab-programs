#include <iostream>
#include <iomanip>
using namespace std;

class cs
{
    int n, m[100], ele, freq;

public:
    void input();
    void logic();
    void display();
};
void cs::input()
{
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " elements into the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        ;
    }
    cout << "Enter the search element: ";
    cin >> ele;
}
void cs::logic()
{
    freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (ele == m[i])
        {
            freq++;
        }
    }
}
void cs::display()
{
    if (freq > 0)
    {
        cout << "Frequency of " << ele << " is " << freq<<endl;
    }
    else
    {
        cout << ele << " does not exist.";
    }
}

int main(int argc, char const *argv[])
{
    cs bh;
    bh.input();
    bh.logic();
    bh.display();
    return 0;
}
