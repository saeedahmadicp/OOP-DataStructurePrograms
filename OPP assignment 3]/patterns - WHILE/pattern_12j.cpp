#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void pattern_12j(){
int row;
system("color 3f");
   cout <<"Enter the size for the pattern: ";
   cin >> row;

   int i=0,j=0;
   while(i<row){
    j=row-i-1;
    while(j>0){
      cout << " ";
      j--;
    } j=0;
   while( j<=i){
    cout << "*";
     j++;
   } i++; cout << endl;
   }
   getch();
}
