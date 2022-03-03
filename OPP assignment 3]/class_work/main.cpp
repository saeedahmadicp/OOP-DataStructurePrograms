#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system("color 3f");

    for(int row=1; row <=5; row++)
    {

    for(int col=1; col <=5; col++)
    {
   if(col==1 || row==1 ||col==5 || row==5 )
    cout << "*" ;
   else
    cout << " ";
    }
    cout << endl;
}
    return 0;
}
