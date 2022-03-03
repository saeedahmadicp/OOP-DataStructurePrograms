#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printline();
void open_teacher_account(void);

void teacher_login(void){
int option;
 system("cls");
 int i=3;
system("color 0F");
printf("\n\n\n\n");
while(i){
 printline(); printline();
printf("\tWELCOME TO THE TEACHER LOGIN Menu.\n");
printf("1. Create Instructor Account\n");
printf("2. Write a Test\n");
printf("3. Review the Old Test\n");
printf("4. Return to the main menu\n");
printf("5. Exit\n");
printline(); printline();
scanf("%d", &option);
 system("cls");
  switch(option)
{
 case 1: teacher_account(); break;
 case 2: mcqs_writting(); break;
 case 3: open_teacher_account();
         review_the_test(); break;
 case 4: i=0; break;
 case 5: exit(0); break;

}
getch();
system("cls");}

}

