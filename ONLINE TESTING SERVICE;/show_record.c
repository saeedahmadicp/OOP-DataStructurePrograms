#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>



void show_record(void){

    system("cls");
    system("Color 3f");

    FILE *read;

read=fopen("student_record\\store_record.txt","r");
  char sent[100];
  while(fgets(sent, 100, read)){
    printf("%s",sent);
    }
   fclose(read);
   getch(); system("cls");
}
