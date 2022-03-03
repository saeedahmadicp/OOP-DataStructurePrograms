#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char ch1, ch2, ch3, ch4;
    cout << "Enter four Characters: " << endl;
    ch1=getche();
    ch2=getche();
    ch3=getche();
    ch4=getche();

    getch();
    cout << "\nThe four Characters you Entered are:" <<endl;
    cout << "ch1 = " << ch1 << endl;
    cout << "ch2 = " << ch2 << endl;
    cout << "ch3 = " << ch3 << endl;
    cout << "ch4 = " << ch4 << endl;

    getch();
    return 0;
}
