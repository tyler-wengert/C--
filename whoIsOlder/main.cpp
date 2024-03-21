#include <iostream>
#include <string>

std::string getName(int person_cnt)
{
    std::cout << "Enter name of person " << person_cnt << ":\n";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string name)
{
    std::cout << "Enter age of " << name << ":\n";
    int age {};
    std::cin >> age;

    return age;
}

void printOlder(int olderA, std::string_view olderN, int a, std::string_view n)
{
    std::cout << olderN << " (age " << olderA << ") is older than " << n << " (age " << a << ")\n";
}

int main()
{
    std::string n1 {getName(1)};
    int a1 {getAge(n1)};

    std::string n2 {getName(2)};
    int a2 {getAge(n2)};

    (a1 > a2) ? printOlder(a1, n1, a2, n2) : printOlder(a2, n2, a1, n1);

    return 0;
}
