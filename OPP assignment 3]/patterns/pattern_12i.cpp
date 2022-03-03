#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12i()
{

int rows,i,j,k;
system("color 3f");
   cout <<"Enter the number of rows: ";
   cin >> rows;

   for(i=rows; i>0; i--){
   for(j=1; j<=i; j++) cout <<" ";
   for (k=rows; k>i; k--) cout <<"*";
   for (k=rows; k>i; k--) cout <<"*";
       cout << endl;  }
   for(i=1; i<=rows; i++){
   for(j=1; j<=i; j++) cout <<" ";
   for(k=rows; k>i; k--) cout <<"*";
   for (k=rows; k>i; k--) cout <<"*";
      cout << endl; }
}
