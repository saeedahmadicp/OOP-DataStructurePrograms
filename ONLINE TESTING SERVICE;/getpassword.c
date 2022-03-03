#include <stdio.h>
#include <conio.h>

void GetPassword(char* password, int SIZE){
  int i=0;
  char ch;
  enum {ENTER =13, BACKSPACE = 8, TAB = 9};
  while(3){
	  ch = getch();
	 if(ch == ENTER || ch == TAB){
		password[i] = '\0';
		break;
	 }
	else if(ch == BACKSPACE){
	  if(i>0){  i--; printf("\b \b"); }
	}
   else {
	  password[i++] = ch;
	  printf("* \b");
   }} printf("\n");
   }
