#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12b()
{

  system("color 3f");

  int row, col;
 cout << "Enter the size of pattern: "; cin >> row;
   col=row;

  int i=1, j=1;

 while ( i<= row){
 while(j <=col)

    {
   if(j==1 || i==1 ||j== col || i==row  || i==j || i+j== row+1 )
    cout << "*" ;
   else
    cout << " ";
   j++;
    }
    j=1;
    cout << endl;
    i++;
}
}
