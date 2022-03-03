#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    system("color 3f");
    int num, divisor=2;
    cout << "Enter any number: ";
    cin >> num;

    while(num/divisor != 0){
        divisor*=2;
    }
    divisor/=2;

    while(divisor != 0){
    cout << num/divisor;
    num%=divisor;
    divisor/=2;
   }
    getch();
    return 0;
}
