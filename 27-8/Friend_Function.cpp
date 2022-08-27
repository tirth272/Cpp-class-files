#include <iostream>
using namespace std;

class ashish
{
private:
    int money;

public:
    friend int jay(ashish);
    ashish()
    {
        money = 0;
    }
};
int jay(ashish a)
{
    a.money = 10000;
    return a.money;
}

int main()
{
    ashish a1;
    cout << "Money given: " << jay(a1);

    return 0;
}