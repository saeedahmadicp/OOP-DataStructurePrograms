#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>

#define SIZE 25
#define MCQS 50

void instruction(void);
void printline();

void online_test(void)
{
    instruction();
    system("Color 3f");
//student login
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
int i=3;
re_type:
printf("Enter your password: ");
  GetPassword(password_user, 20);
 if(!strcmp(password_org,password_user))
goto test;
else
{
    printf("Your have entered wrong password!\n");
     if(!--i){ printf("\n\n\n\t\tYour Account is temporary blocked!\n\n"); exit(0);}
    goto re_type;
}


test:{
    system("cls");
    system("Color 3f");
  int line=0,line_start=0, line_stop=0,count_mcqs=SIZE,count_marks=0;
  char opt_org,opt_usr,read_line[150];
  int i,num;
  bool choice[MCQS]={false};
  bool s=true;

  float percentage;
   srand((unsigned) time(NULL));

 while(count_mcqs>0){
  num=rand()%MCQS;
 if(!choice[num]){
 choice[num]=true;

 line_start=0; line_stop=0; line =0;

 for(i=0;i<num;i++) line_start+=7;
 line_stop=(line_start+5);

   line_start+=1;
   printline(); printline();
   FILE *saeed;
  saeed=fopen("mcqs_record\\saeedmcqs.txt","r");
  while(fgets(read_line, 150, saeed)){
   ++line;
if((line>=(line_start)) && (line<=(line_stop)))
  printf("%s",read_line);
if(line==(line_stop))  break;
}
  fscanf(saeed,"%c",&opt_org);
   fclose(saeed);
   printline(); printline();
 printf("Enter option:");
 scanf(" %c", &opt_usr);
 if(opt_org==opt_usr) count_marks++;
      getchar();
   system("cls");
   count_mcqs--;
  }
}
percentage = (count_marks/(float) SIZE)*100.0f;
   FILE *marks;
   marks=fopen(filename,"a");
   fprintf(marks,"\nObtained Marks: %d\tTotal Marks: %d \tPercentage: %.2f\n\n",count_marks,SIZE,percentage);
   fclose(marks);
   store_record(filename, count_marks, SIZE);
getchar();
 printf("\n\n\nThank You. Kindly visit result module to know you score.\n\n");
}}

void instruction(void){
printf("\n\n\n\n\n\t\t****INSTUCTIONS******\n\n");
//Sleep(1000);
printf("1.There is no time restriction.\n");
//Sleep(1000);
printf("2.Choose the Correct option and enter only A\\B\\C\\D for your answer.\n");
//Sleep(1000);
printf("3.Each MCQs carries two marks.\n");
//Sleep(1000);
printf("4.There is no negative marks. so attempt all the MCQs.\n");
//Sleep(1000);
printf("5.Press Enter Key to start the test.\n");
getch();
system("cls");
}
