#include <iostream>
using namespace std;

namespace First {
    int a = 10;

    void display() {
        cout << "First namespace: " << a << endl;
    }
}

namespace Second {
    int a = 20;

    void display() {
        cout << "Second namespace: " << a << endl;
    }
}

int main() {
    First::display();
    Second::display();

    cout << "Value of a in First: " << First::a << endl;
    cout << "Value of a in Second: " << Second::a << endl;

    return 0;
}
