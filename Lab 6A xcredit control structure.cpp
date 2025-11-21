
#include <iostream>
using namespace std;

int main()
{
    double amt, xcredit;
    cout << "Enter Grade Score";
    cin >> amt;

    if (amt >= 80)
        xcredit = .05;
    else if (amt >= 90)
        xcredit = .10;
    else if (amt >= 100)
        xcredit = .15;
    else
        xcredit = 0;
    cout << "Extra Credit is:" << amt * xcredit << endl;
    cout << "Complete score:" << amt + (amt * xcredit) << endl;



    return 0;





}

