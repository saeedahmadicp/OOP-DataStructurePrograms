#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_result(void){
int roll_no;
again:
printf("Enter your roll no: ");
scanf("%d", &roll_no);
char  str2[30]="student_record\\\\", filename[40], password_org[20],password_user[20];
sprintf(filename, "%s%d.txt", str2, roll_no);
FILE *student_login;
student_login= fopen(filename, "r");
if(student_login== NULL){
    printf("You have entered Invalid roll no.\nEnter your roll no again.\n");
    goto again;
}

else{
 fscanf(student_login, "%s", &password_org);
 fclose(student_login);
}
GetDecipher(password_org, password_org, 48);
re_type:
printf("Enter your password: ");
GetPassword(password_user, 20);
 if(!strcmp(password_org,password_user))
goto result;
else
{
    printf("Your have entered wrong password!\n");
    goto re_type;
}


result:{
    system("cls");

    FILE *read;

   read=fopen(filename,"r");
  char sent[100];
  fgets(sent, 100, read);
while(fgets(sent, 100, read)){
    printf("%s",sent);
    }
fclose(read);

}}
