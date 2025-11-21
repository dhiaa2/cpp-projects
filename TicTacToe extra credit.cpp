#include <iostream>
using namespace std;

void render(int arr[3][3]);
void update(int arr[3][3], int row, int col, int value);
bool playerWins(int arr[3][3], int player);

int main()
{
    int ttt[3][3] = { { 0, 0, 0 },
                      { 0, 0, 0 },
                      { 0, 0, 0 } };

    int currentPlayer = 1;   // Player 1 starts (value 1), Player 2 is 2
    int row, col;
    int moves = 0;           // to detect a tie (max 9 moves)
    bool gameOver = false;

    while (!gameOver)
    {
        render(ttt);
        cout << endl;

        cout << "Player " << currentPlayer << "'s turn (enter "
            << currentPlayer << " on the board).\n";
        cout << "Enter row (0-2): ";
        cin >> row;
        cout << "Enter col (0-2): ";
        cin >> col;

        // Check valid position
        if (row < 0 || row > 2 || col < 0 || col > 2)
        {
            cout << "Invalid position, try again.\n\n";
            continue;
        }

        // Check if spot is empty
        if (ttt[row][col] != 0)
        {
            cout << "That spot is already taken, try again.\n\n";
            continue;
        }

        // Place the player's value (1 or 2)
        update(ttt, row, col, currentPlayer);
        moves++;

        // Check win
        if (playerWins(ttt, currentPlayer))
        {
            render(ttt);
            cout << "\nPlayer " << currentPlayer << " WINS! ??\n";
            gameOver = true;
        }
        else if (moves == 9)   // all spots filled, no winner
        {
            render(ttt);
            cout << "\nIt's a tie! No winner.\n";
            gameOver = true;
        }
        else
        {
            // Switch player: 1 -> 2, 2 -> 1
            if (currentPlayer == 1)
                currentPlayer = 2;
            else
                currentPlayer = 1;
        }
    }

    return 0;
}

void render(int arr[3][3])
{
    cout << "Current board:\n";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
            cout << arr[row][col] << " ";
        cout << endl;
    }
}

void update(int arr[3][3], int row, int col, int value)
{
    arr[row][col] = value;
}

bool playerWins(int arr[3][3], int player)
{
    // Rows
    if (arr[0][0] == player && arr[0][1] == player && arr[0][2] == player)
        return true;
    if (arr[1][0] == player && arr[1][1] == player && arr[1][2] == player)
        return true;
    if (arr[2][0] == player && arr[2][1] == player && arr[2][2] == player)
        return true;

    // Columns
    if (arr[0][0] == player && arr[1][0] == player && arr[2][0] == player)
        return true;
    if (arr[0][1] == player && arr[1][1] == player && arr[2][1] == player)
        return true;
    if (arr[0][2] == player && arr[1][2] == player && arr[2][2] == player)
        return true;

    // Diagonals
    if (arr[0][0] == player && arr[1][1] == player && arr[2][2] == player)
        return true;
    if (arr[0][2] == player && arr[1][1] == player && arr[2][0] == player)
        return true;

    return false;
}