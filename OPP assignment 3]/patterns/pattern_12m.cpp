#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void pattern_12m(){
int row;
system("color 3f");
   cout <<"Enter the size for the pattern: ";
   cin >> row;

   for(int i=1, k=0; i<=row; i++, k+=2){
    for(int j=1; j<=2*row; j++) {
        if(i+j == row+1 || i+j == row+k+1)
        cout << "*";
        cout << " ";
   // if(i==row && j==row) cout << "*";
   }
    cout << endl;
   }
 for(int i=1; i<=row; i++){
  for(int j=1; j<=2*row; j++){
     if(i==j || i+j==2*row+1)
        cout << "*";
        cout << " ";
   }
    cout << endl;
   }

   getch();
}
