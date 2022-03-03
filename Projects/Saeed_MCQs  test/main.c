#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

#define SIZE 25

void instruction(void);
void mcqs_writting(void);
void record(void);

int main()
{   system("Color 3F");
    int opt;
    printf("\n\n\n\tWelcome To MCQs program:\n");
   while(6){
    start:
    printf("Enter 1 to write MCQs.\nEnter 2 to take test.\nEnter 3 to view previous record\nEnter 4 to exit.\n");
    scanf("%d", &opt);
    system("cls");
    if(opt==1){ mcqs_writting(); continue;}
    else if(opt==3) {record(); continue; }
    else if(opt==4) exit(0);
    if(opt==2){
    instruction();
    puts("\n\n\t");
    /*The user wants to take the test, so we have opened the file here for reading MCQs*/
    FILE *khan;
    khan=fopen("F:\\saeedmcqs.txt", "r");
 char sent[100];
 int line=0, count=0,i=20, num, option;
 int mcqs[SIZE]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

 int correct_option, file_option,roll_no;

//We use the bool function here so to avoid repetition of MCQs
//Initially we have declared all MCQs as false
 bool opt[SIZE]={false};

 //We have used srand function so to show different sequence when each time the user take the test
 srand((unsigned) time(NULL));

float percentage;


 char n[10],m[10];
 printf("Enter You Name(name1 name2): ");
 scanf("%s %s", &n,&m);
 printf("Enter Your Roll Number: ");
 scanf(" %d",&roll_no);

while(i>0){
line=0;
 num=rand()%SIZE;
 if(!opt[num]){ //if opt[num] is false it means that the MCQs is not yet displayed so display it yet
 opt[num]=true; //We have declared it true so that it may not repeat
 puts("");

switch(mcqs[num]){

  case 1:
 {
   //We have set the position of reading file to the start of the file
  fseek(khan, 0, SEEK_SET);
  while(fgets(sent, 100, khan)){
  ++line;
  //We are print the specific line which contain the that Serial number MCQs as mention in case.
  if(line<=5)
  printf("%s",sent);
  if(line==5) break;
 }
 /*when the file reading is reached to the fifth line the loop is break, and so it move to 6th line from where
 we have read the correct option of MCQs and stored it in variable*/
 fscanf(khan,"%d",&correct_option);
 line=0;
 printf("Enter option:");
 scanf(" %d", &option);
 /*We have taken the value from the user and now we will compare it with the correct option, if both the answers match then
 the count variable will be incremented else it will be ignore and also the case is finished  */
 if(option==correct_option)  count++;
 system("cls");
 break;}


 case 2:{
     fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
++line;
  if(line>=9 && line<=13)
    printf("%s",sent);
if(line==13) break;
 }
fscanf(khan,"%d",&correct_option);
 line=0;
 printf("Enter option:");
scanf(" %d", &option);
if(option==correct_option)  count++;
system("cls");
 break;}


 case 3:{
     fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
++line;
  if(line>=16 && line<=20)
    printf("%s",sent);
if(line==20) break;
 }
 fscanf(khan,"%d",&correct_option);
 line=0;
 printf("Enter option:");
 scanf(" %d", &option);
if(option==correct_option)  count++;
system("cls");
break;}


 case 4:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
++line;
  if(line>=23 && line<=28)
    printf("%s",sent);
if(line==28) break;
 }
fscanf(khan,"%d",&correct_option);
 line=0;
 printf("Enter option:");
 scanf(" %d", &option);
if(option==correct_option)  count++;
system("cls");
break;}


 case 5:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
++line;
  if(line>=31 && line<=35)
    printf("%s",sent);
if(line==35) break;
 }
fscanf(khan,"%d",&correct_option);
 line=0;
 printf("Enter option:");
 scanf(" %d", &option);
if(option==correct_option)  count++;
system("cls");
break;}


 case 6:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
++line;
  if(line>=38 && line<=42)
    printf("%s",sent);
if(line==42) break;
 }
fscanf(khan,"%d",&correct_option);
 line=0;
 printf("Enter option:");
 scanf(" %d", &option);
if(option==correct_option)  count++;
system("cls");
break;}



 case 7:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
++line;
  if(line>=45 && line<=49)
    printf("%s",sent);
if(line==49) break;
 }
fscanf(khan,"%d",&correct_option);
 line=0;
 printf("Enter option:");
 scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
 break;}


 case 8:{
    fseek( khan, 0, SEEK_SET );
  while(fgets(sent, 100, khan)){
  ++line;
  if(line>=52 && line<=56)
    printf("%s",sent);
  if(line==56) break;
 }
  fscanf(khan,"%d",&correct_option);
  line=0;
  printf("Enter option:");
  scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}


   case 9:{
    fseek( khan, 0, SEEK_SET );
   while(fgets(sent, 100, khan)){
   ++line;
   if(line>=59 && line<=63)
    printf("%s",sent);
   if(line==63) break;
   }
   fscanf(khan,"%d",&correct_option);
   line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
   break;}


 case 10:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=66 && line<=70)
    printf("%s",sent);
  if(line==70) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}


 case 11:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=73 && line<=77)
    printf("%s",sent);
  if(line==77) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option: ");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}


  case 12:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=80 && line<=84)
    printf("%s",sent);
  if(line==84) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}

  case 13:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=87 && line<=91)
    printf("%s",sent);
  if(line==91) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}


  case 14:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=94 && line<=98)
    printf("%s",sent);
  if(line==98) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}


  case 15:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=101 && line<=105)
    printf("%s",sent);
  if(line==105) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}


  case 16:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=108 && line<=112)
    printf("%s",sent);
  if(line==112) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}

  case 17:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=115 && line<=119)
    printf("%s",sent);
  if(line==119) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}


  case 18:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=122 && line<=126)
    printf("%s",sent);
  if(line==126) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}


  case 19:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=129 && line<=133)
    printf("%s",sent);
  if(line==133) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}

  case 20:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=136 && line<=140)
    printf("%s",sent);
  if(line==140) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}

    case 21:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=143 && line<=147)
    printf("%s",sent);
  if(line==147) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}

 case 22:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=150 && line<=154)
    printf("%s",sent);
  if(line==154) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}


   case 23:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=157 && line<=161)
    printf("%s",sent);
  if(line==161) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}

   case 24:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=164 && line<=168)
    printf("%s",sent);
  if(line==168) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}

   case 25:{
    fseek( khan, 0, SEEK_SET );
while(fgets(sent, 100, khan)){
   ++line;
  if(line>=171 && line<=175)
    printf("%s",sent);
  if(line==175) break;
    }
   fscanf(khan,"%d",&correct_option);
  line=0;
   printf("Enter option:");
   scanf(" %d", &option);
  if(option==correct_option)  count++;
  system("cls");
  break;}

}
i--;
}}

puts("\n\n");
printf("\tMr\\Mrs %s %s have gotten %d marks out of 40\n",n,m,(count*2));
fclose(khan);

   FILE *marks;
   percentage=(count*5.0f);
   marks=fopen("F:\\MCQs_result.txt","a");
   fprintf(marks,"Name: %s %s\t\t\t\t Roll No: %d\nObtained Marks: %d\tTotal Marks: %d \tPercentage: %.2f\n\n",n,m,roll_no,(count*2),40,percentage);
   fclose(marks);
puts("\n\n\n");
continue;}
else {
    printf("You have Entered Invalid Option:\n");
    goto start;
}}

return 0;
}



void instruction(void){
printf("\n\n\n\n\n\t\t****INSTUCTIONS******\n\n");
Sleep(1000);
printf("1.There is no time restriction.\n");
Sleep(1000);
printf("2.Choose the Correct option and enter only 1\\2\\3\\4 for your answer.\n");
Sleep(1000);
printf("3.Each MCQs carries two marks.\n");
Sleep(1000);
printf("4.There is no negative marks. so attempt all the MCQs.\n");
Sleep(1000);
printf("5.Press Enter Key to start the test.\n");
getchar();
getchar();
system("cls");
}

void mcqs_writting(void){
char a[50], b[20],c[20],d[20],e[20];
int c_option,no_mcqs,i;
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
printf("enter only the number of Correct Option(1\\2\\3\\4): ");
scanf("%d",&c_option);

 FILE *mcqs;
 mcqs=fopen("F:\\new_mcqs.txt","a");
 fprintf(mcqs,"%s\n%s\n%s\n%s\n%s\n%d\n\n",a,b,c,d,e,c_option);
 fclose(mcqs);
 }
exit(0);
}

void record(void){
 FILE *read;

   read=fopen("F:\\MCQs_result.txt","r");
  char sent[100];
while(fgets(sent, 100, read)){
    printf("%s",sent);
    }
fclose(read);

}



