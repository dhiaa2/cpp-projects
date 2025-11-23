#include <iostream>

using namespace std;


void printArray(int a[][5], int rSize);
void fillArray(int ar[][5], int rSize);
int countOccurences(int a[][5], int rSize, int search);
void printLocations(int a[][5], int rSize, int search);
int main()
{
    int ar[5][5];

    fillArray(ar, 5);
    printArray(ar, 5);
    int val;
    cout << "Which number do you wish to search for?" << endl;
    cin >> val;
    int count = countOccurences(ar, 5, val);
    cout << "That number appears " << count << " times" << endl;
    if (count > 0)
        printLocations(ar, 5, val);


    return 0;

}
void fillArray(int a[][5], int rSize)
{

    for (int row = 0; row < rSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            a[row][col] = rand() % 10 + 1;
        }
    }
}
void printArray(int a[][5], int rSize)
{

    for (int row = 0; row < rSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << a[row][col] << "\t";
        }
        cout << endl;
    }
}
int countOccurences(int a[][5], int rSize, int search)
{
    int count = 0;
    for (int row = 0; row < rSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (a[row][col] == search)
                count++;

        }

    }
    return count;
}
void printLocations(int a[][5], int rSize, int search)
{
    cout << "Locations where the number " << search << " is found:\n";

    for (int row = 0; row < rSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (a[row][col] == search)
            {
                cout << "Row " << row << ", Column " << col << endl;
            }
        }
    }
}