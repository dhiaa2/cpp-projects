

#include <iostream>
using namespace std;
int main()
{
    int score = 1;
    char choice;
    do {

        cout << "Main Menu" << endl;
        cout << "A. Double Score" << endl;
        cout << "B. Minus Five" << endl;
        cout << "C. Suprise Me" << endl;
        cout << "Q. Quit" << endl;
        cout << "Make Choice:" << endl;
        cin >> choice;
        switch (toupper(choice))  //adding the toupper checks upper and lower cases
        {
        case 'A':
        //case 'a':
            score *= 2;
            break;

        case 'B':
        //case 'b':
            score -= 5;
            break;

        case 'Q':
        //case 'q':

            cout << "Sorry to see you leave" << endl;
            break;
        default:
            cout << "Not a valid choice" << endl;

        }
        cout << "Score: " << score << endl;

    } while (toupper(choice) != 'Q'); //adding the toupper checks upper and lower cases



    return 0;


    
}

