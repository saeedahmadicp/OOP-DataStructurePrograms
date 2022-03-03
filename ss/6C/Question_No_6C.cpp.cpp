#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    double square_root;
    cout << "Enter any Integers: ";
    cin >> num;
    square_root= sqrt(num);
    cout << "The square root of " << num <<" is " << square_root <<"."<<endl;
    getch();
    return 0;
}
