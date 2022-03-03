#include <iostream>
#include <conio.h>

using namespace std;
inline void print_line(void);
int array_maximize_tail(int arr[],int size, int maximum);
int array_maximize(int arr[],int size);

int main()
{
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
    cout << "maximum element is " << array_maximize(arr, size)<< "." << endl;
   print_line();

  getch();
    return 0;
}


inline void print_line(void){
 for(int i=0; i<40; i++) cout << ".";
 cout << endl;
}


int array_maximize(int arr[],int size){
 return array_maximize_tail(arr,size,arr[size-1] );
}


int array_maximize_tail(int arr[],int size, int maximum){


if(size>0){

  if(maximum < arr[size-1])
  maximum=arr[size-1];

  return array_maximize_tail(arr,size-1,maximum);
}
else
    return maximum;
}
