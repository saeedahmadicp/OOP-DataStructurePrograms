#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

void instruction(void);
void level1(void);
void level2(void);
void level3(void);
void level4(void);
void level5(void);
void level6(void);
void level7(void);
void level8(void);
void level_t1(void);
void level_t2(void);
void level_t3(void);
void level_t4(void);

int score=0;
int num1, num2, num4, num5, result1, result_original,result_duplicate, result_user;
time_t start, end;
int num3, option;
int i;


int main()
{

printf("\t\tWelcome to Quick Brain Game!\n");

int highest_score;
    instruction();

/* We Assign value to highest score from file*/
    FILE *quick;
    quick=fopen("F:\\quickbrain.txt","r");
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
   level_t1();
   if(score>=20 && score<=40){
    printf("\nCongratulation! You have completed 1st level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level1();}

    system("color 4E");
    if((end-time(NULL))<0) end=time(NULL)+5;

   if(score>=40 && score<=60){
    printf("\nCongratulation! You have completed 2nd level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level_t2();}

    system("color 3E");
  if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=60 && score<=80){
    printf("\nCongratulation! You have completed 3rd level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level4();}

    system("color 0B");
    if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=80 && score<=100){
    printf("\nCongratulation! You have completed 4th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level_t3();}

    system("color 8F");
    if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=100 && score<=120){
    printf("\nCongratulation! You have completed 5th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level3();}

   system("color 1E");
    if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=120 && score<=140){
    printf("\nCongratulation! You have completed 6th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level4();}

    system("color 2F");
    if((end-time(NULL))<0) end=time(NULL)+5;

    if(score>=140 && score<=160){
    printf("\nCongratulation! You have completed 7th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level5();}

    system("color CF");
    if((end-time(NULL))<0) end=time(NULL)+5;

       if(score>=160 && score<=180){
    printf("\nCongratulation! You have completed 8th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level6();}

    if((end-time(NULL))<0) end=time(NULL)+5;

       if(score>=180 && score<=200){
    printf("\nCongratulation! You have completed 9th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level7();}

    if((end-time(NULL))<0) end=time(NULL)+5;

    system("color 4F");
       if(score>=200 && score<=240){
    printf("\nCongratulation! You have completed 10th level.\nPress Enter key to start new level.\n");
    getchar();   getchar();
    level8();}



   /*We compare  the score with highest score if it is  higher then we store the result in file */
    if(score>=highest_score){

     FILE *quick;
     quick=fopen("F:\\quickbrain.txt","w");
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
    quick=fopen("F:\\quickbrain.txt","r");
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
}

    return 0;
}


void level_t1(void){
end = time(NULL)+4;
   for(;;){
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

 for(;;){
    if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d + %d = %d ", num1, num2,result_original); printf("\t\t\t\t\t\tScore: %d\n",score);
    printf("Enter 1 for True and Enter 2 for false expression:\n");
   Sleep(1000);
    system("cls");
    printf("Enter 1 for True and Enter 2 for false expression:\n");
    if(time(NULL)==end){
    scanf("%d", &result_user);
    end = time(NULL)+4;
    break;
 }
}
if(result_user==option){
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


void level_t2(void){
end = time(NULL)+4;
   for(;;){
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

 for(;;){
    if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d ",(end-time(NULL))); printf("\t\t\t\t\t\tScore: %d\n",score);
    printf("%d - %d = %d\n  ", num1, num2,result_original);
    printf("Enter 1 for True and Enter 2 for false expression:\n");
   Sleep(1000);
    system("cls");
    printf("Enter 1 for True and Enter 2 for false expression:\n");
    if(time(NULL)==end){
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
   for(;;){
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

 for(;;){
    if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d + %d = %d  ", num1, num2,result_original);  printf("\t\t\t\t\t\tScore: %d\n",score);
    printf("Enter 1 for True and Enter 2 for false expression:\n");
   Sleep(1000);
    system("cls");
    printf("Enter 1 for True and Enter 2 for false expression:\n");
    if(time(NULL)==end){
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


void level1(void){
end = time(NULL)+4;
   for(;;){
   num1=rand()%100;
   num2=rand()%10;
   result_original=num1+num2;

 for(;;){
   if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d + %d = _______  ", num1, num2);            printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+4;
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

void level2(void){
end = time(NULL)+5;
   for(;;){
   num1=rand()%100;
   num2=rand()%10;
   result_original=num1-num2;

 for(;;){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d - %d = _______\n  ", num1, num2);
   Sleep(1000);
    system("cls");
   if(time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+5;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==80)
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
   for(;;){
   num1=rand()%100;
   num2=rand()%100;
   result_original=num1+num2;

 for(;;){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d + %d = _______  ", num1, num2);          printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+6;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==120)
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
   for(;;){
   num1=rand()%100;
   num2=rand()%100;
   result_original=num1-num2;

 for(;;){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d - %d = _______  ", num1, num2);                   printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+7;
   break;
 }
}

if(result_user==result_original){
  score+=4;
  if(score==140)
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
   for(;;){
   num1=rand()%10;
   num2=rand()%10;
   result_original=num1*num2;

 for(;;){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d * %d = _______  ", num1, num2);                   printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+6;
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

void level6(void){
end = time(NULL)+7;
   for(;;){
   num1=rand()%100;
   num2=rand()%10;
   result_original=num1*num2;

 for(;;){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d * %d = _______  ", num1, num2);               printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+7;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==180)
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
   for(;;){
  printf("\nIgnore fractional part.\n");
   num1=rand()%100;
   num2=rand()%10;
   result_original=num1/num2;

 for(;;){
    if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d / %d = _______  ", num1, num2);               printf("\t\t\t\t\t\tScore: %d\n",score);
   Sleep(1000);
    system("cls");
   if(time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%d", &result_user);
   end = time(NULL)+7;
   break;
 }
}

if(result_user==result_original){
  score+=4;
  if(score==200)
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
   for(;;){
printf("\nIgnore fractional part.\n");
   num1=rand()%100;
   num2=rand()%100;
   num3=rand()%4;

 switch(num3){

 case 1: {
  result_original=num1+num2;
  operator1 = 43;
  break; }

 case 2: {
  result_original=num1-num2;
  operator1 = 95;
  break; }

 case 3: {
  result_original=num1*num2;
  operator1 = 42;
  break; }

 case 4: {
  result_original=num1/num2;
  operator1 = 47;
  break; }
   }


 for(;;){
if((end-time(NULL))<0) end=time(NULL)+5;
    printf("Your remaining time is: %d\n",(end-time(NULL)));
    printf("%d %c %d = _______  ", num1,operator1, num2);                 printf("\t\t\t\t\t\tScore: %d\n",score);
 Sleep(1000);
    system("cls");
   if(time(NULL)==end){
   printf("Enter any value:\n");
   scanf("%f", &result_user);
   end = time(NULL)+9;
   break;
 }
}

if(result_user==result_original){
  score+=2;
  if(score==240)
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
printf("4.Every expression and blank carry two marks.\n");
Sleep(1000);
system("color 5F");
printf("5.Every level carry twenty marks.\n");
Sleep(1000);
system("color 3F");
printf("6.Press Enter to start the game.\n");
getchar();
system("cls");

}
