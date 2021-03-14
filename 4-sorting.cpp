#include <iostream>
#include <iomanip>
using namespace std;

class cs
{
    int m[100], n;

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
}
void cs::logic()
{
    int temp, j;
    for (int i = 0; i < n; i++)
    {
        j = i;
        while (j >= 1)
        {
            if (m[j] < m[j - 1])
            {
                temp = m[j];
                m[j] = m[j - 1];
                m[j - 1] = temp;
            }
            j--;
        }
    }
}
void cs::display()
{
    cout << "The array after sorting is " << endl;
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
