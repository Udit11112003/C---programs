#include<iostream>
#include<cmath>
using namespace std;
class area{
    public:
    int a,h;
    
    void input(){
        cout<<"enter side"<<endl;
        cin>>a;
        cout<<"enter height"<<endl;
        cin>>h;
    }
    
};
void area:: display(void){
        cout<< "area of t"<<0.5*a*h<<endl;
        cout<< "side "<<a*a<<endl;
        cout<<sqrt(144)<<endl;
        cout<< " height "<< h*h<<endl;
    }
int main(){
    area n;
    n.input();
    n.display();
    return 0;
}

