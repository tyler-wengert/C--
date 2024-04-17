#include <iostream>
#include <string_view>

constexpr std::string_view getQuantityPhrase(int q)
{
    if (q < 0)
    {
        return "negative";
    }
    else if (q == 0)
    {
        return "no";
    }
    else if (q == 1)
    {
        return "a single";
    }
    else if (q == 2)
    {
        return "a couple of";
    }
    else if (q == 3)
    {
        return "a few";
    }
    return "many";
    
}

constexpr std::string_view getApplesPluralized(int q)
{
    if (q == 1)
    {
        return "apple";
    }
    return "apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
