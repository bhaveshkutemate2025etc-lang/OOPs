#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;

    void AcceptEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
    }
};

class Shift
{
public:
    int hours[7];

    void AcceptShift()
    {
        cout << "Enter working hours for 7 days:\n";
        for (int i = 0; i < 7; i++)
        {
            cin >> hours[i];
        }
    }
};

class Details : public Employee, public Shift
{
public:
    void Display()
    {
        int total = 0;

        for (int i = 0; i < 7; i++)
        {
            total += hours[i];
        }

        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;
        cout << "\nTotal Working Hours: " << total << endl;
    }
};

int main()
{
    Details d;

    d.AcceptEmployee();
    d.AcceptShift();
    d.Display();

    return 0;
}
