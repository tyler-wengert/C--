#include <iostream>

double getDouble()
{
    std::cout << "Input a double value:";
    double d{};
    std::cin >> d;

    return d;
}

char getOp()
{
    std::cout << "Enter +, -, *, or /:";
    char c{};
    std::cin >> c;

    return c;
}

bool doAndPrintMath(double d1, double d2, char op)
{
    if (op == '*')
    {
        std::cout << d1 << " " << op << " " << d2 << " = " << (d1 * d2);
        return true;
    }
    else if (op == '+')
    {
        std::cout << d1 << " " << op << " " << d2 << " = " << (d1 + d2);
        return true;
    }
    else if (op == '/')
    {
        std::cout << d1 << " " << op << " " << d2 << " = " << (d1 / d2);
        return true;
    }
    else if (op == '-')
    {
        std::cout << d1 << " " << op << " " << d2 << " = " << (d1 - d2);
        return true;
    }
    else
    {
        std::cout << "Invalid Operator!";
        return false;
    }
}

int main()
{
    double d1{getDouble()};
    double d2{getDouble()};
    char op{getOp()};

    if (!(doAndPrintMath(d1, d2, op)))
    {
        return -1;
    }

    return 0;
}
