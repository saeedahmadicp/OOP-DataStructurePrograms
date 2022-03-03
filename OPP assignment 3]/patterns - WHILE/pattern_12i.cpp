#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12i()
{

int rows,i,j,k;
system("color 3f");
   cout <<"Enter the number of rows: ";
   cin >> rows;
   i=rows;
   while(i>0){
     j=1;
    while(j<=i){ cout <<" "; j++;}
    k=rows;
    while(k>i){ cout <<"*";  k--;}
    k=rows;
    while(k>i){ cout <<"*"; k-- ;}
   i--;
   cout << endl; }
   i=1;
    while(i<=rows){
     j=1;
    while(j<=i){ cout <<" "; j++;}
    k=rows;
    while(k>i){ cout <<"*";  k--;}
    k=rows;
    while(k>i){ cout <<"*"; k--; }
   i++;
   cout << endl; }
}
