#include <iostream>
#include <cstdbool>
#include <cstdlib>

using namespace std;

class ArrayList{
   private:
      int* array;
      int size;
      int max_size;
   public:
     ArrayList(int size = 100);
    ~ArrayList();
    //function declerations
     bool isEmpty(void) const;
     bool isFull(void) const;
     int listSize(void) const;
     int maxListSize(void) const;
     void insertAtEnd(int item);
     void insertAtLocation(int location, int item);
     int searchItem(int item) const;
     void printArray(void) const;
     void removeAtEnd(void);
};

int main(void){
    ArrayList a(20);
      a.insertAtEnd(20);
      a.insertAtEnd(30);
      a.insertAtEnd(40);
      a.insertAtEnd(50);
      a.printArray();
      
      a.insertAtLocation(2, 500);
      a.printArray();


    return 0;
}


     ArrayList :: ArrayList(int size){
         this->array = new int[size];
         this->size = 0;
         this->max_size = size;
     }

    ArrayList ::~ArrayList(){
        delete [] this->array;
    }

    //function declerations
     bool ArrayList :: isEmpty(void) const{
         return this->size == 0;
     }

     bool ArrayList :: isFull(void) const{
         return this->size == max_size;
     }

     int ArrayList :: listSize(void) const{
         return this->size;
     }

     int ArrayList :: maxListSize(void) const{
         return this->max_size;
     }

     void ArrayList :: insertAtEnd(int item){
         if(isFull())
            cerr << "list is Full!"<<endl;
         else 
          array[size++] = item;
     }

     void ArrayList :: insertAtLocation(int location, int item){
          if(isFull())
              cerr << "list is Full!"<< endl;
           else {
             if(location > size)
               cerr << "Your have Entered invalid location!"<<endl;
              else{
                  for(int i=size; i>location; i--)
                     array[i] = array[i-1];
                   array[location] = item;
                    size++;
              }

           }

     }
     
    int ArrayList :: searchItem(int item) const{
       if(isEmpty())
          cerr << "List is Empty!"<<endl;
        int i;
        for(i=0; i<size; i++)
           if(array[i] == item)
             return i;
          if(i==size)
             return -1;
    }

     void ArrayList :: printArray(void) const{
        if(isEmpty())
           cerr << "List is Empty!"<<endl;
        else 
          for(int i=0; i<size; i++)
             cout << i+1 << " element is: "<< array[i] <<endl;

     }

     void ArrayList :: removeAtEnd(void){
          if(isEmpty())
            cerr << "List is Empty!"<<endl;
          else 
              size--;
     }