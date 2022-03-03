#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void open_admin_account(void){
    char  password[20], password_original[20], pass[15], sent[100];
	char directory[] = "mcqs_record\\\\";
	char filename[40];
	sprintf(filename, "%sadmin.txt", directory);
	FILE *admin;
	admin = fopen(filename, "r");
	if(admin == NULL){
		printf("Sorry! Admin account has not been created yet.\n");
	   fclose(admin);  }
	else{
	  fgets(sent, 100, admin);
	  fscanf(admin, "%s", &pass);
	  fscanf(admin, "%s", &pass);
	  fscanf(admin, "%s", &password_original);
	  fclose(admin);

	}
   int i=3;
   GetDecipher(password_original, password_original, 48);
   while(3){
   printf("Enter your password: ");
   GetPassword(password, 20);
   if(!strcmp(password_original, password)) break;
   else printf("Sorry! you have entered wrong password.\n");
   if(!--i){ printf("\n\n\n\t\tYour Account is temporary blocked!\n\n"); exit(0);}
   }
}
