#include <iostream>
#include <conio.h>

using namespace std;
int array_minimize(int arr[],int size);
inline void print_line(void);

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
    cout << "Minimum element is " << array_minimize(arr, size)  << "." << endl;
 print_line();
  getch();
    return 0;
}

inline void print_line(void){
 for(int i=0; i<40; i++) cout << ".";
 cout << endl;
}

int array_minimize(int arr[],int size){

if(size>0){

    if(arr[size -1] < array_minimize(arr, size-1))
    return arr[size-1];
    else
        return array_minimize(arr, size-1);
    }

else
 return arr[0];
}




























