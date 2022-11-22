/*1 Write a program to create a structure that store name roll no marks of 3 subject.
input the details of student and display all details along with avg marks by
calling user defined func.where the structure variable is passed as argument
#include <iostream>
using namespace std;

class subject
{
    char name[30];
    int rollno;
    float marks;
public:
    void input()
    {
        cout << "enter name of student :" << endl;
        cin >> name;
        cout << "enter rollno of student:" << endl;
        cin >> rollno;
        cout << "enter marks of student:" << endl;
        cin >> marks;
    }
    void output()
    {
        cout << "name of student is";
        cout << "roll no is";
        cout << "marks is";
    }
};

*/
/*
#include <iostream>
using namespace std;
class student
{
    int roll;
    float avg;
    public:
    void get()
    {
        cout<<"Enter the roll and average mark ";
        cin>>roll>>avg;
    }
    void show(student k)
    {
        cout<<"Roll = "<<k.roll<<" Average mark = "<<avg<<endl;
    }
    
};
int main()
{
     student s1,s2,s3;
     s1.get();
     s2.get();
     s3.get();
     s1.show(s2);
     //s2.show(s3);
     //s3.show(s1);

    return 0;
}
*/
