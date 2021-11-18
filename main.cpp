#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int numTest = 5;

enum options
{
    Add = 1,
    Remove = 2,
    Display = 3,
    Search = 4,
    Results = 5,
    Quit = 6
};

struct Student
{
    string name;
    int ID;
    int Test_taken;
    int *arr;
    int average;
};

void add_Student()
{
    Student st;
    int score;

    cout << "Enter last name of the student:";
    cin >> st.name;

    cout << "Enter first name of the student:";
    cin >> st.name;

    cout << "Enter student ID:";
    cin >> st.ID;

    cout << "How many tests did this student take? ";
    cin >> st.Test_taken;

    for (int i = 0; i < st.Test_taken; i++)
    {
        cout << "Enter score #" << i + 1 << ":";
        cin >> score;
    }
}

int main()
{
    int choice;

    while (choice != 1choice != 2choice != 3choice != 4choice != 5 || choice != 6)
    {
        cout << "1. Add" << endl;
        cout << "2. Remove" << endl;
        cout << "3. Display" << endl;
        cout << "4. Search" << endl;
        cout << "5. Results" << endl;
        cout << "6. Quit" << endl;

        cout << "Enter choice:" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            add_Student();
            break;

        case 2:
            //remove_student();
            break;

        case 3:
            //display();
            break;

        case 4:
            //search();
            break;

        case 5:
            //exportResults();
            break;

        case 6:
            cout << "Bye!!!" << endl;
            return 0;
            break;

        default:
            cout << "Incorrect choice. Please enter again." << endl;
            break;
        }
    }

    return 0;
}