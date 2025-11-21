
#include <iostream>
using namespace std;

int main()
{
    double income = 36000;
    int score = 720;
    bool isFirstTime = true;

    if ((income >= 120000 && score >= 580) || (income >= 90000 && score >= 630) || (income >= 60000 && score >= 720))
        cout << "Low Interest - 10% Down Loan" << endl;
    else if (income >= 48000 && score >= 630)
        cout << "Mid-Interest - 20% Down Loan" << endl;
    else if ((income >= 36000 && score >= 720 && isFirstTime == true) || (income >= 60000 && score >= 630 && isFirstTime == true))
        cout << "High-Interest  - 5% Down Loan" << endl;
    else
        cout << "Sorry - Not Qualified" << endl;






    return 0;
}