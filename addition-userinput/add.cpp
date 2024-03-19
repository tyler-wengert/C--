#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter an integer:" << '\n';

    int num1 {};
    cin >> num1;

    cout << "Please enter another integer:" << '\n';

    int num2 {};
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
    cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';

    return 0;
}
