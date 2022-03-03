#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float f_temp, c_temp;

    cout << "Enter Fahrenheit temperature of the city: ";
    cin >> f_temp;

    c_temp = (f_temp -32)* 5.0f/9.0f;

    cout << endl << "The Equivalent Temperature in Centigrade for " << f_temp << " Degree Fahrenheit is equal to " << c_temp
         << " Degrees." << endl ;
    getch();
    return 0;
}
