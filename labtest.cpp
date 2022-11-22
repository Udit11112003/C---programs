// 1
#include <iostream>
using namespace std;
class morning
{
    int roll;
    char name[15];
    int score;
    char email;

public:
    void input()
    {
        cout << "enter the name of the student";
        cin >> name;
        cout << "enter roll number of the student";
        cin >> roll;
        cout << "enter score of the student";
        cin >> score;
        cout << "enter email before every student";
        cin >> email;
    }
};
class eve
{
public:
    int roll;
    char name[10];
    char email[10];
    int marks;
    void getdata()
    {
        cout << "enter roll of student:";
        cin >> roll;
        cout << "enter name of student:";
        cin >> name;
        cout << "enter email of student:";
        cin >> email;
        cout << "enter marks of the student";
        cin >> marks;
    }
};
int main()
{
    morning A1, A2, A3, A4, A5;
    eve B1, B2, B3, B4, B5;
    A1.getdata();
    A2.getdata();
    A3.getdata();
    A4.getdata();
    A5.getdata();
    B1.getdata();
    B2.getdata();
    B3.getdata();
    B4.getdata();
    B5.getdata();
    cout << "The merit list of three student of morning batch:" << endl;
    cout << "1." << endl;
    cout << A1.name << endl;
    cout << A1.marks << endl;
    cout << "2." << endl;
    cout << A2.name << endl;
    cout << A2.marks << endl;
    cout << "3." << endl;
    cout << A3.name << endl;
    cout << A3.marks << endl;
    cout << "The merit list of three student of evening batch:";
    cout << "1." << endl;
    cout << B1.name << endl;
    cout << B1.marks << endl;
    cout << "2." << endl;
    cout << B2.name << endl;
    cout << B2.marks << endl;
    cout << "3." << endl;
    cout << B3.name << endl;
    cout << B3.marks << endl;
    return 0;
}