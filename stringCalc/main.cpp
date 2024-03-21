#include <iostream>
#include <string>

int total(std::string name, int age)
{
    return static_cast<int>(name.length()) + age;
}

int main()
{
    std::cout << "Input your name: " << '\n';
    std::string name {};
    std::getline (std::cin >> std::ws, name);

    std::cout << "Input your age: " << '\n';
    int age {};
    std::cin >> age;

    std::cout << name << ", your name length + age is: " << total(name, age) << '\n';

    return 0;
}
