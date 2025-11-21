
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, ans, guess;


		//query control, how many (go again loop)
		{
			//snetinel (inside loop)
			{
				num1 = rand() % 12 + 1;
				//generates a random number between 0 and 11
				num2 = rand() % 12 + 1;
				ans = num1 * num2;
				do 
				{

					cout << num1 << " X " << num2 << " = ";
					cin >> guess;

				} while (guess != ans);
				// keep in loop while guess is not equal to answer
				cout << "Got it!" << endl;
			}
		}
		return 0;
}

