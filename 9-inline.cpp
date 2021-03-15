#include <iostream>
#include <iomanip>
using namespace std;

class assign
{
private:
    int n;

public:
    assign(int nn)
    {
        n = nn;
    }
    int cube();
};
inline int assign::cube()
{
    return n * n * n;
}
int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter the number: ";
    cin >> a;
    assign N = a;
    cout << "Cube of " << a << " = " << N.cube() << endl;
    return 0;
}
