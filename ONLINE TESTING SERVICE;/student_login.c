#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
 void printline();

void student_login(void){
int option;
 system("cls");
system("color 0f");
printf("\n\n\n\n");
int i=3;
while(i){
 printline(); printline();
printf("\tWELCOME TO THE STUDENT LONIN MODULE\n");
printf("1. Create Account\n");
printf("2. Online Test.\n");
printf("3. Check the Result.\n");
printf("4. Return to Main Menu.\n");
printf("5. Exit.\n");
 printline();  printline();
scanf("%d", &option);
 system("cls");
 switch(option)
{
 case 1: create_account(); break;
 case 2: online_test(); break;
 case 3: test_result();  break;
 case 4: i=0;  break;
 case 5:  exit(0); break;

}
getch();
system("cls"); }

}
