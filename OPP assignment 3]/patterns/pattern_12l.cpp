#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void pattern_12l(){
int row;
system("color 3f");
   cout <<"Enter the size for the pattern: ";
   cin >> row;

   for(int i=1; i<=row; i++){
    for(int j=1; j<=row; j++) {
        if(j==1 || j==row || i==j )
        cout << "*";
        cout << " ";
        if(i==1 && j==2 || i==row && j==2 ) cout << " ";
    }
    cout << endl;
   }
   getch();
}
