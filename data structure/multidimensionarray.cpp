#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void FillArray(int** arr, int row, int col);
void PrintArray(int** arr, int row, int col);

int main(void){
    int col, row;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    int ** pointer;
       pointer = new int* [row];
      for(int i=0; i<row; i++)
         pointer[i] = new int[col];
    
    FillArray(pointer, row, col);
    PrintArray(pointer, row, col);

    return 0;
}

void FillArray(int** arr, int row, int col){
   
   for(int i=0; i<row; i++){
        cout << "Enter the "<< col << " Elements: ";
     for(int j=0; j<col; j++)
         cin >> arr[i][j]; 
   }
}
void PrintArray(int** arr, int row, int col){
    for(int i=0; i<row; i++){
     for(int j=0; j<col; j++)
       cout << arr[i][j] << " ";
     cout << endl;
    }
}