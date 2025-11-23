#include <iostream>
#include <ctime>

using namespace std;

int countVowels(char str[]);

int main()
{
    char str[] = "This is a test";
    cout << "There are " << countVowels(str) << " Vowels in: " << str << endl;
    return 0;
}
int countVowels(char str[])
{
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        switch (toupper(str[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        }
    }
    return count;
}