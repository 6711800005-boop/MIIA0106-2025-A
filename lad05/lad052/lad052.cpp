#include <iostream>

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    // This swap affects only local copies (call by value)
}

void swapByReference(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
    // This swap modifies the caller's variables (call by reference)
}

int main()
{
    int x = 5;
    int y = 10;

    std::cout << "Before swapByValue: x = " << x << ", y = " << y << std::endl;
    swapByValue(x, y);
    std::cout << "After swapByValue:  x = " << x << ", y = " << y << std::endl << std::endl;

    std::cout << "Before swapByReference: x = " << x << ", y = " << y << std::endl;
    swapByReference(x, y);
    std::cout << "After swapByReference:  x = " << x << ", y = " << y << std::endl;

    return 0;
}
