#include <stdio.h>
#include <stdlib.h>
void open_teacher_account(void);

void mcqs_writting(void){
char a[50], b[20],c[20],d[20],e[20];
char name[20],filename[40];
 open_teacher_account();
printf("Write the name you want to give your file: ");
scanf("%s", &name);
//for the pathway of the file
char  str2[30]="mcqs_record\\\\";

sprintf( filename, "%s%s.txt", str2,name);

int no_mcqs,i;
char c_option;
printf("How many MCQs you want to store: ");
scanf("%d", &no_mcqs);
for(i=0;i<no_mcqs;i++){
printf("Enter MCQs statement:\n");
getchar();
gets(a);
printf("Enter 1st option:\n");
gets(b);
printf("Enter 2nd option:\n");
gets(c);
printf("Enter 3rd option:\n");
gets(d);
printf("Enter Fourth option:\n");
gets(e);
printf("Enter only the Correct Option(A\\B\\C\\D): ");
scanf("%c",&c_option);

 FILE *mcqs;
 mcqs=fopen(filename,"a");
 fprintf(mcqs,"%s\nA. %s\nB. %s\nC. %s\nD. %s\n%c\n\n",a,b,c,d,e,c_option);
 fclose(mcqs);
 }
exit(0);
}



