/*//5a SHALLOW COPY

#include <iostream>
using namespace std;

class box {
private:
	int length;
	int breadth;
	int height;

public:
	void set_dimensions(int length1, int breadth1,
						int height1)
	{
		length = length1;
		breadth = breadth1;
		height = height1;
	}
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << breadth
			<< "\n Height = " << height
			<< endl;
	}
};

int main()
{
	box B1, B3;
	B1.set_dimensions(14, 12, 16);
	B1.show_data();

	box B2 = B1;
	B2.show_data();

	B3 = B1;
	B3.show_data();

	return 0;
}
*/
//5b DEEP COPY
#include <iostream>
using namespace std;

class box {
private:
	int length;
	int* breadth;
	int height;

public:
	box()
	{
		breadth = new int;
	}
	void set_dimension(int len, int brea,
					int heig)
	{
		length = len;
		*breadth = brea;
		height = heig;
	}
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << *breadth
			<< "\n Height = " << height
			<< endl;
	}

	box(box& sample)
	{
		length = sample.length;
		breadth = new int;
		*breadth = *(sample.breadth);
		height = sample.height;
	}

	~box()
	{
		delete breadth;
	}
};

int main()
{
	box first;
	first.set_dimension(12, 14, 16);
	first.show_data();
	box second = first;
	second.show_data();

	return 0;
}