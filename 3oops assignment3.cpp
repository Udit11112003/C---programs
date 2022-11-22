/*
#include <iostream>
using namespace std;
void displayChar(int n = 80, char ch = '*')
{
for (int i = 0; i < n; i++)
{
cout << ch << " ";
}
cout << endl;
}

int main()
{
 int n;
char ch;
cin >> n >> ch;
displayChar(n, ch);
 return 0;
}
*/
/*
#include<iostream>
using namespace std;
inline int square(int n){
return n*n;
}
inline int cube(int n){
return n*n*n;
}
int main(){
int number;
cout<<"Number: ";
cin>>number;
cout<<"Square of "<<number<<" is "<<square(number)<<endl;
cout<<"Cube of "<<number<<" is "<<cube(number)<<endl;
 return 0;
}
*/
/*
#include <iostream>

using namespace std;

void swap(int &x,int &y){
  int temp=x;
  x=y;
  y=temp;
}

int main(){
  int a,b;
  cout<<"enter the first number";
  cin>>a;
  cout<<"enter the second number";
  cin>>b;
  cout<<"a="<<a<<"and b="<<b;
  swap(a,b);
  cout<<endl<<"after swapping";
  cout<<"\na="<<a<<"and b="<<b;
  
}
*/
#include<iostream>
using namespace std;

inline int increment(int a)
{
    return (++a);
}
int main()
{
    int s;
    cout<<"Enter the value to be incremented:\n";
    cin>>s;
    cout<<"The incremented value is:"<<increment(s)<<"\n";
    return 0;
}

#include <iostream>
using namespace std;
int volume(int rad)
{
    return((4/3)*3.14*rad*rad);
}
int volume(int a, int b, int c)
{
    return(a*b*c);
}
int volume(int x, int y)
{
    return(3.14*x*x*y);
}
int main()
{
int ch;
cout<<"1. Sphere\n"<<"2. Cylinder\n"<<"3. Cuboid\n"<<"Enter your choice: ";
 cin>>ch;
switch(ch)
{
case 1:
 {
int n;
cout<<"\nEnter radius: ";
cin>>n;
cout<<"\nVolume of sphere: "<<volume(n);
 break;
}
case 2:
{
int r,h;
cout<<"\nEnter radius and height: ";
 cin>>r>>h;
cout<<"Volume of Cylinder: "<<volume(r,h);
 break;
 }
case 3:
{
 int l,b,h;
 cout<<"Enter length,breadth,height:";
cin>>l>>b>>h;
cout<<volume(l,b,h);
break;
        }
    }
    return 0;
}