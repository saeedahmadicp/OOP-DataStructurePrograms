#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void open_teacher_account(void){
    char  password[20], password_original[20], user_name[20], pass[15];
	char directory[] = "\\mcqs_record\\\\";
	char filename[40];
	while(3){
	printf("Enter your user name: ");
    scanf(" %s", &user_name);
	sprintf(filename, "%s%s.txt", directory, user_name);
	FILE *teacher;
	teacher = fopen(filename, "r");
	if(teacher == NULL){
		printf("Sorry! You have Entered Invalid user name.\n");
	   fclose(teacher);  }
	else{
	  fscanf(teacher, "%s", &pass);
	  fscanf(teacher, "%s", &password_original);
	  fclose(teacher);
	  break;
	}
	}
   GetDecipher(password_original, password_original, 48);
   int i=3;
   while(3){
   printf("Enter your password: ");
   GetPassword(password, 20);
   if(!strcmp(password_original, password)) break;
   else printf("Sorry! you have entered wrong password.\n");
   if(!--i){ printf("\n\n\n\t\tYour Account is temporary blocked!\n\n"); exit(0);}
   }
}
