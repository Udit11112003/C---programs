// 1  WAP to display content of a file using character output function.
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
int main()
{
    char fileName[30], ch;
    fstream fp;
    cout << "Enter the Name of File: ";
    gets(fileName);
    fp.open(fileName, fstream::in);
    if (!fp)
    {
        cout << "\nError Occurred!";
        return 0;
    }
    cout << "\nContent of " << fileName << ":-\n";
    while (fp >> noskipws >> ch)
        cout << ch;
    fp.close();
    cout << endl;
    return 0;
}

// 2 WAP to copy content of one file to another.
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    string line;
    ifstream ini_file{
        "original.txt"};
    ofstream out_file{"copy.txt"};
    if (ini_file && out_file)
    {

        while (getline(ini_file, line))
        {
            out_file << line << "\n";
        }
        cout << "Copy Finished \n";
    }
    else
    {
        printf("Cannot read File");
    }
    ini_file.close();
    out_file.close();
    return 0;
}

// 3 WAP to write 10 strings into a file and display them from file
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in("file1.txt");
    ofstream f("file2.txt");
    while (!in.eof())
    {
        string text;
        getline(in, text);
        f << text << endl;
    }
    return 0;
}

// 4 WAP to display content of a file in reverse order
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    string str, line;
    file.open("codesdope.txt", ios::in);
    while (file >> str)
    {
        line = line + str;
        line = line + " ";
    }
    file.close();
    cout << "Line written on file : Before reversing" << endl;
    cout << line << endl;
    reverse(line.begin(), line.end());
    file.open("codesdope.txt", ios::in | ios::out | ios::trunc);
    file << line << endl;
    cout << "Line written on file : After reversing" << endl;
    cout << line << endl;
    file.close();
}

// 5
#include <iostream>
using namespace std;
void Count(string str)
{
    int upper = 0, lower = 0, number = 0, special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i] >= '0' && str[i] <= '9')
            number++;
        else
            special++;
    }
    cout << "Upper case letters: " << upper << endl;
    cout << "Lower case letters : " << lower << endl;
    cout << "Number : " << number << endl;
    cout << "Special characters : " << special << endl;
}
int main()
{
    string str = "#GeeKs01fOr@gEEks07";
    Count(str);
    return 0;
}

// 6

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any Alphabet :\n";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "\nYou Entered A Lowercase Alphabet\n";
        ch = ch - 32;
        cout << "\nThe uppercase alphabet is " << ch;
    }
    else
    {
        cout << "\nYou Entered An Uppercase Alphabet\n";
        ch = ch + 32;
        cout << "\nTe Lowercase Alphabet Is " << ch;
    }
    cout << endl;
    return 0;
}

// 7 WAP to read and write objects to a file, using read and write funtions
#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    char name[30];
    int age;

public:
    void getData(void)
    {
        cout << "Enter name:";
        cin.getline(name, 30);
        cout << "Enter age:";
        cin >> age;
    }

    void showData(void)
    {
        cout << "Name:" << name << ",Age:" << age << endl;
    }
};
int main()
{
    student s;
    ofstream file;
    file.open("aaa.txt", ios::out);
    if (!file)
    {
        cout << "Error in creating file.." << endl;
        return 0;
    }
    cout << "\nFile created successfully." << endl;
    s.getData();
    file.write((char *)&s, sizeof(s));
    file.close();
    cout << "\nFile saved and closed succesfully." << endl;
    ifstream file1;
    file1.open("aaa.txt", ios::in);
    if (!file1)
    {
        cout << "Error in opening file..";
        return 0;
    }
    file1.read((char *)&s, sizeof(s));
    s.showData();
    file1.close();
    return 0;
}

// 8
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    friend ostream &operator<<(ostream &out, const Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
};

ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}

int main()
{
    Complex c1;
    cin >> c1;
    cout << "The complex object is ";
    cout << c1;
    return 0;
}
