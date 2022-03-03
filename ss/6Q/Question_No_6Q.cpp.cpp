#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int no_100_notes, no_50_notes, no_10_notes, amount;
    cout << "Enter the amount to be withdrawn in hundreds: ";
    cin >> amount;

    no_100_notes = amount/100 ;
    no_50_notes = amount/50 ;
    no_10_notes = amount/10 ;

    cout << endl << "the total number of currency notes of each denomination the cashier will have to give are:" << endl;
    cout << "The 100 notes will be " << no_100_notes << "." << endl
         << "The 50 notes will be " << no_50_notes << "." << endl
         << "The 10 notes will be " << no_10_notes << "." << endl;
         getch();
    return 0;
}
