#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

const int REPETITION = 4;

struct squareRoot {
    float num;
    double sqrt_num;
};

int main()
{
    squareRoot number[REPETITION];

    cout << fixed;
    cout.precision(2);

    for(int i = 0; i < REPETITION; i++){
        cout << "Enter a number between 5.1 and 10.2: ";

        while (!(cin >> number[i].num) || number[i].num < 5.1f || number[i].num > 10.2f){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input!" << endl;
            cout << "Re-enter a number between 5.1 and 10.2: ";
        }

        number[i].sqrt_num = sqrt(number[i].num);
        cout << "The square root of " << number[i].num << " is " << number[i].sqrt_num << endl;
    }

    ofstream f;
    f.open("result.txt", ios::out);

    f << fixed;
    f.precision(2);

    for(int i = 0; i < REPETITION; i++){
        f << "(" << number[i].num << "," << number[i].sqrt_num << ")" << endl;
    }

    f.close();

    return 0;
}
