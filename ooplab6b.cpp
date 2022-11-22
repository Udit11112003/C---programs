//2
#include<iostream>
using namespace std;
class TIME{
    private:
    int hours;
    int minutes;
    public:
    TIME(){
        hours=0;
        minutes=0;
    }
    TIME(int h,int m){
        hours=h;
        minutes=m;
    }
    void display(){
        cout<<"TIME:";
        cout<<hours<<":"<<minutes<<endl;
    }
    void add(TIME x,TIME y){
        int tmp=0;
        minutes=x.minutes+y.minutes+tmp;
        tmp=0;
        if(minutes>59){
            minutes=60;
            tmp++;
        }
        hours=x.hours+y.hours+tmp;
        if(hours>=24)
        hours-=24;
        cout<<hours<<":"<<minutes<<endl;
    }
};
int main(){
    TIME time1(15,55);
    TIME time2(10 30);
    TIME1.display();
    TIME2.display();
    return 0;
}