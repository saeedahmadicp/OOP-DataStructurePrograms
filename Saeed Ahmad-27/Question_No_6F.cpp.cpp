#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float num1, num2, result;
    char ch;
    int opt;
    cout << "Enter Two numbers: ";
    cin >> num1 >> num2;


    cout << "Enter 1 for Operation of your own choice and 2 for All the four operations: ";
    cin >> opt;
    if(opt == 1)

    {
    cout << "Enter the Operation you want to operate(+,-,/,*) ";
    ch = getche();
    getch();

    switch(ch){
    case '+':  result= num1+num2; break;
    case '-': result= num1-num2; break;
    case '*': result= num1*num2; break;
    case '/': result= num1/num2; break;
    default: cout << "You have Entered Invalid Operator!" <<endl;
     }
    cout << "\nYour result is: " << result << endl;
    }

   else if(opt == 2) {
    cout << "Addition: " << endl<< num1 << "+" << num2 << "=" << (result=num1+num2)<< endl<< endl;
    cout << "Subtraction: " << endl<< num1 << "-" << num2 << "=" << (result=num1-num2)<< endl<< endl;
    cout << "Division: "<< endl << num1 << "/" << num2 << "=" << (result=num1/num2)<< endl<< endl;
    cout << "Multiplication: " << endl<< num1 << "*" << num2 << "=" << (result=num1*num2)<< endl<< endl;

   }

   else cout << "\nYou have Entered Invalid Option!" << endl;

    return 0;
}
