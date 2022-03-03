#include <iostream>
#include <time.h>
#include <cstdlib>
#include <chrono>

using namespace std;
using namespace std::chrono;
 
// merge the two halves into a sorted array
void Merge(int *a, int leftStart, int rightEnd, int mid) {
    int i = leftStart;
    int j = mid + 1;
    int index = 0;
    
    int temp[rightEnd-leftStart+1];
    
    // merge the two parts into the temp[]
    while (i <= mid && j <= rightEnd) {
        if (a[i] < a[j]) {
            temp[index] = a[i];
            index++; i++;
        }
        else {
            temp[index] = a[j];
            index++; j++;
        }
    }
    // insert all the remaining values from i to mid into temp[]
    while (i <= mid) {
        temp[index] = a[i];
        index++; i++;
    }
    // insert all the remaining values from j to rightEnd into temp[]
    while (j <= rightEnd) {
        temp[index] = a[j];
        index++; j++;
    }
    // assign sorted data stored in temp[] to a[]
    for (i = leftStart; i <= rightEnd; i++) {
        a[i] = temp[i];
    }
}
 
void MergeSort(int *a, int leftStart, int rightEnd) {
    int mid;
    if (leftStart < rightEnd) {
        mid=(leftStart+rightEnd)/2;
    
        MergeSort(a, leftStart, mid);
        MergeSort(a, mid+1, rightEnd);
    
        Merge(a, leftStart, rightEnd, mid);
    }
}
 
int main() {
    int size;
    int* array;
    cout << "Enter the size: ";
     cin >> size;

      array = new int[size];

    srand(time(NULL));
  
  //initializing the array with random elements
    for(int i=0; i<size; i++)
    array[i] = rand()%10000;

    //start the timer
    auto start = high_resolution_clock::now();
    MergeSort(array, 0, size-1);
    //stop the timer
     auto stop = high_resolution_clock::now();
     //measuring the exucation time in microseconds
     auto duration = duration_cast<microseconds>(stop - start);
     // printing the execution time
     cout << duration.count() << endl;
    //printing the sorted Elements
    cout<< "The Element in sorted order is: "<< endl;
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";

   delete [] array;
    return 0;
}