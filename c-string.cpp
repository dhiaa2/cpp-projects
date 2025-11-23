#include <iostream>

using namespace std;


void makeVertical(char str[]);
int main()
{
	char str[250];

	cout << "Please enter a message" << endl;
	cin.getline(str, 249);
	makeVertical(str);
	cout << str << endl;




	return 0;
}
void makeVertical(char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			str[i] = '\n';
		i++;

	}



}