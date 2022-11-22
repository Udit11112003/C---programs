
// 2
#include <iostream>
using namespace std;
class Account
{
protected:
    int acc_number;
    string customer_name;
    double balance = 0.0;

public:
    virtual void Acc(){};
    void deposit()
    {
        int amt;
        cout << "enter amt to deposit:" << endl;
        cin >> amt;
        balance = balance + amt;
    }
};
class savings : public Account
{
public:
    double min_balance = 500;

public:
    void withdraw()
    {
        int amt;
        cout << "\nEnter amount to withdraw: ";
        cin >> amt;
        if (amt < min_balance)
            cout << "The minimum amount that can be withdrawn is " << min_balance;
        else
            balance = balance - amt;
    }
    void display()
    {
        cout << balance;
    }
};
class Current : public Account
{
public:
    double over_due_amount = 500000;

public:
    void withdraw()
    {
        int amount;
        cout << "\nEnter amount to withdraw: ";
        cin >> amount;
        if (amount > over_due_amount)
            cout <<over_due_amount;

        else
            balance = balance - amount;
    }
    void display()
    {
        cout << "\nBalance= " << balance;
    }
};
int main()
{
    Account a;
    a.deposit();

    int c;
    cout << "1. Savings\n2. Current";
    cin >> c;

    if (c == 1)
    {
        savings s;
        s.withdraw();
        s.display();
    }

    if (c == 2)
    {
        Current c;
        c.withdraw();
        c.display();
    }

    return 0;
}






// 1
#include <iostream>
using namespace std;
class Fraction
{
public:
    int num, deno;

public:
    Fraction()
    {
        num = 1;
        deno = 1;
    }
    Fraction(int n, int d)
    {
        num = n;
        if (d == 0)
        {
            cout << "error" << endl;
            exit(0);
        }
        else
            deno = d;
    }
    Fraction operator*(Fraction f)
    {
        int n = num * f.num;
        int d = deno * f.deno;
        return Fraction(n / gcd(n, d), d / gcd(n, d));
    }

    Fraction operator/(Fraction f)
    {
        int n = num * f.deno;
        int d = deno * f.num;
        return Fraction(n / gcd(n, d), d / gcd(n, d));
    }
    bool operator!=(Fraction &f)
    {
        return (num == f.num) || (deno == f.deno);
    }
    int gcd(int n, int d)
    {
        int rem;
        while (d != 0)
        {
            rem = n % d;
            n = d;
            d = rem;
        }
        return n;
    }
    void accept()
    {
        cout << "\n Enter Numerator:  ";
        cin >> num;
        cout << "\n Enter Denominator:  ";
        cin >> deno;
    }
};
int main()
{
    Fraction f1;
    Fraction f2;
    Fraction f3;

    cout << "\n Enter 1st Fraction Value ";
    f1.accept();
    cout << "\n Enter 2nd Fraction Value ";
    f2.accept();
    f3 = f1 * f2;
    cout << "\n Product of Two Numbers    : " << f3.num << "/" << f3.deno << endl;
    f3 = f1 * f2;
    cout << "\n Division of Two Numbers   : " << f3.num << "/" << f3.deno;
    f3 = f1 / f2;
    if (f1 != f2)
        cout << "\n Fraction is not equal" << endl;
    else
        cout << "\n Fraction is equal" << endl;
    return 0;
}