#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "main.h"

using namespace std;

int main(void){

while(3){
 int data,option;

 //main menu
 cout << "Enter 1 to push the element to stack." << endl << "Enter 2 to pull the element from stack."<< endl
      << "Enter 3 to check the size of stack." << endl << "Enter 4 to exit."<< endl;
      cin >> option;

switch(option){
  case 1:
  cout << "Enter the element to push it into stack: ";
  cin >> data;
  if(!push(data)) goto error;
  else cout << "The element is Successfully push to the stack!" << endl<< endl;
  break;

  case 2:
  if(!pull(&data)) goto error;
  else cout << "The element is Successfully pull from the stack!" << endl << "the element is equal to = " << data << endl<< endl;
  break;

  case 3:
  cout << "The stack size is: " << size()<< endl<< endl;
  break;

  case 4:
  exit(0);
  break;

  default:
  cout << "You have entered invalid option!" << endl;
   error:{
cout << "Error Occurred either due to stack full size in case of push or stack empty size in case of pull." <<endl;
cout << "Check the stack size to know the state of error." << endl<< endl;
}
   }

 cout << "Press Enter to continue." << endl;
 getch();
    }



   getch();
return 0;}
