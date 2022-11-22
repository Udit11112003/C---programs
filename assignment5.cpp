// 1.print largest private data members
#include <iostream>
using namespace std;

    class largest
    {
    private:
        int a, b, c;

    public:
        void input()
        {
            cout << "enter the first number: ";
            cin >> a;
            cout << "enter the second number: ";
            cin >> b;
            cout << "enter the third number: ";
            cin >> c;
        }
        void cal()
        {
            int r;
            r = ((a > b) && (a > c) ?: (b > a) && (b > c) ? b : c);
            cout << "\nlargest among three numbers[" << a << "," << b << "," << c << "]=" << r << "\n";
        }
    };
    int main()
    {
        largest g;
        g.input();
        g.cal();
        return 0;
    }