#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
    system("Color 3f");
    int guess, count=0, choice,num=100, high=101, low=0;
    char ch;
    srand((unsigned) time(NULL));

    cout << "\t\t*****Welcome to Guessing number game!*****"<<endl;
    do{
    guess = 50;
    cout << "Let's started, Select any number between 1 and 100:"<< endl;
    getch();

    for(;;)
    {
      cout << "My Guess is: "<< guess << "."<<endl << endl
      << "Enter 1 if my guess is true."<< endl
      << "Enter 2 if my guess is high." << endl
      << "Enter 3 if my guess is low: ";
      cin >> choice;
      count++;

      if(choice==1){
        cout << "Wow! I have guessed your number on "<< count <<" attempt."<<endl;
        break;
       }
      else if(choice==2){
        if(guess < high)
         high = guess;
     for(;;){
        guess = rand()%high;
        if(guess == 0) guess++;
        if(guess > low) break;
        }

      }
      else if(choice==3){
       if(guess > low)
        low = guess;
        for(;;){
       guess = rand()%high;
       if(guess > low) break;
        }
       }}
     getch();
      cout <<endl <<"Enter Y to play again, or any other key to Exit!";
      cin >> ch;
      system("cls");
      }while(ch == 'Y' || ch == 'y' );
     return 0;
}
