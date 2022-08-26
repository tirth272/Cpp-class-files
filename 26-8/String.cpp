#include <iostream>
using namespace std;

int main()
{
    string str1 = "Tirth";
    string str2 = "Shah";
    string str3;

    // Adding two Strings

    str3 = str1 + str2;
    cout << "String concatenate: " << str3 << endl;

    // Finding the length of string
    int len;
    len = str3.size();
    cout << "Length of String is: " << len << endl;
    return 0;
}