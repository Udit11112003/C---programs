#include<iostream>
using namespace std;
class student{
    private:
     string studentName;
    int roll , total;
  public:
  student(){
  }
  student(string n, int a, int p){
			studentName = n;
			roll = a;
			total = p;
		}

        void setDetails(string n, int a, int p){
			studentName = n;
			roll = a;
			total = p;
		}
        string getName(){
			return studentName;
		}
		int getroll(){
			return roll;
		}
		int gettotal(){
			return total;
		}
void printstudent(){
			cout<<"The student name is\t"<<studentName<<endl;
			cout<<"Roll number of the  student is\t"<<roll<<endl;
			cout<<"Total marks of the student are \t"<<total<<endl;
		}
friend void display(int x);
};
void display(int x ){
	string studentName;
		int roll,total;
	student arr[x];
	for(int i=0; i<x; i++){
		cout<<"Enter the Name of the student\n";
		cin>>studentName;
		cout<<"Enter the roll number of the student \n";
		cin>>roll;
		cout<<"Enter the Total marks of the students\n";
		cin>>total;
		arr[i].setDetails(studentName,roll,total);
	}
	for(int i=0; i<x; i++){
		cout<<"Details of the student  "<<(i+1)<<"  is:\n";
		arr[i].printstudent();
	}
}
int main(){
    int x;
    cout<<"Enter the number of students\n";
    cin>>x;
    display(x);
}