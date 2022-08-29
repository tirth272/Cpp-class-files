#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << add<int>(10, 20) << endl;
    cout << add<float>(10.5, 20.5) << endl;
    cout << add<double>(10.60, 20) << endl;
    cout << add<string>("Hello", "World") << endl;

    string a = "Hey";
    string b = "There!";
    string c = a + b;
    cout << c << endl;
    return 0;
}