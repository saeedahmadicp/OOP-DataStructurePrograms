#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>



int main()
{

char posit[3][3]={49,50,51,52,53,54,55,56,57};
int i, j, count=1, col, row, position;
printf("Select any position:\n");
for(i=0; i<3;i++){
    for(j=0; j<3; j++){
      printf(" %c ", posit[i][j]);
      if(j!=2) printf("|");
    }puts("\n ----------");
}

srand((unsigned) time(NULL));

int user;
 while(count<=10){
 for(;;){
 col=rand()%3;
 row=rand()%3;
 if(row==0)
 position=row+col+1;
 else if(row==1)
 position=row+col+3;
 else
position=row+col+5;


        if(posit[row][col] != 'o' && posit[row][col] != 'x'){
         posit[row][col]= 'o';
         printf("Computer has selected position %d to fill it with o:\n", position);
         count++;
         break;}
 }
puts("\n"); /*new line*/

    for(i=0; i<3;i++){
    for(j=0; j<3; j++){
      printf(" %c ", posit[i][j]);
      if(j!=2) printf("|");
    }puts("\n ----------");
}
puts("\n");
 if(posit[0][0]=='o' &&posit[0][1]=='o' &&posit[0][2]=='o'){
    printf("Computer win!\n");
    break;
 }
 else if(posit[0][0]=='x' &&posit[0][1]=='x' &&posit[0][2]=='x'){
   printf("You win!\n");
    break;
 }
 else if(posit[1][0]=='o' &&posit[1][1]=='o' &&posit[1][2]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[1][0]=='x' &&posit[1][1]=='x' &&posit[1][2]=='x'){
   printf("You win!\n");
    break;
 }
 else if(posit[2][0]=='o' &&posit[2][1]=='o' &&posit[2][2]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[2][0]=='x' &&posit[2][1]=='x' &&posit[2][2]=='x'){
   printf("You win!\n");
    break;
 }

 else if(posit[0][0]=='o' &&posit[1][1]=='o' &&posit[2][2]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][0]=='x' &&posit[1][1]=='x' &&posit[2][2]=='x'){
   printf("You win!\n");
    break;
 }
 else if(posit[0][2]=='o' &&posit[1][1]=='o' &&posit[2][0]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][2]=='x' &&posit[1][1]=='x' &&posit[2][0]=='x'){
   printf("You win!\n");
    break;
 }
   else if(posit[0][0]=='o' &&posit[1][0]=='o' &&posit[2][0]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][0]=='x' &&posit[1][0]=='x' &&posit[2][0]=='x'){
   printf("You win!\n");
    break;
 }
  else if(posit[0][1]=='o' &&posit[1][1]=='o' &&posit[2][1]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][1]=='x' &&posit[1][1]=='x' &&posit[2][1]=='x'){
   printf("You win!\n");
    break;
 }
  else if(posit[0][2]=='o' &&posit[1][2]=='o' &&posit[2][2]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][2]=='x' &&posit[1][2]=='x' &&posit[2][2]=='x'){
   printf("You win!\n");
    break;
 }
else
 goto human;


human:{
if(count==11){
printf("Draw!");
break;}

 for(;;){
 printf("enter position to fill the blink:\n");
scanf("%d", &user);
switch(user){
    case 1: { row =0; col=0; break;}
    case 2: { row =0; col=1; break;}
    case 3: { row =0; col=2; break;}
    case 4: { row =1; col=0; break;}
    case 5: { row =1; col=1; break;}
    case 6: { row =1; col=2; break;}
    case 7: { row =2; col=0; break;}
    case 8: { row =2; col=1; break;}
    case 9: { row =2; col=2; break;}
        }
        if(posit[row][col] != 'o' && posit[row][col] != 'x'){
         posit[row][col]= 'x';
         printf("you have selected position %d to fill it with x:\n", user);
         count++;
         break;
 }}
puts("\n");
for(i=0; i<3;i++){
    for(j=0; j<3; j++){
      printf(" %c ", posit[i][j]);
      if(j!=2) printf("|");
    }puts("\n ----------");
}
 if(posit[0][0]=='o' &&posit[0][1]=='o' &&posit[0][2]=='o'){
    printf("Computer win!\n");
    break;
 }
 else if(posit[0][0]=='x' &&posit[0][1]=='x' &&posit[0][2]=='x'){
   printf("You win!\n");
    break;
 }
 else if(posit[1][0]=='o' &&posit[1][1]=='o' &&posit[1][2]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[1][0]=='x' &&posit[1][1]=='x' &&posit[1][2]=='x'){
   printf("You win!\n");
    break;
 }
 else if(posit[2][0]=='o' &&posit[2][1]=='o' &&posit[2][2]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[2][0]=='x' &&posit[2][1]=='x' &&posit[2][2]=='x'){
   printf("You win!\n");
    break;
 }

 else if(posit[0][0]=='o' &&posit[1][1]=='o' &&posit[2][2]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][0]=='x' &&posit[1][1]=='x' &&posit[2][2]=='x'){
   printf("You win!\n");
    break;
 }
 else if(posit[0][2]=='o' &&posit[1][1]=='o' &&posit[2][0]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][2]=='x' &&posit[1][1]=='x' &&posit[2][0]=='x'){
   printf("You win!\n");
    break;
 }if(j!=2) printf("|");
  else if(posit[0][0]=='o' &&posit[1][0]=='o' &&posit[2][0]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][0]=='x' &&posit[1][0]=='x' &&posit[2][0]=='x'){
   printf("You win!\n");
    break;
 }
  else if(posit[0][1]=='o' &&posit[1][1]=='o' &&posit[2][1]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][1]=='x' &&posit[1][1]=='x' &&posit[2][1]=='x'){
   printf("You win!\n");
    break;
 }
  else if(posit[0][2]=='o' &&posit[1][2]=='o' &&posit[2][2]=='o'){
    printf("Computer win!\n");
    break;
 }


 else if(posit[0][2]=='x' &&posit[1][2]=='x' && posit[2][2]=='x'){
   printf("You win!\n");
    break;
 }

if(count==11){
printf("Draw!");
break;}

}}

return 0; }


