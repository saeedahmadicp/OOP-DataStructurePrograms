 #include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    system("Color 3f");
    int size;
    cout << "Enter the size: " ; cin >> size;

    int arr[size][size];
    for(int i=0; i<size; i++)
    for(int j=0; j<size; j++)
     arr[i][j] = 0;

    int num=1, i=0, j=0, control=size*size-1;
    i= size/2; j=size-1;
    arr[i][j] = num++;

    while(control>0){
       if(i< size-1 && j< size -1) {
         if(!arr[i+1][j+1]) { arr[++i][++j] = num++;}
         else { arr[i][--j]= num++;   }}

       else if(i< size-1 && j == size -1){
         if(!arr[i+1][0]) { arr[++i][j=0] = num++; }
         else { arr[i][--j] = num++; }}

       else if(i == size-1 && j< size -1){
        if(!arr[0][j+1]) { arr[i=0][++j] = num++;   }
         else { arr[i][--j] = num++; }}

       else if(i == size-1 && j == size -1){
        if(!arr[0][0]) { arr[i=0][j=0] = num++;   }
        else { arr[i][--j] = num++;}}
       --control;
  }

   for(int i=0; i< size; i++){
    for(int j=0; j< size; j++){
      cout << setw(4)<< arr[i][j] << " ";
    } cout << endl;}
    getch();
    return 0;
}





