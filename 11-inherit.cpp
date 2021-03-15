#include <iostream>
#include <iomanip>
using namespace std;

class student
{
private:
    int roll;
    char name[20];

public:
    void read()
    {
        cout << "Enter the name: ";
        cin.getline(name, 20);
        cout << "Enter Roll No: ";
        cin >> roll;
    }
    void display()
    {
        cout << "Roll no: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};
class marks : public student
{
    int m1, m2, total;

public:
    void read1()
    {
        cout << "Enter two subject marks: ";
        cin >> m1 >> m2;
        total = m1 + m2;
    }
    void display1()
    {
        cout << "Subject1 = " << m1 << endl;
        cout << "Subject2 = " << m2 << endl;
        cout << "Total marks = " << total << endl;
    }
};
int main(int argc, char const *argv[])
{
    marks ob;
    ob.read();
    ob.read1();
    ob.display();
    ob.display1();
    return 0;
}
