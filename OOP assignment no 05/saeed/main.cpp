#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;

int main()
{
    char ch, che[10];

    cout << "Enter any character: ";
    cin.get(ch);
    cin.ignore();
    cout << "Enter any sentence: ";
    cin.get(che, 10);
    return 0;
}
