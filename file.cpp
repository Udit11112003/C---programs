/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("file.txt");

    ofile<<"this is a line in a file";
    ofile<<"this is another file";

    cout<<"data written in file";
    ofile.close();
}
*/
/*
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream ifile;
    ifile("inputfile.txt");
    cout<<"reading data from file";
    while(!ifile.eof()){
        char ch;
        ifile>>ch;
        cout<<ch<<endl;
        float amt;
        ifile>>amt;
        cout<<amt<<endl;
    }
    ifile.close();
    return 0;
}
*/

#include <iostream>
using namespace std;
class Z
{
public:
	Z()
	{
		cout<<"Constructor called"<<endl;
	}
	~Z()
	{
		cout<<"Destructor called"<<endl;
	}
};
int main()
{
	Z z1; 
	int a = 1;
	if(a==1)
	{
		Z z2; 
	} 
}
