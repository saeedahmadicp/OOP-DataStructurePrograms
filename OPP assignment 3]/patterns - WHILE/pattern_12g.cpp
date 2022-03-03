#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12g()
{

  system("color 3f");

  int row, col;
 cout << "Enter the size of pattern: "; cin >> row;
   col=row;
int i=1, j=1;
 while(i< row){
   while(j < i){
       cout << "*";
       j++;
    } i++; j=1;
    cout << endl;
 }
}
