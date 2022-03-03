#include <stdio.h>

void open_account(void){
int account_no, serial_no;

long long bank_balance;
  bank_balance = bank_data_read();

printf("Enter Your Account number: ");
again:
scanf("%d", &account_no);
serial_no=account_no-100000;

if(serial_no<0)
{
printf("You have Entered Invalid Account number.\n");
printf("Enter Your account number again:\n");
goto again;
}
   int num_files=1000;
  FILE *files[num_files];
  int i;
  for(i=0; i<num_files; i++){
  if(i==serial_no){
    char filename[num_files];
    sprintf( filename, "account%d.txt", i);
    files[i]=fopen(filename,"r");
if(files[serial_no]==NULL)
{
printf("There is no account on this title!\n");
printf("Enter Your account number again:\n");
goto again;
}
else
{
char test1[10], test2[10], line_changer[100];
long long general, new_bal, CURRENT_BALANCE;
int PIN_CODE;
int line=1;
const char account_holder[100];
fgets(account_holder, 100,files[i]);
fscanf(files[i],"%s %s %lld",&test1, &test2, &general);  PIN_CODE=(int)general;
while(fgets(line_changer, 100, files[i])){
line++;
fscanf(files[i],"%s %s %lld",&test1, &test2, &general);
if(line == 3){
CURRENT_BALANCE=general; break;}
}
fclose(files[i]);


int PIN_code;
printf("Enter You PIN Code: ");
scanf("%d", &PIN_code);
if(PIN_code==PIN_CODE)
new_bal=CURRENT_BALANCE;
else{
 printf("You have Entered Wrong PIN Code.\nEntered you PIN code again.\n");
  scanf("%d", &PIN_code);
 if(PIN_code==PIN_CODE)
 new_bal=CURRENT_BALANCE;
 else {
printf("You have Entered Wrong PIN Code.\nEntered you PIN code again.\n");
  scanf("%d", &PIN_code);
 if(PIN_code==PIN_CODE)
 new_bal=CURRENT_BALANCE;
 else
  printf("Your account is temporary BLOCKED!\n");
  exit(0);
    }}

puts("\n\n");
int option, option1, deposit_amount, transaction_amount;
 menu: while(3){
  printf("Enter 1 for balance inquiry\nEnter 2 for transaction.\nEnter 3 for Balance Deposit.\nEnter 4 to Exit.\n");
 scanf("%d",&option);
 if(option==1){
   printf("Your Current balance is: %d\n",new_bal);
   printf("enter 1 to exit.\nEnter 2 to goto main menu again:\n");
   scanf("%d", &option1);
   if(option1==1) goto store_data;
   else
   goto menu;
 }
 else if(option==2){
  printf("Enter amount for Transaction: ");
  scanf("%d",&transaction_amount);
  if(transaction_amount<=new_bal){
  if(transaction_amount>bank_balance){ printf("Sorry! Bank have insufficient Balance for your transaction!\n"); goto menu;}
else{
 new_bal-=transaction_amount;
 printf("Thank you for banking!\n");
 printf("enter 1 to exit.\nEnter 2 to goto main menu again:\n");
 scanf("%d", &option1);
 if(option1==1) goto store_data;
 else
    goto menu;
  }}
  else {printf("You have insufficient balance.\n");
  goto menu;
  }}
 else if(option==3){
 printf("Enter amount to deposit:");
 scanf("%d",&deposit_amount);
new_bal+= deposit_amount;
printf("\nThank you for Depositing Money!\nYour Current Balance is now Rs: %d\n",new_bal);
   printf("Enter 1 to exit.\nEnter 2 to goto main menu again:\n");
   scanf("%d", &option1);
   if(option1==1) goto store_data;
   else
   goto menu;
 }
 else goto store_data;
 }


  store_data:{
     FILE *files[num_files];
     sprintf( filename, "account%d.txt", serial_no);
     files[serial_no]=fopen(filename,"w");

fprintf( files[serial_no],"%sPIN Code: %d\nAccount Number: %d\nCurrent Balance: %d\n",account_holder, PIN_code, account_no, new_bal);
fclose( files[serial_no]);}

 long long change_bal;
 change_bal=new_bal-CURRENT_BALANCE;
 bank_data_change(change_bal);

}}}}
