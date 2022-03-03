#include <stdio.h>
#include <stdlib.h>

 void printline();

void math_games(void){
int option;
system("color 0f");
printf("\n\n\n\n");
 int i=3;
while(i){
 printline(); printline();
printf("\tWELCOME TO THE QUICK BRAIN GAMES\n");
printf("1. Quick Brain Game.\n");
printf("2. True False Game.\n");
printf("3. Return to main menu.\n");
printf("4. Exit.\n");
printline(); printline();
scanf("%d", &option);
system("cls");

 switch(option)
{
 case 1: quick_brain_game(); break;
 case 2: true_false_game(); break;
 case 3: i=0; break;
 case 4: exit(0); break;

}
getch();
system("cls");
}}
