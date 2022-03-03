#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int main(void){
	int flag =0;
   time_t end = time(NULL) + 5;
   while(!kbhit() and flag == 0){
	 printf("Hello World!");
    if(end == time(NULL)) break;	 
   }
   
   
 return 0;
}
