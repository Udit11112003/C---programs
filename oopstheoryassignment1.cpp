/*
//3
#include<iostream>
using namespace std;

int add(int n);

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum =  " << add(n);

    return 0;
}

int add(int n) {
    if(n != 0)
        return n + add(n - 1);
    return 0;
}
*/
/*
//4
#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}
*/
/*
//5
#include <iostream>
using namespace std;
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}
*/
/*
//6
#include<iostream>
using namespace std;
int count_digit(int num)
{
    static int count=0;
    if(num!=0)
    {
        count++;
        count_digit(num/10);
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The number of digits in the Given Number is "<<count_digit(n);
}
*/
/*
//7b
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}
*/
/*
//7a
#include<iostream>
using namespace std;

class Add{
  public:
    void sum(int r, int c){
      int m1[r][c], m2[r][c], s[r][c];
      cout << "Enter the elements of  first 1st matrix: ";
      for (int i = 0;i<r;i++ ) {
        for (int j = 0;j < c;j++ ) {
          cin>>m1[i][j];
        }
      }
      cout << "Enter the elements of  first 1st matrix: ";
      for (int i = 0;i<r;i++ ) {
        for (int j = 0;j<c;j++ ) {
          cin>>m2[i][j];
        }
      }
      cout<<"Output: ";
      for (int i = 0;i<r;i++ ) {
        for (int j = 0;j<c;j++ ) {
          s[i][j]=m1[i][j]+m2[i][j];
          cout<<s[i][j]<<" ";
        }
      }
    }
};
int main(){
   int row, col;
   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>row;
   cout<<"Enter the number of column(should be >1 and <10): ";
   cin>>col;
   Add obj;
   obj.sum(row, col);
   return 0;
}
*/