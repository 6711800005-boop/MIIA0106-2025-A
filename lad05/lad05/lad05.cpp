#include <iostream>
#include <iomanip>

constexpr double PI = 3.14159265358979323846;

double circleArea(double radius)
{
    return PI * radius * radius;
}

double rectArea(double width, double height)
{
    return width * height;
}

int main()
{
    double r = 0.0;
    double w = 0.0;
    double h = 0.0;

    std::cout << "Enter circle radius: ";
    if (!(std::cin >> r)) return 0;

    std::cout << "Enter rectangle width and height: ";
    if (!(std::cin >> w >> h)) return 0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Circle area is: " << circleArea(r) << std::endl;
    std::cout << "Rectangle area is: " << rectArea(w, h) << std::endl;

    return 0;
}