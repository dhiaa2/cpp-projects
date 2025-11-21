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
        cout << "Invalid Attempt. Account Number must be 8 digits. 10000000 - 99999999";
        cout << "Enter an 8-Digit Account Number: ";
        cin >> accountnumber;
    }
    char choice;
    do {
        cout << "************* Menu Driven Banking***********\n";
        cout << "A. Deposit: \n";
        cout << "B. Withdrawl: \n";
        cout << "C. Show Balance: \n";
        cout << "Q. Quit: \n";
        cout << "Select An Option: \n";
        cin >> choice;

        switch (choice)
        {
        case 'A':
        case 'a': {
            double amount;
            cout << "Enter Deposit Amount: \n";
            cin >> amount;

            if (amount <= 0)
            {
                cout << "Deposit must be greater than $0.00 \n";

            }
            else if (amount > 10000)
            {
                cout << "Deposit Cannot Be Processed: Maximum Deposit is $10,000:\n";
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
            cout << "Enter Withdrawl Amount: \n";
            cin >> amount;
            if (amount <= 0)
            {
                cout << "Withdrawl Must Be Greater Than $0.00\n";
            }
            else if (amount > 800) {
                cout << "Withdrawl Cannot Be Processed: Maximum Withdrawal is $800.00\n";
            }
            else if (amount > balance) {
                cout << "Withdrawal Exceeded: Insufficient Funds: \n";
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
            cout << "********Account Summary**********\n";
            cout << "Customer Name: \n" << customername << endl;
            cout << "Account Number: \n" << accountnumber << endl;
            cout << fixed << setprecision(2);
            cout << "Current Balance: $" << balance << endl;
            if (balance < 200.00) {
                cout << "***********Low Balance Alert***********\n" << endl;
            }
            break;


        }
        case 'Q':
        case 'q':
            cout << "Thank You For Being A Valuable Customer. Goodbye!\n";
            break;

        default:
            cout << "Not A Valid Option. Please Choose A,B,C, or Q.\n";
        }
    } while (choice != 'Q' && choice != 'q');
    return 0;
}

