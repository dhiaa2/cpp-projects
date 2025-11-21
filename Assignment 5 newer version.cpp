
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double balance = 0.0;
    string customername;
    int accountnumber;

    cout << "Enter Customer Name: ";
    getline(cin, customername);

    cout << "Enter an 8-Digit Account Number: ";
    cin >> accountnumber;
    while (accountnumber < 10000000 || accountnumber >99999999)
    {
        cout << "Invalid Attempt. Account Number Must Be 8 Digits. 10000000 - 99999999";
        cout << "Enter An 8-Digit Account Number: ";
        cin >> accountnumber;
    }
    char choice;
    do {
        cout << "************* Menu Driven Banking***********" << endl;
        cout << "A. Deposit: " << endl;
        cout << "B. Withdrawl: " << endl;
        cout << "C. Show Balance: " << endl;
        cout << "Q. Quit: " << endl;
        cout << "Select An Option: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 'A':
        case 'a': {
            double amount;
            cout << "Enter Deposit Amount: " << endl;
            cin >> amount;

            if (amount <= 0)
            {
                cout << "Deposit Must Be Greater Than $0.00 " << endl;

            }
            else if (amount > 10000)
            {
                cout << "Deposit Cannot Be Processed: Maximum Deposit is $10,000:" << endl;
            }
            else
            {
                balance += amount;
                cout << fixed << setprecision(2);
                cout << "Deposit Completed. Current Balance: $" << balance << endl;
            }
            break;
        }
        case 'B':
        case 'b': {
            double amount;
            cout << "Enter Withdrawl Amount: " << endl;
            cin >> amount;
            if (amount <= 0)
            {
                cout << "Withdrawl Must Be Greater Than $0.00" << endl;
            }
            else if (amount > 800) {
                cout << "Withdrawl Cannot Be Processed: Maximum Withdrawal is $800.00" << endl;
            }
            else if (amount > balance) {
                cout << "Withdrawal Exceeded: Insufficient Funds: " << endl;
            }
            else {
                balance -= amount;
                cout << fixed << setprecision(2);
                cout << "Withdrawal Completed: Current Balance: $" << balance << endl;
            }
            break;
        }
        case 'C':
        case 'c': {
            cout << "********Account Summary**********" << endl;
            cout << "Customer Name: " << customername << endl;
            cout << "Account Number: " << accountnumber << endl;
            cout << fixed << setprecision(2);
            cout << "Current Balance: $" << balance << endl;
            if (balance < 200.00) {
                cout << "***********Low Balance Alert***********" << endl;
            }
            break;


        }
        case 'Q':
        case 'q':
            cout << "Thank You For Being A Valuable Customer. Goodbye!" << endl;
            break;

        default:
            cout << "Not A Valid Option. Please Choose A,B,C, or Q." << endl;
        }
    } while (choice != 'Q' && choice != 'q');
    return 0;
}