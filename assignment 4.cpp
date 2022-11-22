/*
//1
#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
}c1 , c2, sum;

int main() {
    cout << "Enter 1st distance," << endl;
    cout << "Enter feet: ";
    cin >> c1.feet;
    cout << "Enter inch: ";
    cin >> c1.inch;

    cout << "\nEnter information for 2nd distance" << endl;
    cout << "Enter feet: ";
    cin >> c2.feet;
    cout << "Enter inch: ";
    cin >> c2.inch;

    sum.feet = c1.feet+c2.feet;
    sum.inch = c1.inch+c2.inch;

    // changing to feet if inch is greater than 12
    if(sum.inch > 12) {
        // extra feet
        int extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    } 

    cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}
*/
/*
//2
#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
int main()
{
   char str[200], ch;
   int len, i, asc_val;
   cout<<"Enter the String: ";
   gets(str);
   len = strlen(str);
   for(i=0; i<len; i++)
   {
      ch = str[i];
      if(i==0)
      {
         asc_val = ch;
         if(asc_val>=97 && asc_val<=122)
         {
            asc_val = asc_val-32;
            ch = asc_val;
            str[i] = ch;
         }
      }
      if(ch==' ')
      {
         ch = str[i+1];
         asc_val = ch;
         if(asc_val>=97 && asc_val<=122)
         {
            asc_val = asc_val-32;
            ch = asc_val;
            str[i+1] = ch;
         }
      }
   }
   cout<<"\nAll words are capitalized successfully!";
   cout<<"\nThe new string is:\n\n";
   cout<<str;
   cout<<endl;
   return 0;
}
*/

//3
#include<iostream>
#include <cstring>
using namespace std;
main()
{
    int in=0,out=0,p=0,len1,maxInd=0,max=0;
    char sub_str[100][100]={0};
    string str;
    cout<<"Enter your String:";
    getline(cin,str);

    //splitting Input String into sub string
    while(str[p]!='\0')
    {
        out=0;
        while(str[p]!=' '&&str[p]!='\0')
        {
            sub_str[in][out]=str[p];
            p++;
            out++;
        }
        sub_str[in][out]='\0';
        in++;
        if(str[p]!='\0')
        {
            p++;
        }
    }
    int len=in;
    max=strlen(sub_str[0]);
    //finding max length of Substring from splitting string length
        for(in=0;in<len;in++)
        {
            len1=strlen(sub_str[in]);
            if(len1>max)
            {
                max=len1;
                maxInd=in;
            }
        }
        cout<<"Longest Substring(Word) is "<<sub_str[maxInd]<<"\n";
}

/*
//4
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[200], ch;
    int i, j, len;
    cout<<"Enter the String: ";
    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    cout<<"\nString in Ascending Order: "<<str;
    cout<<endl;
    return 0;
}
*/
/*
//5
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int count = 0, i; 
    cout << "Enter a string : ";
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Number of words in the string are: " << count + 1;
    return 0;
}
*/
/*
//6
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr; //declaration of integer pointer
    int limit; //to store array limit
    int i; //loop counter
    int sum; //to store sum of all elements

    printf("Enter limit of the array: ");
    scanf("%d", &limit);

    //declare memory dynamically
    ptr = (int*)malloc(limit * sizeof(int));

    //read array elements
    for (i = 0; i < limit; i++) {
        printf("Enter element %02d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    //print array elements
    printf("\nEntered array elements are:\n");
    for (i = 0; i < limit; i++) {
        printf("%d\n", *(ptr + i));
    }

    //calculate sum of all elements
    sum = 0; //assign 0 to replace garbage value
    for (i = 0; i < limit; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of array elements is: %d\n", sum);

    //free memory
    free(ptr); //hey, don't forget to free dynamically allocated memory.

    return 0;
}
*/
/*
//7
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
//8
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int num, int beg, int end)
{
 int mid;
 
 if (beg > end){
  
  cout << "Number is not found";
  return 0;
  
 } else {
  
  mid = (beg + end) / 2;
  
  if(arr[mid] == num){
   
   cout << "Number is found at " << mid << " index \n";
   return 0;
  
  } else if (num > arr[mid]) {
   
   BinarySearch (arr, num, mid+1, end);
   
  } else if (num < arr[mid]) {
   
   BinarySearch (arr, num, beg , mid-1);
  }
 }
 
}
 
int main() {
 
 int arr[100], num, i, n, beg, end;
 
 cout <<"Enter the size of an array (Max 100) \n";
 cin >> n;
 
 cout <<"Enter the sorted values \n";
 
 for(i=0; i<n; i++) {
  
  cin >> arr[i];
 }
 
 cout <<"Enter a value to be search \n";
 cin >> num;
 
 beg = 0;
 end = n-1;
 
 BinarySearch (arr, num, beg, end);
 
 return 0;
}
*/