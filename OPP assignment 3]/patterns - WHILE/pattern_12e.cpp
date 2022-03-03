#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12e()
{

  system("color 3f");

  int row, col;
 cout << "Enter the size of pattern: "; cin >> row;
   col=row;


 for(int i=1;  i<= row; i++)
    {

  for(int j=1; j <=col; j++)
    {
   if(i+j >= row+1  )
    cout << "*" ;
   else
    cout << " ";
    }
    cout << endl;
}
}
