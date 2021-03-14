#include <iostream>
#include <iomanip>
using namespace std;

class cs
{
    int m[100], n, ele, loc;

public:
    void input();
    void logic();
    void display();
};
void cs::input()
{
    cout << "How many elements? ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    cout << "Enter the search element: ";
    cin >> ele;
}
void cs::logic()
{
    int beg, end, mid;
    loc = -1;
    beg = 0;
    end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (ele == m[mid])
        {
            loc = mid;
            break;
        }
        else if (ele < m[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
}
void cs::display()
{
    if (loc >= 0)
    {
        cout << "Position = " << loc;
    }
    else
    {
        cout << "Search unsuccessful";
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
