//2.stores distance in feet,inches and meter centimeter format respectively
#include<iostream>
using namespace std;
class A;
class B
{
    float centimetre , metre;
    public:
    B(float m, float c){
        metre=m;
        centimetre=c;
    }
    friend void compares(B &x,A &y);
};
class A
{
    float inch;
    float feet;
    public:
    A(float i,float f){
        inch= i ;
        feet= f;
    } 
    friend void compares (B &,A &);
};
void compares(B &a, A &b)
{
    if((b.feet*0.0254)< a.centimetre ){
       cout<<"distance in metre and centimetre is largest";
    }
    else{
        cout<<"distance in inch and feet is largest";
    }
}
int main(){
    B a(20,30);
    A b(50,60);
    compares(a,b);
}