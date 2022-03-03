#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
    system("Color 3f");
    int num, count=0, guess;
    char ch;
    srand((unsigned) time(NULL));

    cout << "\t\t*****Welcome to Guessing number game!*****"<<endl;
    do{
    num= rand()%100+1;
    cout << "Let's started we have selected a number between 1 and 100. Enter Your Guess: ";

    for(;;)
    {
        count++;
        cin >> guess;
      if(guess==num){
        cout << "Congratulation! You have entered correct number on "<< count <<" guess."<<endl;
        break;
       }
      else if(guess > num)
       cout << "Your Guess is too high, Enter Your Guess again: ";
      else if(guess < num)
       cout << "Your Guess is too low, Enter Your Guess again: ";

     }
     getch();
      cout <<endl <<"Enter Y to play again, or any other key to Exit!";
      cin >> ch;
      system("cls");
      }while(ch == 'Y' || ch == 'y' );
     return 0;
}
