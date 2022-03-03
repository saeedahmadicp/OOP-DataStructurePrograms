#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    system("Color 3f");
    int terms;
    cout << "Enter the number of terms to generate fibonacci sequence: ";
    cin >> terms;

    int num1=1, num2=1, sum;
   cout << "The required Fibonacci sequence is: " << endl;
   cout << num1 <<"  " << num2 << "  ";
   for(int i=0; i<terms-2; i++){
    sum = num1 + num2;
    cout << sum << "  ";
    num1 = num2;
    num2 = sum;
   }
   getch();

    return 0;
}
