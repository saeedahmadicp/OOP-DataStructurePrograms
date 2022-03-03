#include <stdio.h>


void create_account(void){
 int serial_no, account_no;
 general_data_acces(&serial_no, &account_no);

  int num_files=1000;
  FILE *files[num_files];
  int i;
  for(i=0; i<num_files; i++){
  if(i==serial_no){
    char filename[num_files];
    sprintf( filename, "account%d.txt", i);
    files[i]=fopen(filename,"w");

    char name1[15], name2[15];
int pin_code1,pin_code2,pin_code;
long long amount;

printf("enter your name(name1 name2)\n");
scanf("%s %s", &name1, &name2);

printf("Enter your PIN code: ");

again1: {scanf("%d", &pin_code1);
printf("Enter your PIN code again: ");
scanf("%d", &pin_code2);}
if(pin_code1==pin_code2)
    pin_code=pin_code1;
else {printf("PIN code not matching.\nPlease enter again");
  goto again1; }

printf("Enter your initial amount to add to your account: ");
scanf("%lld", &amount);
bank_data_change(amount);

fprintf(files[i],"Account Holder: %s %s\nPIN Code: %d\nAccount Number: %d\nCurrent Balance: "
        "%lld\n",name1, name2, pin_code, account_no, amount);
fclose(files[i]);
printf("\n\n\tYour Account has Successfully Created!\nYour account number is %d\nThank You for banking with us.\n\n",account_no);}
}}

