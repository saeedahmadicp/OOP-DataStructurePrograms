#include <iostream>
#include <conio.h>

using namespace std;
int array_miximize(int arr[],int size);
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
    cout << "\tThe largest element is " << array_miximize(arr, size)  << "." << endl;
   print_line();

  getch();
    return 0;
}

inline void print_line(void){
 for(int i=0; i<40; i++) cout << ".";
 cout << endl;
}

int array_miximize(int arr[],int size){
int maximum = 1;

if(size>0){

    if(maximum < array_miximize(arr, size-1))
        maximum = array_miximize(arr, size-1);
    else
        return maximum;
    }

else
 return maximum;
}

