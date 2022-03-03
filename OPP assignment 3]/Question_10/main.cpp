#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{  system("Color 3f");
    int rows, element = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";
      for(int j = 0; j <= i; j++)
        {
         if (j == 0 || i == 0)
                element = 1;
          else
                element = element*(i-j+1)/j;
        cout << element << "   ";
        }
        cout << endl;
    }
    getch();
    return 0;
}
