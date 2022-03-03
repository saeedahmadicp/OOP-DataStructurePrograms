#include <stdio.h>
#include <stdlib.h>

int read_rollno(void){
   int roll_no;
   char ch1[8], ch2[5];
   char directry[] = "mcqs_record\\\\";
   char filename[45];
   sprintf(filename, "%sstorerollno.txt",directry);
   FILE *read;
   read = fopen(filename, "r");
   if(read == NULL) {
	read = fopen(filename, "w");
     roll_no = 0;
    fprintf(read, "Roll No: %d", roll_no);
    fclose(read);
   }
  else{
	fscanf(read, "%s%s%d", &ch1, &ch2, &roll_no);
	fclose(read);
  }
  return ++roll_no;
}

void store_rollno(int roll_no){

   char directry[] = "mcqs_record\\\\";
   char filename[45];
   sprintf(filename, "%sstorerollno.txt",directry);

   FILE *store;
   store = fopen(filename, "w");
   fprintf(store, "Roll No: %d", roll_no);
   fclose(store);
}
