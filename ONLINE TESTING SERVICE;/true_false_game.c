#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>


static void instruction(void);
static void level_t1(void);
static void level_t2(void);
static void level_t3(void);
static void level_t4(void);

//Static Global variable
static int score=0;
static int num1, num2, num4, num5, result1, result_original,result_duplicate, result_user;
static time_t start, end;
static int num3, option;
static int i;


void true_false_game(void){

printf("\t\tWelcome to True False Game!\n");

int highest_score;
    instruction();

/* We Assign value to highest score from file*/
    FILE *quick;
    quick=fopen("truefalsegame.txt","r");
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

       if(score<=30){
    getchar();   getchar();
    level_t1();}

    if((end-time(NULL))<0) end=time(NULL)+5;

       if(score>=30 && score<=60){
    printf("\nCongratulation! You have completed 1st level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
   level_t2();}

    if((end-time(NULL))<0) end=time(NULL)+5;

    system("color 4F");
       if(score>=60 && score<=100){
    printf("\nCongratulation! You have completed 2nd level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
   level_t3();}


   if(score==100){
    printf("\nCongratulation! You have completed 3rd level.\nPress Enter key to start new level.\n");
    getchar();   getchar();}

    /*We compare  the score with highest score if it is  higher then we store the result in file */
    if(score>=highest_score){

     FILE *quick;
     quick=fopen("truefalsegame.txt","w");
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
    quick=fopen("truefalsegame.txt","r");
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








void level_t1(void){
end = time(NULL)+4;
   while(3){
   num1=rand()%100;
   num2=rand()%10;
   num4=rand()%100;
   num5=rand()%10;
 result1=num1+num2;
 result_duplicate=num4+num5;
 num3=(rand()%2)+1;
 if(num3==1){   //we have assign 1 as true
  result_original=result1;
  option=1;}
 else{
  if(num1+num2!=result_duplicate){
    result_original=result_duplicate;
    option=2;  //we have assign 2 as false
  }
  else if(num1+num2==result_duplicate){
    result_original=result_duplicate;
    option=1;
  }}

 while(3){
    if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d + %d = %d ", num1, num2,result_original); printf("\t\t\t\t\t\tScore: %d\n",score);
    printf("Enter 1 for True and Enter 2 for false expression:\n");
   Sleep(1000);
    system("cls");
    printf("Enter 1 for True and Enter 2 for false expression:\n");
    if(kbhit() ||  time(NULL)==end){
    scanf("%d", &result_user);
    end = time(NULL)+4;
    break;
 }
}
if(result_user==option){
  score+=2;
  if(score==30)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}


void level_t2(void){
end = time(NULL)+4;
   while(3){
   num1=rand()%100;
   num2=rand()%10;
   num4=rand()%100;
   num5=rand()%10;
 result1=num1-num2;
 result_duplicate=num4-num5;
 num3=(rand()%2)+1;
 if(num3==1){
  result_original=result1;
  option=1;}
 else{
  if(num1+num2!=result_duplicate){
    result_original=result_duplicate;
    option=2;
  }
  else if(num1+num2==result_duplicate){
    result_original=result_duplicate;
    option=1;
  }}

 while(3){
    if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d ",(end-time(NULL))); printf("\t\t\t\t\t\tScore: %d\n",score);
    printf("%d - %d = %d\n  ", num1, num2,result_original);
    printf("Enter 1 for True and Enter 2 for false expression:\n");
   Sleep(1000);
    system("cls");
    printf("Enter 1 for True and Enter 2 for false expression:\n");
    if(kbhit() ||  time(NULL)==end){
    scanf("%d", &result_user);
    end = time(NULL)+4;
    break;
 }
}
if(result_user==option){
  score+=2;
  if(score==60)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}



void level_t3(void){
end = time(NULL)+5;
   while(3){
   num1=rand()%100;
   num2=rand()%10;
   num4=rand()%100;
   num5=rand()%10;
 result1=num1*num2;
 result_duplicate=num4*num5;
 num3=(rand()%2)+1;
 if(num3==1){
  result_original=result1;
  option=1;}
 else{
  if(num1+num2!=result_duplicate){
    result_original=result_duplicate;
    option=2;
  }
  else if(num1+num2==result_duplicate){
    result_original=result_duplicate;
    option=1;
  }}

 while(3){
    if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d + %d = %d  ", num1, num2,result_original);  printf("\t\t\t\t\t\tScore: %d\n",score);
    printf("Enter 1 for True and Enter 2 for false expression:\n");
   Sleep(1000);
    system("cls");
    printf("Enter 1 for True and Enter 2 for false expression:\n");
    if(kbhit() ||  time(NULL)==end){
    scanf("%d", &result_user);
    end = time(NULL)+5;
    break;
 }
}
if(result_user==option){
  score+=4;
  if(score==100)
    break;
  else
    continue;
}
else{
   printf("Your answer was wrong!\n");
 break;

}}}


static void instruction(void){
    system("color 3F");
printf("\n\n\n\n\t<<<<*INSTRUCTIONS*>>>>\n\n");
Sleep(1000);
system("color 0E");
printf("1.Enter 1 for true expression and 2 for false expression.\n");
Sleep(1000);
system("color 2A");
printf("2.Try to answer when your time is finished.\n");
Sleep(1000);
system("color 3f");
printf("3.In case if you entered the option within the time, you answer will be stored,\ndon't try to type it again,"
                 " otherwise your answer will be consider wrong.\n");
Sleep(1000);
system("color Df");
printf("4.Every true expression carry two marks.\n");
Sleep(1000);
system("color 5F");
printf("5.Every level carry twenty marks.\n");
Sleep(1000);
system("color 3F");
printf("6.Press Enter to start the game.\n");
getchar(); getch();
system("cls");

}
