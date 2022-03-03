#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern_12d()
{

system("Color 3f");
  int i, j ,k,l , rows;
   cout << "Enter the number of rows: ";
   cin >> rows;

     i=rows;
 while(i>0){
     j=1;
    while( j<=i){ cout <<"*"; j++;}
    k=rows;
    while(k>i){ cout <<" "; k--;}
    k=rows;
    while(k>i){ cout <<" "; k--;}
    l=1;
    while(l<=i){ cout <<"*"; l++;}
    cout << endl; i--;
 }
  i=1;
  while(i<=rows){
     j=1;
    while(j<=i){ cout <<"*"; j++;}
    k=rows;
    while(k>i){ cout <<" "; k--;}
    k=rows;
    while(k>i){ cout <<" "; k--;}
    l=1;
    while(l<=i){ cout <<"*"; l++;}
    i++; cout << endl;
 }}
