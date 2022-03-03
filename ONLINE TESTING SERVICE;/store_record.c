#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void store_record(char filename[],int marks, int t_marks){
   FILE *read;
   read = fopen(filename, "r");
   char sent1[100], sent2[100],sent3[100], sent4[100],sent5[100];

   fgets(sent1 , 100 , read);
   fgets(sent1 , 100 , read);
   fgets(sent2, 100 , read);
   fgets(sent3 , 100 , read);
   fgets(sent4 , 100 , read);
   fgets(sent5, 100 , read);
   fclose(read);

   FILE *stor_record;
   stor_record = fopen("student_record\\store_record.txt", "a");
   float percentage;
   percentage = ((float)marks/(float) t_marks)*100.0f;
   fprintf(stor_record, "%s%s%s%s%s", sent1, sent2, sent3, sent4, sent5);
   fprintf(stor_record,"Obtained Marks: %d\tTotal Marks: %d \tPercentage: %.2f\n\n",marks,t_marks,percentage);
   for(int j=0; j<2; j++){for(int i=0; i<60; i++) fprintf(stor_record,"*"); fprintf(stor_record,"\n");}
   fclose(stor_record);
    system("cls");
}
