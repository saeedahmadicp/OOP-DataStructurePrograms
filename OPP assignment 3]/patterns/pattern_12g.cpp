#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12g()
{

  system("color 3f");

  int row, col;
 cout << "Enter the size of pattern: "; cin >> row;
   col=row;


 for(int i=1;  i< row; i++){
 for(int j=1; j < i; j++)  cout << "*";
 cout << endl;

}
}
