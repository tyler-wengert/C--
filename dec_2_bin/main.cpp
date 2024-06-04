#include <iostream>

//Gather user input, validate that input integer is between 0-255
int input()
{
    std::cout << "Please input an integer between 0-255: " << '\n';

    int num {};
    std::cin >> num;

    if ((num > 255) | (num < 0))
    {
        std::cout << "Invalid integer." << '\n';
        input();
    }

    return num;
}

//Do conversion from decimal to binary
void bin2dec(int num)
{
    //kept array to facilitate printing full 8 bits for small numbers. Could remove, would need to build printing extra 0's into the loop otherwise
    int bin[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int cnt {7};

    while (num >= 1)
    {
        //rm will always be 1 or 0
        int rm {num % 2};
        num /= 2;
        bin[cnt] = rm;
        cnt--;
    }

    for(int i = 0; i <= 7; i++)
    {
        //print space for readability befor 4th char
        if (i == 4)
            std::cout << ' ';
        std::cout << bin[i];
    }
}

int main() 
{
    int num {input()};

    bin2dec(num);

    return 0;
}
