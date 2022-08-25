// To access class function outside the class.

#include <iostream>
using namespace std;

class Distance
{
public:
    double feet, inches;

    Distance(double f, double i)
    {
        feet = f;
        inches = i;
    }
    Distance operator-()
    {
        feet = -feet;
        inches = -inches;
    }
    void Display()
    {
        cout << "Feet: " << feet << endl;
        cout << "Inches: " << inches << endl;
    }
    Distance operator+()
    {
        feet = +feet;
        inches = +inches;
    }
};

int main()
{
    Distance D1(-4, -5);
    -D1;
    D1.Display();
    Distance D2(-5, 3);
    D2;
    D2.Display();
    Distance D3(5, -8);
    +D3;
    D3.Display();
    return 0;
}