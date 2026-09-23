#include <iostream>
using namespace std;

float area(float r)
{
    return 3.14 * r * r;
}

float area(int l, int b)
{
    return l * b;
}

float area(float b, float h)
{
    return 0.5 * b * h;
}

float area(int s)
{
    return s * s;
}

int main()
{
    float r, b, h;
    int l, s;

    cout << "Enter Radius for Circle: ";
    cin >> r;
    cout << "Area of the Circle is " << area(r) << endl;

    cout << "Enter length and breadth for rectangle: ";
    cin >> l >> b;
    cout << "Area of the Rectangle is " << area(l, (int)b) << endl;

    cout << "Enter Base and height for triangle: ";
    cin >> b >> h;
    cout << "Area of the Triangle is " << area(b, h) << endl;

    cout << "Enter Side for Square: ";
    cin >> s;
    cout << "Area of the Square is " << area(s);

    return 0;
}
