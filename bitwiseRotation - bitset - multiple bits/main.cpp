#include <bitset>
#include <iostream>

// This example is contrived to only use 4 bits. Technically need to implement an error throw/catch to prevent shift numbers greater than 4, but it will just be 0000 beyond that point, so not erroneous, just meaningless

//shiftNum is number of shifts to complete
std::bitset<4> rotl(std::bitset<4> bits, int shiftNum)
{
    //define array to use as stack and keep track of numbers shifted off
    bool *temp = new bool[shiftNum];

    for (int i = 0; i < shiftNum; i++)
    {
        temp[i] = bits.test(3 - i);
    }


    bits <<= shiftNum;

    for (int i = 0; i < shiftNum; i++)
    {
        //this works for shifts from 0-3 for the two base examples. Need to test further cases, not sure if my algo is right or only fits these two examples
        if (temp[i])
            bits.set(shiftNum - 1);
    }

    return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1, 2) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2, 3) << '\n';

	return 0;
}
