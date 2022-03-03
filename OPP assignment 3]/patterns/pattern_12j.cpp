#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void pattern_12j(){
int row;
system("color 3f");
   cout <<"Enter the size for the pattern: ";
   cin >> row;

   for(int i=0; i<row; i++){
    for(int j=row-i-1; j>0; j--) cout << " ";
    for(int j=0; j<=i; j++) cout << "*";
    cout << endl;
   }
   getch();
}
