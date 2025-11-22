#include <iostream>
using namespace std;

void printTable(int table[][9], int size);
void fillTable(int table[][9], int size);

int main()
{
    int ar[9][9];

    fillTable(ar, 9);
    printTable(ar, 9);

    return 0;
}

void fillTable(int table[][9], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            table[i][j] = (i + 1) * (j + 1);  // multiplication table
        }
    }
}

void printTable(int table[][9], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << table[i][j] << "\t";   // use \t for tab
        }
        cout << endl;
    }
}