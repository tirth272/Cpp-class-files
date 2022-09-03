#include <iostream>
using namespace std;

class calc
{
private:
    int a, b;

public:
    calc()
    {
        cout << "Enter the value of A: ";
        cin >> a;
        cout << "Enter the value of B: ";
        cin >> b;
    }

    int add()
    {
        return a + b;
    }
    int sub()
    {
        return a - b;
    }
    int mul()
    {
        return a * b;
    }
    int div()
    {
        return (float)a / b;
    }
};

int main()
{
    int choice;
    calc c;
    cout << "\n\n\n<----Calculator---->\n\n\n";

    cout << "Please Enter 1 for Addition\nPlease Enter 2 for Subtraction\nPlease Enter 3 for Multiplication\nPlease Enter 4 for division\n";

    cout << "\nEnter the choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Addition is: " << c.add() << endl;
        break;
    case 2:
        cout << "Subtraction is: " << c.sub() << endl;
        break;
    case 3:
        cout << "Multiplication is: " << c.mul() << endl;
        break;
    case 4:
        cout << "Division is: " << c.div() << endl;
        break;

    default:
        cout << "Please Enter a valid choice!!!🙂" << endl;
        break;
    }
    return 0;
}