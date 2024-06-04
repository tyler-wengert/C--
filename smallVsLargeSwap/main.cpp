#include <iostream>

int main()
{
    std::cout << "Enter an integer: " << '\n';
    int small {};
    std::cin >> small;

    std::cout << "Enter a larger integer: " << '\n';
    int large {};
    std::cin >> large;

    if (large < small)
    {
        int temp {large};
        large = small;
        small = temp;
    }

    std::cout << "The smaller value is " << small << '\n';
    std::cout << "The larger value is " << large << '\n';

    return 0;
}
