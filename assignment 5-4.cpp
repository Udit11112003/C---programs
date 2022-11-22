//4
#include<iostream>
using namespace std;
class student{
    string name;
    int rollno;
    int marks;
    int avg;
    public:
    void getDetails()
    {
        int i;
        cout<<"\nEnter details for student "<<i+1<<": ";
        cout<<"\nName: ";
        cin>>name;
        cout<<"\nRoll no: ";
        cin>>rollno;
        cout<<"\nTotal marks: ";
        cin>>marks;
    }       
    int getsum(int a, int n)
    {
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+a;
        }
        return sum;
    }
};
int main()
{
    int n,a1;
    cout<<"Enter the number of students: ";
    cin>>n;
    student s1[n];
    for(int i=0;i<n;i++)
    {
        s1[i].getDetails();
    }
    for(int i=0;i<n;i++)
    {
        a1=s1[i].marks;
        getsum(a1,n);
    }
    int avg=sum/n;
    cout<<"\nAverage is "<<avg;
    return 0;
}
