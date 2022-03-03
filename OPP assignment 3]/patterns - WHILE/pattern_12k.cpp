#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void pattern_12k(){
int row;
system("color 3f");
   cout <<"Enter the size for the pattern: ";
   cin >> row;
int i=1, j=1;
 while ( i<= row){
 while(j <=row)

    {
        if(j==1 || j==row || i==j || i+j ==row+1)
        cout << "*";
        cout << " ";
        if(i==1 && j==2 || i==row && j==2) cout << "  ";
        if(i==row/2+1 && j==row/2+2) cout << " ";
    j++;
    }
    j=1;
    cout << endl;
    i++;
}
}
