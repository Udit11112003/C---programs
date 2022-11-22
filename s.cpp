//4
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    int marks;
    void getDetails()
    {
        static int i=1;
        cout<<"\nEnter details for student "<<i++<<": ";
        cout<<"\nName: ";
        cin>>name;
        cout<<"\nRoll no: ";
        cin>>rollno;
        cout<<"\nTotal marks: ";
        cin>>marks;
    }     
    void display()
    {
        static int i=1;
        cout<<"\nDisplaying "<<i++<<" student :";
        cout<<"\nName: "<<name;
        cout<<"\nRoll no: "<<rollno;
        cout<<"\nTotal marks: "<<marks;
    }
};
int main()
{
    int a1=0;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    student s1[n];
    for(int i=0;i<n;i++)
    {
        s1[i].getDetails();
    }
    for(int i=0;i<n;i++)
    {
        s1[i].display();
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+s1[i].marks;
    }
    int avg=sum/n;
    cout<<"\nAverage is "<<avg;
    char a;
    while(a1==0)
    {
        cout<<"\nDo you want to search(y/n):";
        cin>>a;
        if(a=='y'||a=='Y')
        {
            int k;
            cout<<"\nEnter the roll to search: ";
            cin>>k;
            for(int i=0;i<n;i++)
            {
                if(s1[i].rollno==k)
                {
                    cout<<"\nName: "<<s1[i].name;
                    cout<<"\nRoll: "<<s1[i].rollno;
                    cout<<"\nMarks: "<<s1[i].marks;
                }
            }
        }
        else
            a1=1;
    }

    return 0;
}
