#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    std::string text = "hello";
    std::string moretext = "there";
    std::string together = text + moretext;
    std::cout << together << std::endl;
    return 0;
}