
#include <iostream>
using namespace std;

int main()
{
	double num1, num2;
	
	char opcode;
	char choice;
	do{
	cout << "Enter Math Operator (+,-,*,/:";
	cin >> opcode;
	cout << "Enter First Operand: ";
	cin >> num1;
	cout << "Enter Second Operand: ";
	cin >> num2;
	
	switch (opcode)
	{
	case '+':
		cout << num1 << " Plus " << num2 << " equals " << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 << " Minus " << num2 << " equals " << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 << " Times " << num2 << " equals " << num1 * num2 << endl;
		break;
	case '/':
	if (num2 == 0)
	cout << "Can not divide by zero!" << endl;
	else
		cout << num1 << " divided by" << num2 << " equals " << num1 / num2 << endl;
		break;
	
	default:
		cout << " Not a valid Operator " << endl;
	}
	cout << "Want to try again? Y/N: ";
	cin >> choice;
	}
	while (choice == 'Y'|| choice =='y');
		cout << "Sorry to see you go!" << endl;
	
	
	return 0;
}

