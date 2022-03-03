#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, sum=0;
    cout << "Enter four Digits number: ";
    cin >> num;
    sum+=num%10;
    num/=10;
    num/=10;
    num/=10;
    sum+=num%10;
    cout << "The sum of the first and the fourth digit is: " << sum << "." << endl;
    getch();

    return 0;
}
