#include <stdio.h>
#include <stdlib.h>

long long bank_data_read(void){
long long bank_amount;

  FILE *read_data;
  read_data = fopen("bank_personal.txt", "r");
  if(read_data == NULL) bank_amount =0;
  else{
  char name1[20], name2[20];
  fscanf(read_data,"%s %s %lld", &name1, &name2, &bank_amount);
  fclose(read_data);
  }
return bank_amount;
}
