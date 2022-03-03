#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter five Digit number: ";
    cin >> num;

    cout << endl  << endl << "The reverse of " << num << " is: ";
    while(num>0){
     cout << num % 10;
       num/=10;
    }
    cout << "." << endl;
    getch();
    return 0;
}
