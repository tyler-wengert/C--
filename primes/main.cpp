#include <iostream>
#include <cstdint>

bool isPrime(std::int64_t x){

    for (int i=1; i < x; i++)
    {
        //std::cout << (x % i) << '\n';
        std::cout << i << '\n';
        if (x % i == 0)
        {
            //function returns when our selected number (x) modulo the current test number (i) equals 0 (ie. our chosen number is divisible by i). If i == x or i == 1, iterative testing continues
            if (i == 1)
            {
                continue;
            }
            else
            {
                return false; //even one means selected # is not prime
            }
        }
    }

    return true; //any number that our selected number is divisible by would be caught in the else above
}

int main()
{
    std::cout << "Please input an integer:" << '\n';

    std::int64_t num{};
    std::cin >> num;

    std::cout << std::boolalpha;

    std::cout << "Is " << num << " prime? " << isPrime(num);

    return 0;
}
