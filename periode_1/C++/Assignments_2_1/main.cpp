#include <iostream>


using namespace std;

bool logicFunction(bool b1, bool b2, bool b3);

void inputLogicValues(bool &b1, bool &b2, bool &b3);

int main()
{

    bool a, b, c;

    for (int i = 0; i < 3; i++)
    {
        inputLogicValues(a, b, c);
        cout << "The value of (" << a << " && " << b << ") || !" << c << " is: ";
        cout << logicFunction(a, b, c) << endl;
    }



    return 0;
}



bool logicFunction(bool b1, bool b2, bool b3)
{
    return (b1 && b2) || !b3;
}


void inputLogicValues(bool &b1, bool &b2, bool &b3)
{
    cout << "Enter three boolean values, 1 or 0." << endl;
    cout << "Enter the first value: ";
    while(!(cin >> b1)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << endl << "Invalid input, try again with either 1 or 0: ";
    }
    cout << "Enter the second value: ";
    while(!(cin >> b2)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << endl << "Invalid input, try again with either 1 or 0: ";
    }
    cout << "Enter the third value: ";
    while(!(cin >> b3)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << endl << "Invalid input, try again with either 1 or 0: ";
    }
}