#include <stdio.h>
#include <stdlib.h>

void bank_data_change(long long bank_amount){

  long long original_balance;
  original_balance = bank_data_read();

 original_balance+=bank_amount;
  FILE *change_data;
  change_data = fopen("bank_personal.txt", "w");
  fprintf(change_data,"Bank Balance: %lld", original_balance);
  fclose(change_data);

}
