#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
void sorted_array(int a[], int size);
 int binary_search(int a[], int size, int element);

int main()
{   system("Color 3f");
    int num, search_element, search_element_index;
    cout << "How many elements you want to enter: ";
    cin >> num;
    int arr[num];
    cout  <<"Enter all the "<< num << " elements: "<< endl;
    for(int i=0; i<num; i++)
    cin >> arr[i];
    sorted_array(arr, num);
    cout << "The element in sorted form is: "<< endl;
    for(int i=0; i<num; i++)
    cout << arr[i] << " ";
    cout << endl;
    cout <<"What element you want to search in: ";
    cin >> search_element;
    search_element_index = binary_search(arr,num,search_element );
    if(search_element_index != -1)
        cout << "The element " << search_element << " is exist in your array, and its index is: "
        << search_element_index << "." << endl;
    else
    cout << "Not exist in the array!"<< endl;
    getch();
    return 0;
}

// bubble sorting
void sorted_array(int a[], int size){
int temp;
for(int i=0; i<size; i++){
 for(int j=0; j<size-1-i; j++){
    if(a[j] > a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
    }}}}

 //Binary Search
 int binary_search(int a[], int size, int element)
 {
  int start, end , middle;
   start = 0;
   end = size-1;

   while(start<=end){
     middle = (start + end) / 2;
     if(a[middle] == element)//if the element is equal to the middle element
       return middle;
     else if(a[middle] < element) //if the element is greater than the middle element
        start = middle+1;
      else if(a[middle] > element) //if the element is less than the middle element
        end = middle-1;
   }
     return -1;
 }









