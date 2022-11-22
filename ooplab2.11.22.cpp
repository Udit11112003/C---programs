// 1.design a generic stack class which can be used to create integer or floating point stack objects
#include <iostream>
#include <string>
using namespace std;
#define SIZE 5
template <class T>
class Stack
{
public:
    Stack;
    void push(T k);
    T pop();
    T topElement();
    bool isEmpty();

private:
    int top;
    T st[SIZE];
};
template <class T>Stack <T>::stack(){top =-1}
template <class T>void Stack<T>::push(T k)
{
    if(isFull()){
        cout<<"stack is full";
    }
    cout<<"inserted element"<<k<<endl;
    top = top + 1;
    st[top] = k;
}

