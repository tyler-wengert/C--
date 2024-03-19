#include <iostream>

using namespace std;

int readInput()
{
    cout << "Please input an integer:" << '\n';

    int x {};
    cin >> x;

    return x;
}

doubleNum(int x)
{
    return 2 * x;
}

int main()
{
    int num {readInput()};

    cout << num << " doubled is: "<< doubleNum(num) << '\n';
}
