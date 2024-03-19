#include <iostream>

int main()
{
    std::cout << "Input a single character:";

    char in {};
    std::cin >> in;
    int inNum {in};

    std::cout << "You input \'" << in << "\', which has ASCII code " << inNum;

    return 0;
}
