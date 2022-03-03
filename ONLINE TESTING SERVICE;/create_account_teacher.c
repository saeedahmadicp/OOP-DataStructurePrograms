#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void teacher_account(void){
    char access_code[20], password[20], pass1[20], pass2[20], access_code_org[20];
	char name[30], f_name[30], email[40], city[20], user_name[20], field_name[50];

	char directory[] = "mcqs_record\\\\";
    char filename[40];
	sprintf(filename, "%sadmin.txt", directory);
	FILE *admin;
	admin = fopen(filename, "r");
	if(admin)
	{ fscanf(admin, "%s", &pass1);
      fscanf(admin, "%s", &pass2);
	  fscanf(admin, "%s", &access_code_org);
	  fclose(admin);}
	else {printf("Your cannot create teahcer account without admin created first!\n");
	fclose(admin); return ;	}

	GetDecipher(access_code_org, access_code_org, 48);
	while(3){
    printf("Enter the access code to access to teacher login: ");
   GetPassword(access_code, 20);

   if(strcmp(access_code_org, access_code))
	   printf("Sorry! your have entered wrong access code.\n");
	else break;
   }


    char ch;
    scanf("%c", &ch);
	printf("Enter your name as whole: ");
	gets(name);
	printf("Enter your father name as whole: ");
	gets(f_name);
	printf("Enter your department: ");
	gets(field_name);
	printf("Enter your email address: ");
	gets(email);
	printf("Enter your city name: ");
	gets(city);


   while(3){
    printf("Enter your password: ");
    GetPassword(pass1, 20);
	printf("Enter the password again: ");
	 GetPassword(pass2, 20);
	if(!strcmp(pass1, pass2)){ strcpy(password, pass1); break;}
	else { printf("Sorry! the password is not matching!\n"); }
   }
    GetCipher(password,password,48);

	while(3){
	 printf("Enter your username:(it shouldn't contain widespace character) \n");
	 scanf(" %s",&user_name);

	sprintf(filename, "%s%s.txt", directory, user_name);
   FILE *teacher;
   teacher = fopen(filename, "r");
   if(teacher == NULL){
	 fclose(teacher);
     FILE *teacher;
	 teacher = fopen(filename, "w");
    fprintf(teacher,"Password: %s\n",password);
	fprintf(teacher,"Name: %s\n", name);
	fprintf(teacher,"Father Name: %s\n", f_name);
	fprintf(teacher,"Field name: %s\n", field_name);
	fprintf(teacher,"Email Adress: %s\n",email);
	fprintf(teacher,"City: %s\n",city);
	 fclose(teacher);
	   break;}
   else{
	fclose(teacher);
    printf("Sorry! The user name had already taken!\n");
   }
	}
}
