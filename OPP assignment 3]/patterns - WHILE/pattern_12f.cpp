#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12f()
{

  system("color 3f");

  int row, col;
 cout << "Enter the size of pattern: "; cin >> row;
   col=row;
int i=1, j=1;
 while(i< row){
    j=1;
   while(j < i){ cout << " "; j++; }
   j=i;
   while( j < row){ cout << "*"; j++;}
   i++;
   cout << endl;
 }}
