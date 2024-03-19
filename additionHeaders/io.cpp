#include <iostream>

int readNumber()
{
    std::cout << "Please input an integer to add:" << '\n';
    int x {};
    std::cin >> x;

    return x;
}

void writeAnswer(int answer)
{
    std::cout << "Answer: " << answer << '\n';
}
