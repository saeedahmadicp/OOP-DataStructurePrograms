#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system("color 3f");

    for(int row=1; row <=11; row++)
    {

    for(int col=1; col <=11; col++)
    {
   if(col==row || row+col == 12 || col==1 || row==1 || col==11 || row==11 || col==6 || row==6 )
    cout << "*" ;
   else
    cout << " ";
    }
    cout << endl;
}
    return 0;
}
