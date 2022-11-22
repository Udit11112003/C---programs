// 2.write a program using template to find out the largest element amoung the array
#include <iostream>
using namespace std;
#define N 10
template <class T>
T find_max(T t[], int NO_OF_TERMS)
{
    T temp_max = t[0];
    for (int i = 0; i < NO_OF_TERMS; i++)
    {
        if (temp_max < t[i])
        {
            temp_max = t[i];
        }
    }
    return temp_max;
}
int main()
{
    int numbers[N];
    cout << "enter numbers:" << endl;
    for (int i = 0; i < N; i++)
    {
        cin << numbers[i];
    }
    cout << "largest number of array is" << find_max(numbers, N) << endl;
    return 0;
}