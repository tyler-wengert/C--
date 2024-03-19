#include <io.h>

int main()
{
    int num {readNumber()};
    int num2 {readNumber()};

    writeAnswer(num + num2);

    return 0;
}
