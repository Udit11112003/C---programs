#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "value of a" << endl;
    cin >> a;
    cout << "value of b" << endl;
    cin >> b;
    cout << "value of c" << endl;
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << "is the largest number" << endl;
    }
    if (b > a && b > c)
    {
        cout << b << " is the largest number.";
    }
    if (c > a && c > b)
    {
        cout << c << " is the largest number.";
    }
    return 0;
}