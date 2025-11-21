#include <iostream>

using namespace std;


void functionA(int a);

int x = 10, y = 20, z = 30;
int main()
{
	int x = 101;
	cout << x << "  " << y << "  " << z << endl;
	{
		int y = 201
		cout << x << "  " << y << "  " << z << endl;
	}
	cout << x << "  " << y << "  " << z << endl;
	functionA(x);
	functionA(40);
	cout << x << "  " << y << "  " << z;
	return 0;

}
void functionA(int a)
{
	int x = 1;
	cout << x << "  " << a << "  " << z << endl;
	z++;
}