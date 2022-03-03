#include <stdio.h>

void general_data_acces(int *serial_no,int *account_no){
FILE *gda;
gda=fopen("general_data.txt", "r");
if(gda==NULL)
{

 gda=fopen("general_data.txt", "w");
 int initial_serial_no, initial_account_no;
 *serial_no = initial_serial_no=0;
 *account_no = initial_account_no=100000;
 fprintf(gda, "Serial No: %d\nAccount No: %d",initial_serial_no, initial_account_no);
 fclose(gda);
}
else{
 char name1[10], name2[10];
fscanf(gda,"%s %s %d",&name1, &name2, serial_no);
fscanf(gda,"%s %s %d",&name1, &name2, account_no);
 fclose(gda);
}
 gda=fopen("general_data.txt", "w");
 int new_serial_no, new_account_no;
 new_serial_no=*serial_no +1;
 new_account_no=*account_no +1;
 fprintf(gda, "Serial No: %d\nAccount No: %d",new_serial_no, new_account_no);
 fclose(gda);





}
