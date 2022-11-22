#include<iostream>
using namespace std;
class students{
    private:
    int rno;
    char name[50];
    int marks;
   public:
   void enter(){
   cout<<"Enter the Name,Roll number,marks of the student : "<<endl;
   cin>>name>>rno>>marks;
   }
   void display(){
    cout<<"Name of the student is : "<<name<<endl;
    cout<<"Roll number of the student is : "<<rno<<endl;
    cout<<"Total marks of students : "<<marks<<endl;
   }
};
int main(){
    students a;
    a.enter();
    a.display();
}