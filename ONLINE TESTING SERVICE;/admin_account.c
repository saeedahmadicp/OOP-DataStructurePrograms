#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void admin_account(void){
    char access_code[20], admin_password[20], pass1[20], pass2[20];
	char name[30], f_name[30], email[40], city[20], institute_name[50];
    char ch;
    char directory[] = "mcqs_record\\\\";
    char filename[40];
	sprintf(filename, "%sadmin.txt", directory);
    FILE *admin;
    admin = fopen(filename, "r");
   if(admin != NULL){
     printf("Sorry! Admin account have already been created.\n");

   }
   else {
    scanf("%c", &ch);
	printf("Enter your name as whole: ");
	gets(name);
	printf("Enter your father name as whole: ");
	gets(f_name);
	printf("Enter your institute name: ");
	gets(institute_name);
	printf("Enter your email address: ");
	gets(email);
	printf("Enter your city name: ");
	gets(city);

   while(3){
    printf("Enter the access code for the teachers: ");
    GetPassword(pass1, 20);
	printf("Enter the access code again: ");
    GetPassword(pass2, 20);
	if(!strcmp(pass1, pass2)){ strcpy(access_code, pass1); break;}
	else { printf("Sorry! the access code is not matching!\n"); }
   }
   GetCipher(access_code,access_code,48);
   while(3){
    printf("Enter the password for the admin account: ");
    GetPassword(pass1, 20);
	printf("Enter the password again: ");
	 GetPassword(pass2, 20);
	if(!strcmp(pass1, pass2)){ strcpy(admin_password, pass1); break;}
	else { printf("Sorry! the password is not matching!\n"); }
   }
    GetCipher(admin_password,admin_password,48);

	while(3){

	 fclose(admin);
     FILE *admin;
	 admin = fopen(filename, "w");
	fprintf(admin,"Access Code: %s\n",access_code);
	fprintf(admin,"Admin Password: %s\n",admin_password);
	fprintf(admin,"Name: %s\n", name);
	fprintf(admin,"Father Name: %s\n", f_name);
	fprintf(admin,"Institute Name: %s\n",institute_name);
	fprintf(admin,"Email Adress: %s\n",email);
	fprintf(admin,"City: %s",city);
	 fclose(admin);
	   break;}



   }
	}



