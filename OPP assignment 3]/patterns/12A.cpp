#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12a()
{

  system("color 3f");

  int row, col;
 cout << "Enter the size of pattern: "; cin >> row;
   col=row;


 for(int i=1;  i<= row; i++)
    {

  for(int j=1; j <=col; j++)
    {
   if(j==1 || i==1 ||j== col || i==row )
    cout << "*" ;
   else
    cout << " ";
    }
    cout << endl;
}
}
