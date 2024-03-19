#include <iostream>

void print(int x)
{
    std::cout << x;
}

int main()
{
    std::cout << "Input a single character:";

    char in {};
    std::cin >> in;

    std::cout << "You input \'" << in << "\', which has ASCII code ";
    print(in);

    return 0;
}
