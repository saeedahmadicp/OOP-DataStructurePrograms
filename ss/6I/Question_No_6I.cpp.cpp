#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int subject[5]={0},i, aggregate=0, percentage;
    cout << "Enter the marks of five Subjects: " << endl;

    for(i=0; i<5; i++){
    cout << "Enter the " << i+1 << " Subject marks: ";
    cin >> subject[i];
    }

   // Aggregate
    for(i=0; i<5; i++)
    aggregate+=subject[i];


    percentage = aggregate/5.0f;

    cout << endl << "Your Aggregate marks is: " << aggregate << " while your Percentage is equal to "<< percentage << "." << endl;
    getch();
       return 0;
}
