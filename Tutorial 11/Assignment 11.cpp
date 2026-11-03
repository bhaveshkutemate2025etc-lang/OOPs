#include <iostream>
#include <string>
using namespace std;

template <class T>
T maximumValue(T a, T b)
{
    return (a > b) ? a : b;
}

template <class T>
class Box
{
    T value;

public:
    Box(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Box value = " << value << endl;
    }
};

int main()
{
    cout << "Maximum integer = "
         << maximumValue(10, 25) << endl;

    cout << "Maximum double = "
         << maximumValue(3.5, 5.5) << endl;

    Box<int> b1(100);
    b1.display();

    Box<string> b2("C++ Templates");
    b2.display();

    return 0;
}
