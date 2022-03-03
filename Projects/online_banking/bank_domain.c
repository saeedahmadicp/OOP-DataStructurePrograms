#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bank_domain(void)
{
 int serial_no;
  FILE *gda;
gda=fopen("general_data.txt", "r");
if(gda==NULL)
serial_no = 0;

else{
 char name1[10], name2[10];
fscanf(gda,"%s %s %d",&name1, &name2, &serial_no);
} fclose(gda);
  printf("\nYour have now %d accounts in your bank.\n", serial_no);
  int num=100000,i;
  for(i=0; i<serial_no; i++)
  printf("%d) Account No: %d\n", i+1, num+i);

  printf("\n\n");
}
