#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main(void){
 int option;
while(3){

 printf("\t\t*****WELCOME TO ONLINE BANKING SERVICE*****\n");
 printf("Enter 1 to Create account.\nEnter 2 To Login to Account.\nEnter 3 To Access to accounts Information.\n"
        "Enter 4 for bank Personal Account.\nEnter 5 to exit.\n");
 scanf("%d", &option);

 switch(option){
 case 1:
     system("cls");
     system("color 3F");
     create_account();
     break;
 case 2:
     system("cls");
     open_account(); break;
 case 3:
     system("cls");
     bank_domain(); break;
 case 4:
     system("cls");
     bank_personal(); break;
 case 5: return 0;
 default: printf("You have enter Invalid option.\n");
 }

}
return 0;}
