

#include <iostream>
using namespace std;


int main()
{
	int grade;
	cout << "Enter Grade:";
	cin >> grade; 

	cout << "The Grade is: " << (grade >= 60 ? "Good job you passed!" : "Unfortunately you failed") << endl;


	return 0;
}