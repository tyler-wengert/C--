#include <iostream>

using namespace std;

int add(int x, int y);

int main()
{
    cout << "Please input an integer:" << '\n';

    int num1 {};
    cin >> num1;

    cout << "Please input another integer:" << '\n';

    int num2 {};
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << add(num1, num2) << '\n';

    return 0;
}
