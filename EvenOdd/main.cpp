#include <iostream>

void eoo (int num)
{
    if (num % 2 != 0)
    {
        std::cout << num << " is odd." << '\n';
    }
    else
    {
        std::cout << num << " is even." << '\n';
    }
}

int main ()
{
    std::cout << "Please input an integer: " << '\n';

    int num {};
    std::cin >> num;

    eoo(num);

    return 0;
}
