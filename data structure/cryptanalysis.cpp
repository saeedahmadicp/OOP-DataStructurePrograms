#include <iostream>
#include <cstdlib>


using namespace std;

int main(void){

   for(int i=0; i<255; i++)
     cout << i << " the character is:  "<<static_cast<char>(i)<< endl;

   return 0;
}