#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num,remainder;
    cout << "Enter five digit number: ";
    cin >> num;

    remainder= num/10000;
    if(remainder<9) cout << remainder+1;
    else cout << "0";
    num%=10000;

    remainder= num/1000;
    if(remainder<9) cout << remainder+1;
    else cout << "0";
    num%=1000;

    remainder= num/100;
    if(remainder<9) cout << remainder+1;
    else cout << "0";
    num%=100;

    remainder= num/10;
    if(remainder<9) cout << remainder+1;
    else cout << "0";
    num%=10;

    remainder= num/1;
    if(remainder<9) cout << remainder+1;
    else cout << "0";

    cout << "." << endl;
    getch();
    return 0;
}
