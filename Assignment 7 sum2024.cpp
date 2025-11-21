#include <iostream>
#include <string>
using namespace std;

struct PET 
{
    string name;
    int age;
};

void showPets(PET arr[], int count);

int main()
{
    PET pets[50];   // array for up to 50 pets
    int index;      // index keeps track of how many pets we have
    index = 0;

    char choice;

    do {
        cout << "\nA. Add Pet\n";
        cout << "B. List Pets\n";
        cout << "Q. Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 'A' || choice == 'a') {
            if (index < 50) 
            {
                cout << "Enter pet name: ";
                cin >> pets[index].name;

                cout << "Enter pet age: ";
                cin >> pets[index].age;

                index++;   // move to next empty spot
            }
            else {
                cout << "Database is full.\n";
            }
        }
        else if (choice == 'B' || choice == 'b') {
            showPets(pets, index);
        }

    } while (choice != 'Q' && choice != 'q');

    return 0;
}

void showPets(PET arr[], int count) {
    if (count == 0) 
    {
        cout << "No pets added yet.\n";
        return;
    }

    cout << "\nPets in the list:\n";
    cout << arr << endl; // base memory address

    for (int i = 0; i < count; i++) {
        cout << arr[i].name << " - " << arr[i].age
            << " years old   Address: " << &arr[i] << endl;
    }

    cout << "----------------------\n";

    for (int i = 0; i < count; i++) {
        cout << (*(arr + i)).name << " - " << (*(arr + i)).age
            << " years old   Address: " << (arr + i) << endl;
    }
}
