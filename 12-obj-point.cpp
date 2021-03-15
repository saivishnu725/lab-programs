#include <iostream>
#include <iomanip>
using namespace std;

class student
{
    int regno;
    char name[20];
    float fees;

public:
    void get();
    void display();
};
void student::get()
{
    cout << "Enter student name: ";
    cin.getline(name, 20);
    cout << "Enter student register number: ";
    cin >> regno;
    cout << "Enter student fees: ";
    cin >> fees;
}
void student::display()
{
    cout << "Student register number: " << regno << endl;
    cout << "Student name: " << name << endl;
    cout << "Student fees: " << fees;
}
int main(int argc, char const *argv[])
{
    student s, *sp;
    sp = &s;
    sp->get();
    sp->display();
    cout << endl;
    return 0;
}
