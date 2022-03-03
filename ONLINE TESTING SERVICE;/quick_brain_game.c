#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

static void instruction(void);
static void level1(void);
static void level2(void);
static void level3(void);
static void level4(void);
static void level5(void);
static void level6(void);
static void level7(void);
static void level8(void);

static int score=0;
static int num1, num2, num4, num5, result1, result_original,result_duplicate, result_user;
static time_t start, end;
static int num3, option;
static int i;

void quick_brain_game(void)
{

printf("\t\tWelcome to Quick Brain Game!\n");

int highest_score;
    instruction();

/* We Assign value to highest score from file*/
    FILE *quick;
    quick=fopen("quickbrain.txt","r");
    if(quick==NULL)
        highest_score=0; //if the file is empty then we assign highest score as 0
    else{
    char khan1[50],khan2[50], khan3[50];
    int num;
    fscanf(quick ,"%s %s %s %d",&khan1,&khan2, &khan3, &num);
    highest_score=num;
    fclose(quick);}

char name1[50], name2[50];

  srand((unsigned) time(NULL));

while(3){

  printf("Enter your name(name1 name2): ");
  scanf("%s %s", &name1, &name2);

   score=0;

    system("color 0e");
    level1();
   if(score>=20 && score<=40){
    printf("\nCongratulation! You have completed 1st level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level2();}

    system("color 4E");
    if((end-time(NULL))<0) end=time(NULL)+5;

   if(score>=40 && score<=70){
    printf("\nCongratulation! You have completed 2nd level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level4();}

    system("color 3E");
  if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=70 && score<=100){
    printf("\nCongratulation! You have completed 3rd level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level3();}

    system("color 0B");
    if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=100 && score<=130){
    printf("\nCongratulation! You have completed 4th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level5();}

    system("color 8F");
    if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=130 && score<=160){
    printf("\nCongratulation! You have completed 5th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level6();}

   system("color 1E");
    if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=160 && score<=190){
    printf("\nCongratulation! You have completed 6th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level7();}

    system("color 2F");
    if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=190 && score<=210){
    printf("\nCongratulation! You have completed 7th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level8();}

  if(score==210)
    printf("Congratulation! You have completed the Quick Brain Game.\n");


   /*We compare  the score with highest score if it is  higher then we store the result in file */
    if(score>=highest_score){

     FILE *quick;
     quick=fopen("quickbrain.txt","w");
     highest_score=score;

  fprintf(quick, "%s %s Score: %d", name1, name2 , highest_score );
  fclose(quick);
   printf("\nCongratulation! Mr\\Mrs %s %s, you have got highest score.\n\t\tYour score is %d",  name1,  name2, highest_score);
    }

    else{
     printf("\n\tMr\\Mrs %s %s, your Score is %d\n\n\n\n",name1, name2, score);
     printf("Press Enter key to know highest score.\n");
    getchar();
    getchar();

    /* we are opening the file to show the user highest score */

    FILE *quick;
    quick=fopen("quickbrain.txt","r");
    char khan1[50],khan2[50], khan3[50];
    int num;
    fscanf(quick ,"%s %s %s %d",&khan1,&khan2, &khan3, &num);
    printf("%s %s %s %d",khan1, khan2, khan3, num);
    puts("");
    fclose(quick);
    }

    int test;
    printf("\nPress 1 to play again or 2 to finish");
    scanf("%d", &test);
    if(test==1) continue;
    else break;
}}





void level1(void){
end = time(NULL)+4;
  while(3){
   num1=rand()%100;
   num2=rand()%10;
   result_original=num1+num2;

while(3){
   if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d + %d = _______  ", num1, num2);            printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if( kbhit() ||  time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+4;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==20)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}

void level2(void){
end = time(NULL)+5;
  while(3){
   num1=rand()%100;
   num2=rand()%10;
   result_original=num1-num2;

while(3){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d - %d = _______\n  ", num1, num2);
   Sleep(1000);
    system("cls");
   if(kbhit() ||  time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+5;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==40)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}


void level3(void){
end = time(NULL)+6;
  while(3){
   num1=rand()%100;
   num2=rand()%100;
   result_original=num1+num2;

while(3){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d + %d = _______  ", num1, num2);          printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(kbhit() ||  time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+6;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==100)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}


void level4(void){
end = time(NULL)+7;
  while(3){
   num1=rand()%100;
   num2=rand()%100;
   result_original=num1-num2;

while(3){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d - %d = _______  ", num1, num2);                   printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(kbhit() ||  time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+7;
   break;
 }
}

if(result_user==result_original){
  score+=4;
  if(score==70)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}


void level5(void){
end = time(NULL)+6;
  while(3){
   num1=rand()%10;
   num2=rand()%10;
   result_original=num1*num2;

while(3){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d * %d = _______  ", num1, num2);                   printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(kbhit() ||  time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+6;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==130)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}

void level6(void){
end = time(NULL)+7;
  while(3){
   num1=rand()%100;
   num2=rand()%10;
   result_original=num1*num2;

while(3){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d * %d = _______  ", num1, num2);               printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(kbhit() ||  time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+7;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==160)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}



void level7(void){
end = time(NULL)+7;
 printf("\nIgnore fractional part.\n");
  while(3){
  printf("\nIgnore fractional part.\n");
   num1=rand()%100;
   num2=rand()%10+1;
   result_original=num1/num2;

while(3){
    if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d / %d = _______  ", num1, num2);               printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(kbhit() ||  time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+7;
   break;
 }
}

if(result_user==result_original){
  score+=4;
  if(score==190)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}

void level8(void){
char operator1;
end = time(NULL)+9;
 printf("\nIgnore fractional part.\n");
  while(3){
printf("\nIgnore fractional part.\n");
   num1=rand()%100;
   num2=rand()%100;
   num3=rand()%4+1;

 switch(num3){

 case 1:  operator1 = '+'; break;

 case 2:  operator1 = '-'; break;

 case 3: operator1 = '*'; break;

 case 4: operator1 = '/'; break;
   }


while(3){
     {
     if(operator1 == '+')  result_original=num1+num2;
     else if(operator1 == '-')  result_original=num1-num2;
     else if(operator1 == '/')  result_original=num1/num2;
     else if(operator1 == '*')  result_original=num1*num2;
     }
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d %c %d =  _______  ", num1,operator1, num2);                 printf("\t\t\t\t\t\tScore: %d\n",score);
 Sleep(1000);
    system("cls");
   if(kbhit() ||  time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+9;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==220)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}


void instruction(void){
    system("color 4F");
printf("\n\n\n\n\t<<<<*INSTRUCTIONS*>>>>\n\n");
Sleep(1000);
system("color 2A");
printf("1.Try to answer when your time is finished.\n");
Sleep(1000);
system("color 3f");
printf("2.In case if you entered the option within the time, you answer will be stored,\ndon't try to type it again,"
                 " otherwise your answer will be consider wrong.\n");
Sleep(1000);
system("color Df");
printf("3.Every blank carry two marks.\n");
Sleep(1000);
system("color 5F");
printf("4.Every level carry twenty marks.\n");
Sleep(1000);
system("color 3F");
printf("5.Press Enter to start the game.\n");
getchar(); getch(); system("cls");

}
