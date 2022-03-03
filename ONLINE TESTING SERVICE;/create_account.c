#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_account(void){

 char name1[20], name2[20], f_name1[30], pass1[20],pass2[20],password[20];
 char city[30], email[40];
 int roll_no;
getchar();
printf("Enter your 1st Name: ");
gets(name1);
printf("Enter your 2nd Name: ");
gets(name2);
printf("Enter your Father name as a whole: ");
gets(f_name1);
printf("Enter your email address: ");
gets(email);
printf("Enter Your city name: ");
gets(city);

while(3){
printf("Enter your password.(your password should not be greater than 20 characters):\n");
GetPassword(pass1, 20);
printf("Enter your password again: ");
GetPassword(pass2, 20);
if(!strcmp(pass1, pass2)){ strcpy(password, pass1); break;}
printf("Password does not matching!\n");
}
// We have made the password encrypted
GetCipher(password, password, 48);

//We have given the roll no to the new user on the basis of previous value
roll_no = read_rollno();
//Now we are storing the current roll no so to see it for the next user
store_rollno(roll_no);

printf("Your roll no is: %d.(Remember your roll no)", roll_no);

char  str2[30]="student_record\\\\";


char filename[40];

FILE *student_record;
sprintf( filename, "%s%d.txt", str2, roll_no);

 student_record=fopen(filename,"a");
 fprintf(student_record,"%s\nName: %s %s\nFather Name: %s\nRoll No: %d\nEmail Address: %s\n"
         "City Name: %s",password, name1, name2, f_name1, roll_no, email, city);
 fclose(student_record);

 printf("\n\tYour Account is successfully created!\n");
}
