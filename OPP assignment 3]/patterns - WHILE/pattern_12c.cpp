#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12c()
{

  system("color 3f");

  int row, col;
 cout << "Enter the size of pattern: "; cin >> row;
   col=row;
int i=1, j=1;

 while ( i<= row){
 while(j <=col)
{
   if( i+j >= row+1 ) cout << "*" ;
   else cout << " ";
   j++;
    }
    j=1;
    cout << endl;
    i++;
}
}
