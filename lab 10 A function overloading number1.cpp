

#include <iostream>
using namespace std;

void countUp();
void countUp(int stop);
int main()
{
	countUp();
	countUp(100);
	countUp(6);
}

void countUp()
{
	cout << "Version 1" << endl;

	for (int x = 1; x <= 10; x++)
		cout << x << endl;
	cout << "------------------" << endl;

}
void countUp(int stop)
{
	cout << "Version 2" << endl;
	for (int x = 1; x <= stop; x++)
		cout << x << endl;
	cout << "------------------" << endl;

}