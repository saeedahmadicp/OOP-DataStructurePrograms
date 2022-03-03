#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
inline void print_line(void);
int array_minimize_tail(int arr[],int size, int minimum);
int array_minimize(int arr[],int size);

int main()
{
    system("Color 3f");
    int size;
    cout << "How many number you wants to compare: ";
    cin >> size;

    int arr[size];

    cout << "Enter the Elements you want to compare:" << endl;
    for(int i=0; i<size; i++){
     cout << "Enter the "<< i+1 << " element: ";
     cin >> arr[i];
    }


   print_line();
    cout << "\tMinimum element is " << array_minimize(arr, size)<< "." << endl;
   print_line();

  getch();
    return 0;
}


inline void print_line(void){
 for(int i=0; i<40; i++) cout << ".";
 cout << endl;
}

int array_minimize(int arr[],int size){
 return array_minimize_tail(arr,size,arr[size-1] );
}

int array_minimize_tail(int arr[],int size, int minimum){


if(size>1){

  if(minimum > arr[size-1])
  minimum=arr[size-1];

  return array_minimize_tail(arr,size-1,minimum);
}
else
    return minimum;
}























