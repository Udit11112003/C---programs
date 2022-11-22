// #include<iostream>
// using namespace std;
// class hero {
//     public:
//     int age;
//     string name;
//     int roll;
//   void input(){
//     cout<<"age is"<<endl;
//     cin>>age;
//     cout<<"name"<<endl;
//     cin>>name;
//     cout<<"roll"<<endl;
//     cin>>roll;
//   }
//  void display(){
//     cout<<age<<name<<roll<<endl;
//  }
// };
// int main(){
//     hero h;
//     h.input();
//     h.display();
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// class area{
//     public:
//     int a,h;
    
//     void input(){
//         cout<<"enter side"<<endl;
//         cin>>a;
//         cout<<"enter height"<<endl;
//         cin>>h;
//     }
//     
// };
//void area:: display(void){
//         cout<< "area of t"<<0.5*a*h<<endl;
//         cout<< "side "<<a*a<<endl;
//         cout<<sqrt(144)<<endl;
//         cout<< " height "<< h*h<<endl;
//     }
// int main(){
//     area n;
//     n.input();
//     n.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class complex;
// class calculator{
//     public :
//     int add(int a , int b)
//     return (a+b);
//     int sumComplex(complex ,complex );
// };
// class complex{
//     int a,b;
//     friend int calculator :: sumComplex(complex o1,complex o2);
//     public:
//     void setnumber(int n1, int n2){
//     a= n1;
//     b=n2;
// }
// void display()
// cout << "your number "<<a+b<<"i"<<endl;
// };

// int calculator :: sumComplex(complex o1,complex o2){
//     return (o1.a+o2.b);

// }

// int main()
// {
//     complex o1 , o2;
//     o1.setnumber(1,4);
//     o2.setnumber(5,6);
//     calculator calc;
//     int res = calc.sumComplex(o1,o2);
//     cout<< "result ="<< res << endl;
//     return 0;

// }


// #include <iostream>
// using namespace std;

// class complex{
//     public:
//     int a,b;
//     complex(void);

//     void printData()
//     {
//         cout<<"complex number "<<a<<"+"<<b<<"i"<<endl;
//     }
//     ~complex(){
//         cout<<"destructor"<<endl;
//     }
// };
// complex::complex(void)
// {
//     a=10;
//     b=9;
// };
// int main(){
//     complex c;
//     c.printData();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class shape{
//     private:
//     float a;
//     float b;
//     public:
//     void input(){
//         cout<<"enter no."<<endl;
//         cin>>a>>b;
//     }
// };
// class Rectangle:public shape
// {
//     public: 
//     float c,d;
//     void display(){
//         shape::input();
//     cout<<"area of rectangle"<<(c*d)<<endl;
//     }
// };
// class Square:public shape
// {
//     public:
//     float e;
//     void display(){
//         shape::input();
//         cout<<"area of square"<<(e*e)<<endl;
//     }
// };
// int main()
// {
//     shape shp;
//     Rectangle rec;
//     Square squ;
//     shp.input();
//     rec.display();
//     squ.display();
//     return 0;
// }
