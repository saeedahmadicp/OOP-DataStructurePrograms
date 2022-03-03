#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void review_the_test(void){

   system("cls");
   system("Color 3f");

    FILE *test;

  test=fopen("mcqs_record\\saeedmcqs.txt","r");
  char sent[100];
  while(fgets(sent, 100, test)){
    printf("%s",sent);
    }
   fclose(test);


}
