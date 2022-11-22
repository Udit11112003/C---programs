/*
//1
//a single inheritance
#include <iostream>
using namespace std;
class electronicDevice
{
public:
    electronicDevice()
    {
        cout << "I am an electronic device.\n\n";
    }
};
class Computer: public electronicDevice
{
public:
    Computer()
    {
        cout << "I am a computer.\n\n";
    }
};
int main()
{
    Computer obj; 
    return 0;
}
*/
/*
//b
#include <iostream>
using namespace std;
class electronicDevice
{
    public:
        electronicDevice()
        {
            cout << "I am an electronic device.\n\n";
        }
}; 
class Computer
{
    public:
        Computer()
        {
            cout << "I am a computer.\n\n";
        }
}; 
class Linux_based : public electronicDevice, public Computer
{}; 
int main()
{
       Linux_based obj;
    return 0;
}
*/
/*
//c
#include <iostream>
using namespace std;
class electronicDevice
{
    public:
        electronicDevice()
        {
            cout << "I am an electronic device.\n\n";
        }
};
class Computer: public electronicDevice
{
    public:
        Computer()
        {
            cout << "I am a computer.\n\n";
        }
};
class Linux_based : public Computer
{
    public:
        Linux_based()
        {
            cout << "I run on Linux.\n\n";;
        }

};
int main()
{
    Linux_based obj; 
    return 0;
}
*/
/*
//d
#include <iostream>
using namespace std;
class electronicDevice
{
public:
    electronicDevice()
    {
        cout << "I am an electronic device.\n\n";
    }
};
class Computer: public electronicDevice
{}; 
class Linux_based : public electronicDevice
{}; 
int main()
{
    Computer obj1;    
    Linux_based obj2;  
    return 0;
}
*/
/*
//e
#include <iostream>
using namespace std;
class electronicDevice
{
public:
    electronicDevice()
    {
        cout << "I am an electronic device.\n\n";
    }
};
class Computer
{
public:
    Computer()
    {
        cout << "I am a computer.\n\n";
    }
};
class Linux_based : public electronicDevice, public Computer
{};
class Debian: public Linux_based
{}; 
int main()
{
    Debian obj; 
    return 0;
}
*/
/*
//2 and 3
#include<iostream>
using namespace std;
class student{
	private:
		string name;
		string roll_number;
		int  age; 
};


class test: public student{
	private:
		int mark1, mark2, mark3, mark4, mark5;
	public:
		void input(int m1, int m2, int m3, int m4, int m5){
			cout<<"Enter the student's marks\n";
			cout<<"Mark 1\n";
			cin>>m1;
			cout<<"Mark 2\n";
			cin>>m2;
			cout<<"Mark 3\n";
			cin>>m3;
			cout<<"Mark 4\n";
			cin>>m4;
			cout<<"Mark 5\n";
			cin>>m5;
			mark1=m1; mark2=m2; mark3=m3; mark4=m4; mark5=m5;
			
		}
		
		int getMark1(){
			return mark1;
		}
		
		int getMark2(){
			return mark2;
		}
		
		int getMark3(){
			return mark3;
		}
		int getMark4(){
			return mark4;
		}
		int getMark5(){
			return mark5;
		}
		
		void display(){
			cout<<"The student's marks are:\n";
			cout<<"Mark 1: "<<mark1<<"\nMark 2:  "<<mark2<<"\nMark 3: "<<mark3<<"\nMark 4: "<<mark4<<endl;
			cout<<"Mark 5:  "<<mark5<<endl;
		}
};
class Result: public test{
	public:
		
		void calculate_totalMarks(){
			int m1, m2, m3,m4,m5;
			input(m1, m2, m3,m4,m5);
			int total = getMark1() + getMark2() + getMark3() + getMark4() + getMark5();
			display();
			cout<<"The total marks is:  "<<total<<endl;
			cout<<"The percentage is:    "<<total /5;
		}
};
int main(){


 Result r;
 r.calculate_totalMarks();
	
}
*/
 /*
//4
#include <iostream>
using namespace std;
class Student{
    protected:
        char name[20];
        int roll_number, age;
    public:
        Student(){}
        void getDetails(){
            cout<<"Input roll number: ";
            cin>>roll_number;
            cout<<"Input name: ";
            cin.get();
            cin.getline(name, 20);
            cout<<"Input age: ";
            cin>>age;
        }
        void putDetails(){
            cout<<"Roll Number: "<<roll_number<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class Test: public Student{
    protected:
        int s1, s2, s3, s4, s5;
    public:
        Test(): Student(){}
        void getmarks(){
            cout<<"Input marks: \n";
            cout<<"Subject 1: ";
            cin>>s1;
            cout<<"Subject 2: ";
            cin>>s2;
            cout<<"Subject 3: ";
            cin>>s3;
            cout<<"Subject 4: ";
            cin>>s4;
            cout<<"Subject 5: ";
            cin>>s5;
        }
        void putmarks(){
            cout<<"Subject 1: "<<s1<<endl;
            cout<<"Subject 2: "<<s2<<endl;
            cout<<"Subject 3: "<<s3<<endl;
            cout<<"Subject 2: "<<s4<<endl;
            cout<<"Subject 3: "<<s5<<endl;
        }
};
class Sports: public Student{
    protected:
        int indoor, outdoor;
    public:
        Sports(): Student(){}
        void getscore(){
            cout<<"Input sports scores: \n";
            cout<<"Indoor: ";
            cin>>indoor;
            cout<<"Outdoor: ";
            cin>>outdoor;
        }
        void putscore(){
            cout<<"Indoor: "<<indoor<<endl;
            cout<<"Outdoor: "<<outdoor<<endl;
        }
};
class Result: public Sports, public Test{
    int total;
    public:
        Result(): Sports(), Test(){
            Test::getDetails();
            getmarks();
            getscore();
            total = indoor + outdoor + s1 + s2 + s3;
        }
        void display(){
            cout<<endl;
            Test::putDetails();
            cout<<"Test Marks: \n"; Test::putmarks();
            cout<<"Sports Scores: \n"; Sports::putscore();
            cout<<"Total: "<<total<<endl;
            cout<<"Percentage: "<<total / 7 <<" % "<<endl;
        }
};
int main(){
    Result result;
    result.display();
    return 0;
}
*/

//5
#include<iostream>
#include<conio.h>
class shape
{
        public:
	virtual void area()=0;  // pure virtual function
};
class circle: public shape
{
   float r; //r=radius
   public:
    void area()
   {
       cout<<"\nEnter radius : ";
       cin>>r;
       cout<<"\nArea of circle : "<<(2.146*r*r);
   }
};
class rectangle: public shape
{
	int l,b; // l=length , b=bredth
	public:
   void area()
   {
       cout<<"\nEnter length : ";
       cin>>l;
       cout<<"\nEnter breadth : ";
       cin>>b;
       cout<<"\nArea of rectangle : "<<l*b;
   }
};
class triangle: public shape
{

	int h,b;
       float a;
	public:
       void area()
       {
   	    cout<<"\nEnter height : ";
            cin>>h;
            cout<<"\nEnter breadth : ";
            cin>>b;
            a=0.5*h*b;
            cout<<"\nArea of triangle : "<<a;
       }
};
int main()
{
   circle c;
   c.area();
   rectangle r;
   r.area();
   triangle t; 
   t.area();
   getch();
   return(0);
}

/*
//6
#include <iostream>
using namespace std;
class Employee{
    protected:
        string name;
        int id;
        double salary;
    public:
    
};
class Regular: public Employee{
    private:
        double DA;
        double HRA;
        double basic_salary;
    public:
     Regular(double d, double h, double b){
         DA=d;
         HRA=h;
         basic_salary=b;
     }
     void display(){
           cout<<"\nSalary of the Regular employee is "<<(DA+HRA+basic_salary);
        }  
};
class PartTime: public Employee{
    private:
        int number_of_hours;
        double pay_per_hour;
    public:
        PartTime(int n, double p){
            number_of_hours=n;
            pay_per_hour=p;
        }
        void display(){
            cout<<"\nSalary of the part-time employee is "<<(number_of_hours*pay_per_hour);
        }
};
int main()
{
    Regular r(2000,3000,10000);
    r.display();
    PartTime p(8,800);
    p.display();
    return 0;
}
*/
/*
//7
#include <iostream>
using namespace std;
class Account{
    protected:
        int account_number;
        string customer_name; 
        double balance=0.0;
    public:
        void deposit(){
            int amount;
            cout<<"\nEnter amount to deposit: ";
            cin>>amount;
            balance=balance+amount;
        }      
};
class Savings: public Account{
    private:
        double min_balance=500;
    
    public:    
        void withdraw(){
            int amount;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount;
            if (amount<min_balance)
                cout<<"The minimum amount that can be withdrawn is "<<min_balance;
                
            else
                balance=balance-amount;
        }
        void display(){
            cout<<"\nBalance= "<<balance;
        }
    
};
class Current: public Account{
    private:
        double over_due_amount=500000;
        
    public:    
        void withdraw(){
            int amount;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount;
            if (amount>over_due_amount)
                cout<<"\nThe maximum amount that can be withdrawn is "<<over_due_amount;
                
            else
                balance=balance-amount;
        }
        void display(){
            cout<<"\nBalance= "<<balance;
        }
        
};
int main()
{
    Account a;
    a.deposit();
    
    int c;
    cout<<"1. Savings\n2. Current\nEnter your choice:";
    cin>>c;
    
    if (c==1){
        Savings s;
        s.withdraw();
        s.display();
    }
    
    if (c==2){
        Current c;
        c.withdraw(); 
        c.display();
    }
    
    return 0;
}
*/
//8
