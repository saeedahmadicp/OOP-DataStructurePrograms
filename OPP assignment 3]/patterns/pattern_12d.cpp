#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12d()
{

system("Color 3f");
  int i, j ,k,l , rows;
   cout << "Enter the number of rows: ";
   cin >> rows;

   for(i=rows; i>0; i--){
   for(j=1; j<=i; j++) cout <<"*";
   for (k=rows; k>i; k--) cout <<" ";
   for (k=rows; k>i; k--) cout <<" ";
   for(l=1; l<=i; l++)cout <<"*";
    cout << endl;}

   for(i=1; i<=rows; i++){
   for(j=1; j<=i; j++) cout <<"*";
   for(k=rows; k>i; k--) cout <<" ";
   for (k=rows; k>i; k--) cout <<" ";
   for(l=1; l<=i; l++) cout <<"*";
        cout << endl;}
     }

