#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculatePay()
    {
        cout << "Employee salary" << endl;
    }
};

class PermanentEmployee : public Employee
{
public:
    void calculatePay() override
    {
        cout << "Permanent Employee Salary: Rs. 30000" << endl;
    }
};

class ContractEmployee : public Employee
{
public:
    void calculatePay() override
    {
        cout << "Contract Employee Salary: Rs. 15000" << endl;
    }
};

int main()
{
    Employee *e;

    PermanentEmployee p;
    ContractEmployee c;

    e = &p;
    e->calculatePay();

    e = &c;
    e->calculatePay();

    return 0;
}
