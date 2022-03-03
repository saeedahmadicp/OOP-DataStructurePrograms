#include <iostream>
#include <stdlib.h>
#include "main.h"

using namespace std;
void abc(void){
  int option;
 //I have created this program just to check whether counter function work properly or not
while(3){
 cout << "Enter 1 to increment counter value." << endl << "Enter 2 decrement counter value."<< endl
      << "Enter 3 to reset counter value." << endl << "Enter 4 to check the counter value." <<endl
      << "Enter 5 to exit."<< endl;
      cin >> option;
 switch(option){
  case 1:
    increment();
    cout << "The value of counter is Successfully incremented."<< endl<< endl;
  break;

  case 2:
    decrement();
    cout << "The value of counter is Successfully decremented."<< endl<< endl;
  break;

  case 3:
    reset(); cout << "The value of counter is Successfully reseted to zero."<< endl<< endl;
    break;

  case 4: cout << "The value of counter is: " << get_value()<< endl<< endl; break;

  case 5: exit(0); break;

   default:
    cout << "You have entered invalid option!" << endl;
}}}

