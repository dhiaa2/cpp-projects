
#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter Grade:";
    cin >> grade;

    if (grade >= 90)
    {
        cout << "Well done congrats on your A." << endl;
        cout << "Remember to always strive for 100!" << endl;
    }
    else
    {
        cout << "Keep Practicing!" << endl;
        cout << "You need to contribute more time to studying during the week." << endl;
    }
    cout << "'----------------------'" << endl;

    if (grade < 90)
    {
        cout << "Keep Practicing!" << endl;
        cout << "You need to contribute more time to studying during the week." << endl;
    }
    else
    {
        cout << "Well done congrats on your A." << endl;
        cout << "Remember to always strive for 100!" << endl;
    }
    cout << "'----------------------'" << endl;

    if (grade >= 90)
    {
        cout << "Well done congrats on your A." << endl;
        cout << "Remember to always strive for 100!" << endl;
    }
    if (grade < 90)
    {
        cout << "Keep Practicing!" << endl;
        cout << "You need to contribute more time to studying during the week." << endl;
    }



    return 0;
}
