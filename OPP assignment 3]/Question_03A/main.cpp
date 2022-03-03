#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system("Color 3f");
    int num;
    for(;;){
      cout << "Enter any number: ";
      cin >> num;
      if(num==5)
      {
        cout << "Hey! you weren't supposed to enter 5!"<<endl;
        exit(0);
      }}
   return 0;
}
