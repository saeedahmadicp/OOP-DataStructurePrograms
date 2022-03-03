#include <iostream>
#include <math.h>
#include <conio.h>


using namespace std;

int main()
{
    int num;
    double cube_root;
    cout << "Enter any Integers: ";
    cin >> num;
    cube_root= cbrt(num);
    cout << "The Cube root of " << num <<" is " << cube_root <<"."<<endl;
    getch();
    return 0;
}
