#include <iostream>

using namespace std;

int main()
{
    int maze[10][13] = {
    { 1,1,1,1,1,1,1,1,1,1,1,1,1 },
    { 1,0,1,0,1,0,1,0,3,0,0,0,1 },
    { 1,0,1,0,0,0,1,0,1,1,1,0,1 },
    { 1,0,1,0,1,1,1,1,0,0,0,0,1 },
    { 1,0,1,0,0,0,0,0,1,1,1,0,1 },
    { 1,0,1,0,1,1,1,0,1,3,3,0,1 },
    { 1,0,1,0,1,0,0,0,1,1,1,0,1 },
    { 1,0,1,0,1,1,1,0,1,0,1,0,1 },
    { 1,0,0,3,1,0,0,0,0,0,0,3,1 },
    { 1,1,1,1,1,1,1,1,1,1,1,1,1 }
    };

    int num_treasure = 0;

    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 13; col++)
        {
            cout << maze[row][col] << "    ";
            if (maze[row][col] == 3)
                num_treasure++;


        }
        cout << endl;
    }
    cout << "Number of Treasures: " << "   " << num_treasure << endl;

    return 0;
}