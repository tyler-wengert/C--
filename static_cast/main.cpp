#include <iostream>

int main()
{
    std::cout << "Input a single character:";

    char in {};
    std::cin >> in;

    std::cout << "You input \'" << in << "\', which has ASCII code " << static_cast<int>(in);

    return 0;
}
