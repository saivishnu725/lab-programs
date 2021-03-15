#include <iostream>
#include <iomanip>
using namespace std;

class cs
{
private:
    int var, sum, term;
public:
    cs(int temp, int x)
    {
        var = temp;
        term = x;
    }
    double calculate();
};
double cs::calculate()
{
    int p;
    sum = 1;
    p = term;
    for (int i = 1; i <= var; i++)
    {
        sum = sum + p;
        p = p * term;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int n, t;
    cout << "Enter the base and power (x and n): ";
    cin >> t >> n;
    cs obj(n, t);
    cs cpy = obj;
    cout << "Sum of the series is " << cpy.calculate();
    cout << endl;
    return 0;
}
