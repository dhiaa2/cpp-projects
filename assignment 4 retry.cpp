

#include <iostream>
#include <string>
#include <ctime>

using namespace std;



int main()
{


	srand(time(0));

	cout << "Please enter your first and last name:" << endl;
	string fullname;
	getline(cin, fullname);
	char response = 'Y';

	do {
		int secret = rand() % 100 + 1;
		int guess = 0;
		int guesscount = 0;
		cout << "Hi " << fullname << " , I'm thinking of a number between 1 and 100!!" << endl;


		do {

			cout << "Enter Guess:";
			cin >> guess;
			++guesscount;

			if (guess > secret)
				cout << "Too High!" << endl;

			else if (guess < secret)
				cout << "Too Low!" << endl;
			else
				cout << "You Got It!!" << endl;


		} while (guess != secret);

		cout << "You Got It!!" << endl;

		if (guesscount <= 3)
			cout << "Holy Cow that is Impressive!!" << endl;

		else if (guesscount <= 8)
			cout << "Not Bad. Channel your inner clairvoyant!" << endl;
		else
			cout << "Maybe you fell asleep and you repeatedly hit the keyboard with your hard head!" << endl;

		cout << "Would you like to try your luck again, or are you a failure?" << endl;
		cin >> response;
	} while (toupper(response) == 'Y');

	cout << "Thanks for playing." << endl;


	return 0;
}



