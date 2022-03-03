#include <iostream>
#include <cstdlib>
#include <chrono>

using namespace std;
using namespace std :: chrono;

int fact(int num){
   if(num==1)
      return 1;
    else
      return num* fact(num-1);
    
}

int largestElement(const int array[], int lowerIndex, int upperIndex){
    int max;
   if(lowerIndex == upperIndex)
      return array[lowerIndex];
   else{
     max = largestElement(array, lowerIndex+1, upperIndex);
     if(array[lowerIndex] >= max)
        return array[lowerIndex];
     else 
        return max;

   }
}



struct node{
    int data;
    node* link;
    node(int d=0, node* l=NULL){
        data = d;
        link = l;
    }
    void initiailize(int data, node* link){
        this->data = data;
        this->link = link;
    }
};

void printReverse(const node* current){
    if(current != NULL){
        printReverse(current->link);
        cout << current->data << endl;
    }
}

int fibonacci(int a, int b, int num){
    if(num == 1)
      return a;
    else if(num == 2)
       return b;
    else 
      return fibonacci(a,b, num-1)+ fibonacci(a,b, num-2);
}


void moveDisks(int count, int needle1, int needle2, int needle3){
   
   if(count > 0){
       moveDisks(count-1, needle1, needle2, needle3);
       cout<< "Now move the disk "<< count << " from the " << needle1 << " to "<< needle3 << endl;
       moveDisks(count-1, needle2, needle3, needle1);
   }
}

void binaryConversion(int number, int base){
     if(number>0){
         binaryConversion(number/base, base);
         cout << number%base ;
     }
}

int main(void){
 
    int number = 8;
    int base = 2;
    binaryConversion(number, base );
    return 0;
}

