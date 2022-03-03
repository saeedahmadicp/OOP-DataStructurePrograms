#include <iostream>
#include "main.h"

using namespace std;

int main(void){
  int option;
  while(3){
 cout << "Enter 1 for banking." << endl << "Enter 2 counting."<< endl
      << "Enter 3 to exit."<< endl;
      cin >> option;

  switch(option){
    case 1: bank(); break;
    case 2: abc(); break;
    default: cout << "You have entered invalid option!" << endl;
  }}
 return 0;
 }
