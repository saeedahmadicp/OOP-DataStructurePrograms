#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void pattern_12m(){
int row;
system("color 3f");
   cout <<"Enter the size for the pattern: ";
   cin >> row;
  int i=1, j=1, k=0;
 while ( i<=row){
 while(j<=2*row)

    {
    if(i+j == row+1 || i+j == row+k+1)
        cout << "*";
        cout << " ";
        j++;
   } j=1;
    cout << endl;
     i++; k+=2;
   }
   i=1; j=1;
while ( i<=row){
 while(j<=2*row)

    {
     if(i==j || i+j==2*row+1)
        cout << "*";
        cout << " ";
        j++;
   } j=1;
    cout << endl;
    i++;
   }

   getch();
}
