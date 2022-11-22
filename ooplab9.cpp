/*
//1
#include<iostream>
class shape
{
    public:
    virtual void area()=0;
};
class circle:public shape{
    float r;
    public:
    void area()
    {
        cout<<"\n enter radius:";
        cin>>r;
        cout<<"\nArea of circle:"<<(3.14*r*r);
    }
};
class square:public shape{
    int s;
    public:
    void area()
    {
        cout<<"\n enter side:";
        cin>>s;
        cout<<"area of square:"<<(s*s);
    }
};
class triangle:public shape{
    int h,b;
    float a;
    public:
    void area()
    {
        cout<<"enter height";
        cin>>h;
        cout<<"enter base";
        cin>>b;
        a=(0.5*h*b);
        cout<<"area of triangle"<<a;
    }
};
int main(){
    circle c;
    c.area();
    square s;
    s.area();
    triangle t;
    t.area();
    getch();
    return 0;
}
*/







/*
// 3
#include <iostream>
using namespace std;
class Account{
    //virtual void Account()=0;
    
    public:
     virtual void Acc(){};
     int Account_number;
        string customer_name; 
        double balance=0.0;
        void deposit(){
            int amount;
            cout<<"\nEnter amount to deposit: ";
            cin>>amount;
            balance=balance+amount;
            
        }      
};
class Savings: public Account{
    public:
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
    public:
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





/*
//2
#include <iostream>
using namespace std;
class Employee{
    protected:
        string name;
        int id;
        double salary;
    public:
    virtual void emp(){};
    
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

//4
#include <iostream>
using namespace std;

// Abstract class
class Shape {
   protected:
    float dimension;

   public:
    void getDimension() {
        cin >> dimension;
    }
    // pure virtual Function
    virtual float calculateArea() = 0;
};

// Derived class
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main() {
    Square square;
    Circle circle;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;

    return 0;
}