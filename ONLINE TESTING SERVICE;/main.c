#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "MAIN.h"

 void printline();

int main(void){
int option;
while(3){
system("color 3f");
printf("\n\n\n\n");
 printline();
 printline();
printf("\tWELCOME TO THE ONLINE TESTING SERVICE\n");
printf("1. Student Login.\n");
printf("2. Teacher Login.\n");
printf("3. Admin Login.\n");
printf("4. Math Games.\n");
printf("5. Exit.\n");
 printline();
 printline();
scanf("%d", &option);
system("cls");
//
 switch(option)
{
 case 1: student_login(); break;
 case 2: teacher_login(); break;
 case 3: admin_login();  break;
 case 4: math_games();  break;
 case 5: exit(0); break;
 default: printf("You have entered invalid option!\n");
}
}
getch();
return 0;
}

inline void printline(){  int i;
   for(i=0; i<50; i++) printf("*"); printf("\n");
}
