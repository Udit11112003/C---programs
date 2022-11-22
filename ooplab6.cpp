//1
#include<iostream>
using namespace std;
class complex{
    float x;
    float y;
    public:
    complex()
    {
        x=0;
        y=0;
    } 
    complex operator +(complex);
    complex operator *(complex);
    friend istream &operator >>(istream &input,complex &t){
        cout<<"enter real part";
        input>>t.x;
        cout<<"enter imaginary part";
        input>>t.y;
    }
    friend ostream &operator<<(ostream&output,complex &t)
    {
        output<<t.x<<"+"<<t.y<<"i\n" ;   
    }
};
complex complex ::operator*(complex c)
{
    complex temp2;
    temp2.x=(x*c.x)-(y*c.y);
    temp2.y=(y*c.x)+(y*c.y);
    return (temp2);
}
int main(){
    complex c1,c2,c3,c4;
    cout<<"default constructor value=\n";
    cout<<c1;
    cout<<"\n enter 1st number";
    cin>>c1;
    cout<<"\n enter 2nd number";
    cin>>c2;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"\n the 1st number is";
    cout<<c1;
    cout<<"\n the 2nd number is";
    cout<<c2;
    cout<<"\n the addition is";
    cout<<c3;
    cout<<"\n the multiplication is";
    cout<<c4;
    return 0;
}