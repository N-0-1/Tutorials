#include <iostream>
#include <string>

using namespace std;

bool logicFunction(bool b1, bool b2, bool b3){
    return (b1 && b2) || !b3;
};

int main()
{

    cout << boolalpha;

    cout << string(48, '-') << endl;
    cout << "|";
    cout.width(5); cout << "a";
    cout.width(5); cout << "|";
    cout.width(5); cout << "b";
    cout.width(5); cout << "|";
    cout.width(5); cout << "c";
    cout.width(5); cout << "|";
    cout.width(14); cout << "(a && b)||!c";
    cout.width(3); cout << "|" << endl;
    cout << string(48, '-') << endl;

    for(int a = 0; a < 2; a++){
        for(int b = 0; b < 2; b++){
            for(int c = 0; c < 2; c++){
                cout << "|";
                cout.width(5); cout << static_cast<bool>(a);
                cout.width(5); cout << "|";
                cout.width(5); cout << static_cast<bool>(b);
                cout.width(5); cout << "|";
                cout.width(5); cout << static_cast<bool>(c);
                cout.width(5); cout << "|";
                cout.width(14); cout << logicFunction( a, b, c);
                cout.width(3); cout << "|" << endl;
                cout << string(48, '-') << endl;
            }
        }
    }

    cout << noboolalpha;

    cout << string(48, '-') << endl;
    cout << "|";
    cout.width(5); cout << "a";
    cout.width(5); cout << "|";
    cout.width(5); cout << "b";
    cout.width(5); cout << "|";
    cout.width(5); cout << "c";
    cout.width(5); cout << "|";
    cout.width(14); cout << "(a && b)||!c";
    cout.width(3); cout << "|" << endl;
    cout << string(48, '-') << endl;

    for(int a = 0; a < 2; a++){
        for(int b = 0; b < 2; b++){
            for(int c = 0; c < 2; c++){
                cout << "|";
                cout.width(5); cout << static_cast<bool>(a);
                cout.width(5); cout << "|";
                cout.width(5); cout << static_cast<bool>(b);
                cout.width(5); cout << "|";
                cout.width(5); cout << static_cast<bool>(c);
                cout.width(5); cout << "|";
                cout.width(14); cout << logicFunction( a, b, c);
                cout.width(3); cout << "|" << endl;
                cout << string(48, '-') << endl;
            }
        }
    }


    return 0;
}