#include <iostream>
#include <cstdlib>
#include <cstdbool>

using namespace std;



int binarySearch(int* items,int size, int item){
  int mid;
  int first =0;
  int last = size-1;
  bool found = false;

      while(first <= last && !found){
     mid = (first+last)/2;
     if(items[mid]==item)
         found = true;
     else if(items[mid]>item)
           last = mid-1;
     else
           first = mid+1;       
  }

  return found ? mid : -1;

}



int main(void){
   
   int array[4] = {1,2,4,5};
   cout << binarySearch(array,4,2);


    return 0;
}