#include <iostream>
#include <stdlib.h>
#include "main.h"

using namespace std;

void bank(void){
  int option;
 //I have created this program not as a bank software but
 //I have created just to check counter function
while(3){
 cout << "Enter 1 to create account." << endl << "Enter 2 delete account."<< endl
      << "Enter 3 to check no of accounts." << endl << "Enter 4 to exit."<< endl;
      cin >> option;
 switch(option){
  case 1:
   increment();
   cout << "Account Successfully Created!"<< endl<< endl;
  break;

  case 2:
    decrement();
    cout << "Account Successfully Deleted!"<< endl<< endl;
  break;

  case 3:
   cout << "The no of bank accounts are : " << get_value()<< endl<< endl;
  break;

  case 4: exit(0);
  break;

 default:
  cout << "You have entered invalid option!" << endl;
}}}
