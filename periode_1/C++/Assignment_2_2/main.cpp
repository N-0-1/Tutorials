#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> arr = {1, 2, 33, 4, 5, 6, 7, 88, 9, 10};
    double sum = 0.0;
    int max = 0;

    for(auto rbl : arr)
    {
        cout << rbl << ", ";
    }
    cout << "\b\b." << endl;

    for(auto rbl : arr)
    {
        sum += rbl;
    }
    cout << "The average value: " << sum / arr.size() << endl;

    for(auto rbl : arr)
    {
        if (rbl > max){max = rbl;}
    }
    cout << "The max vlaue: " << max << endl;

    array<int, 10> arr1(arr);

    for(auto prbl = arr1.begin(); prbl != arr1.end(); ++prbl)
    {
        cout << *prbl << ", ";
    }
    cout << "\b\b." << endl;

    return 0;
}
