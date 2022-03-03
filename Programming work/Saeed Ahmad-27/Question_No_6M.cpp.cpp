#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, sum=0;
    cout << "Enter five Digits Number: ";
    cin >> num;

   for(int i=0; i<5; i++)
   {
    sum += num % 10; //it will add one by one digit to sum, starting from unit digit
    num/=10;
   }
   cout << "The sum of five digit number is: "<< sum <<"." <<endl;
   getch();

   return 0;
}
