/*
//1
#include <iostream>
using namespace std;
float Division(float num, float den)
{
	return (num / den);
}
int main()
{
	float numerator = 12.5;
	float denominator = 0;
	float result;
	result = Division(numerator, denominator);
	cout << "The quotient of 12.5/0 is "
		<< result << endl;
} 
*/
/*
//2
#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5};
	printf("arr [0] is %d\n", arr[0]);
	printf("arr[10] is %d\n", arr[10]);
	return 0;
}
*/
/*//3
#include<iostream>
using namespace std;
int main()
{
int a=10, b=0, c;
try
{
	if(b==0)
		throw(c); 
	else
	c=a/b; 				
}
catch(char c)   
{
	cout<<"Caught exception : char type ";
}
catch(int i)  
{
	cout<<"Caught exception : int type ";
}
catch(short s)    
{
	cout<<"Caught exception : short type ";
}
cout<<"\n Hello";
}*/
/*
//4
#include<iostream>
using namespace std;
int n;
#define size 10
template<class T>
void sel(T A[size])
{
 int i,j,min;
 T temp;
 for(i=0;i<n-1;i++)
 {
 min=i;
 for(j=i+1;j<n;j++)
 {
 if(A[j]<A[min])
 min=j;
 }
 temp=A[i];
 A[i]=A[min];
 A[min]=temp;
 }
 cout<<"\nSorted array: ";
 for(i=0;i<n;i++)
 {
 cout<<" "<<A[i];
 }
}
int main()
{
 int choice;
 char C[size];
 int A[size];
 float B[size];
 int i;
 cout<<"-----------------------";
 do
 {
 cout<<"\n 1. Integer : ";
 cout<<"\n 2. Float : ";
 cout<<"\n 3. Exit : "<<endl;
 cout<<"\n Enter Choice : ";
 cin>>choice;
 switch(choice)
 {
 case 1:
 {
 cout<<"\nEnter Total Number Of Integer Elements:";
 cin>>n;
 cout<<"\nEnter Integer Elements:";
 for(i=0;i<n;i++)
 {
 cin>>A[i];
 }
 sel(A);
 break;
 }
 case 2:
 {
 cout<<"\nEnter Total Number Of Float Elements:";
 cin>>n;
 cout<<"\nEnter Float Elememts:";
 for(i=0;i<n;i++)
 {
 cin>>B[i];
 }
 sel(B);
 break;
 }
 case 3:
 {
 cout<<"Program Exited Successfully"<<endl;
 exit(0);
 }
 default:
 {
 cout<<"\n Invalid";
 }
 }
 }
 while(choice!=4);
return 0;
}
*/

//5
#include<iostream>
using namespace std;
template<class T1, class T2>
class Test
{
		T1 a;
		T2 b;
	public:
		Test(T1 x, T2 y)
		{
			a = x;
			b = y;
		}
		void show()
		{
			cout << a << " and " << b << endl;
		}
};
int main()
{
	Test <float, int> test1 (1.23, 123);
	Test <int, char> test2 (100, 'W');
	test1.show();
	test2.show();
	return 0;
}
