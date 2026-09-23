#include<iostream>
using namespace std;

class Complex
{
    int real, img;

public:

    // Accept input
    void accept()
    {
        cout << "Enter Real and Imaginary Part: ";
        cin >> real >> img;
    }

    // Display complex number
    void display()
    {
        if(img >= 0)
            cout << real << " + i" << img << endl;
        else
            cout << real << " - i" << -img << endl;
    }

    // Addition
    Complex add(Complex c)
    {
        Complex sum;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum;
    }

    // Subtraction
    Complex sub(Complex c)
    {
        Complex diff;
        diff.real = real - c.real;
        diff.img = img - c.img;
        return diff;
    }

    // Multiplication
    Complex multiply(Complex c)
    {
        Complex mul;
        mul.real = (real * c.real) - (img * c.img);
        mul.img = (real * c.img) + (img * c.real);
        return mul;
    }

    // Division
    void divide(Complex c)
    {
        float denominator = (c.real * c.real) + (c.img * c.img);

        if(denominator == 0)
        {
            cout << "Division not possible." << endl;
            return;
        }

        float realPart = (real * c.real + img * c.img) / denominator;
        float imgPart = (img * c.real - real * c.img) / denominator;

        cout << "Division = " << realPart;

        if(imgPart >= 0)
            cout << " + i" << imgPart << endl;
        else
            cout << " - i" << -imgPart << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "First Complex Number" << endl;
    c1.accept();

    cout << "Second Complex Number" << endl;
    c2.accept();

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Addition
    c3 = c1.add(c2);
    cout << "\nAddition = ";
    c3.display();

    // Subtraction
    c3 = c1.sub(c2);
    cout << "Subtraction = ";
    c3.display();

    // Multiplication
    c3 = c1.multiply(c2);
    cout << "Multiplication = ";
    c3.display();

    // Division
    c1.divide(c2);

    return 0;
}
