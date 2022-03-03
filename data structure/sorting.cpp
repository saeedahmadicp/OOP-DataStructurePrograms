#include <iostream>

using namespace std;


//insertion sorting 
void insertionSorting(int* array, int size){
  int temp;
  int location;
  for(int i=1; i<size; i++){
     if(array[i]<array[i-1]){
         temp = array[i];
         location = i;
     do{
            array[location] = array[location-1];
            location--;
       }while(location > 0 && array[location-1] > temp);
     }
    array[location] = temp;
  }
}




//selection sort
void swap(int& a, int& b){
    int c;
    c = a; a = b; b = c;
}

int minLoc(int* array, int first, int last){
    int minimum = first;
    for(int i= first+1; i<=last; i++)
    if(array[i]<array[minimum])
        minimum = i;
        
    return minimum;
}

void selectionSort(int* array, int size){
   int minimum;
  
  for(int i=0; i<size; i++){
     minimum = minLoc(array,i,size-1);
     swap(array[i],array[minimum]); 
  }
}


//Quick Sort
int partition(int* array,int low, int high){
   int pivot = low;
   int i, j;
   i = low; j = high;

   while(i<j){
     do{
         i++;
     }while(array[i] <= array[pivot]);
     do{
         j--;
     }while(array[j] > array[pivot]);
   if(i<j)
      swap(array[i], array[j]);
   }
    swap(array[pivot], array[j]);
    return pivot;
   }

void QuickSort(int* array, int low, int high){
    int pivot;
   if(low<high){
      pivot = partition(array,low,high);
      QuickSort(array,low,pivot);
      QuickSort(array,pivot+1, high); 
   }
}

//merge sort
void merge(int* array, int low, int mid, int high){
  int i = low;
  int j = mid+1;
  int index = 0;
  int temp[high-low+1];
 
   while(i <= mid && j <= high){
     if(array[i] < array[j]){
       temp[index] = array[i];
          index++; i++; 
       }
     else{
       temp[index] = array[j];
         index++; j++;
     }
   }

   while(i <= mid){
     temp[index] = array[i];
       index++; i++;
   }

   while(j <= high){
      temp[index] = array[j];
      index; j++;
   }

    for(int k=low; k<=high; k++)
     array[k] = temp[k];  
}

void mergesort(int* array, int low, int high){
   int mid;
   if(low<high){
      mid = (low+high)/2;
      mergesort(array, low, mid);
      mergesort(array, mid+1, high);
      merge(array, low, mid, high);
   }
}

//decleration for heapsort's functions
void heapify(int *array, int size, int root);
void heapsort(int *array, int size);

//shellsort
void intervalInsertionSort(int* array, int begin, int increment,int size);
void shellsort(int* array, int size);


int main(void){

   int num;
   int *a;
   cout << "Enter the size: ";
   cin >> num;
   a = new int[num];
    cout << "Enter the elements: ";
    for(int i=0; i<num; i++)
       cin >> a[i];
  cout << endl;
   for(int i=0; i<num; i++)
      cout << a[i]<< " ";

     shellsort(a, num);

   cout << endl;
   for(int i=0; i<num; i++)
      cout << a[i]<< " ";


   delete [] a;

    return 0;
}






//Heap Sort 
void heapify(int* array, int size, int root){
  int largest = root;
  int leftChild = 2*root + 1;
  int rightChild = 2*root + 2;

  if(leftChild < size && array[leftChild] > array[largest])
       largest = leftChild;
  if(rightChild < size && array[rightChild] > array[largest])
       largest = rightChild;

    if(largest != root){
       swap(array[root], array[largest]);
       heapify(array, size, largest);
    }
}

void heapsort(int* array, int size){

   //build heap
   for(int i= (size/2 - 1); i >= 0; i--)
      heapify(array, size, i);

  //now extracting one by one element from the heap
   for(int i = size-1; i>=0; i--){
      swap(array[0], array[i]);
      //build the heap of the remaining elements
      heapify(array, i, 0);

   }

}



//shell sort

void shellsort(int* array, int size){
   int increment;
   for(increment =1; increment < (size-1)/9; increment = (3*increment)+1);

   do{
      for(int begin = 0 ; begin<increment; begin++)
        intervalInsertionSort(array,begin,increment,size);
     
      increment/=3;
   }while(increment>0);
}

void intervalInsertionSort(int* array, int begin, int increment,int size){
   int temp;
   int location;
   for(int i=increment; i<size; i+=increment){
      if(array[begin]<array[i]){
         temp = array[begin];
         location = i;
       do{
              array[location] = array[location-increment];
              location-=increment;
       }while(location>=increment && array[location - increment] > temp);
      }
      array[location] = temp;
   }

}

