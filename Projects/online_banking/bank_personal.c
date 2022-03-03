#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bank_personal(void)
{
  char password[]="Saeed190", password1[30];
  printf("Enter Password to access to Bank Personal Account: ");
  int i=3;
  long long bank_balance;
 while(i>0){
  scanf("%s", &password1);
  if(!strcmp(password1,password))
  goto data;
  else {
   if(i==1) {printf("\nSorry! You Can't access to Bank Personal Account!\n\n"); exit(0);}
   else
   printf("\nYou have Entered wrong password, Enter You password again: ");
 } i--; }
data:{
  FILE *bank;
  bank = fopen("bank_personal.txt", "r");
  if(bank == NULL){
  bank = fopen("bank_personal.txt", "w");
  bank_balance=0;
  fprintf(bank,"Bank Balance: %lld\n",bank_balance);
  fclose(bank);
  }
else{
  char name1[20], name2[20];
  fscanf(bank,"%s %s %lld", &name1, &name2, &bank_balance);
  fclose(bank);
  }

while(3){
 int option;
printf("\nEnter 1 for Balance inquiry.\nEnter 2 for Balance Transaction.\nEnter 3 for Balance Deposit.\nEnter 4 to exit.\n");
scanf("%d", &option);
long long amount;
switch(option){
 case 1:
   printf("Current Balance in Bank is %lld\n",bank_balance); break;
 case 2:{
    again:
   printf("Enter the amount for transaction: "); scanf("%lld",&amount);
   if(amount>bank_balance) {printf("Bank have insufficient Balance for transaction!\n"); goto again;}
   else {
    bank_balance-=amount;
    printf("Thank You! Transaction Successfully done.\n");
   }} break;
 case 3:
 {
   printf("Enter amount to deposit: "); scanf("%lld", &amount);
   bank_balance+=amount;
   printf("Thanks for deposit. Your new balance is %lld\n", bank_balance);
} break;
case 4:
{ bank_data_change(bank_balance);
    exit(0);} break;
default:
    printf("You have Entered Invalid Option.\n");
}}
}}
